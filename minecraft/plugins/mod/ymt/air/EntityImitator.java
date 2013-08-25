/**
 * Copyright 2013 Yamato
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package mod.ymt.air;

import java.util.Collection;
import java.util.List;
import mod.ymt.cmn.Coord3D;
import mod.ymt.cmn.Utils;
import net.minecraft.src.AxisAlignedBB;
import net.minecraft.src.GLAllocation;
import net.minecraft.src.MathHelper;
import net.minecraft.src.NBTBase;
import net.minecraft.src.NBTTagCompound;
import net.minecraft.src.NBTTagList;
import net.minecraft.src.World;

/**
 * @author Yamato
 *
 */
public abstract class EntityImitator extends EntityCraftCore {
	/**
	 * DataWatcher -> BlockID
	 */
	protected final int DWKEY_BLOCK = 12;
	/**
	 * DataWatcher -> x
	 */
	protected final int DWKEY_BLOCK_X = 13;
	/**
	 * DataWatcher -> y
	 */
	protected final int DWKEY_BLOCK_Y = 14;
	/**
	 * DataWatcher -> z
	 */
	protected final int DWKEY_BLOCK_Z = 15;
	
	protected final ImitationSpace space;
	protected State status = State.INIT;
	protected boolean requestSurfaceFromClient = false;
	
	protected int glCallList = -1;
	protected boolean glUpdateList = true;
	protected boolean glDisposed = false;
	
	protected EntityImitator(World world) {
		super(world);
		this.space = new ImitationSpace(world);
		this.renderDistanceWeight = 10.0D; // 10�{���炢�����ł������_�����O����
		this.ignoreFrustumCheck = true; // ���̃G���e�B�e�B�̓J�����O�ł������_�����O����
		core.registerImitator(this);
	}
	
	public void addClientSemiSurfaces(byte[] data) {
		space.addClientNonSurfaceBlocks(deserializeClientBlocks(data));
		glUpdateList = true;
	}
	
	public void addClientSurfaces(byte[] data) {
		space.addClientSurfaceBlocks(deserializeClientBlocks(data));
		glUpdateList = true;
	}
	
	public void addClientTileData(byte[] data) {
		NBTTagCompound tag = newSerializer().deserializeNBT(data);
		if (tag != null) {
			space.setTileEntityData(tag);
		}
	}
	
	public synchronized void dispose() {
		if (!glDisposed) {
			if (0 < glCallList) {
				GLAllocation.deleteDisplayLists(glCallList);
			}
			glCallList = -1;
			glUpdateList = false;
			glDisposed = true;
		}
	}
	
	public ImitationSpace getImitationSpace() {
		return space;
	}
	
	public State getStatus() {
		return status;
	}
	
	public List<BlockData> getSurfaces() {
		return space.getSurfaceBlocks();
	}
	
	@Override
	public void onEntityUpdate() {
		super.onEntityUpdate(); // TODO �f�B�����W�����ړ��ł���悤�ɂ���
		cleanSubEntity();
		if (Utils.isServerSide(worldObj)) {
			switch (getStatus()) {
				case INIT: {
					removeBlock();
					break;
				}
				case RUNNING: {
					onEntityPositionUpdate();
					break;
				}
				case PUTBLOCK: {
					putBlock();
					break;
				}
				default: {
					setDead();
				}
			}
			if (requestSurfaceFromClient) {
				requestSurfaceFromClient = false;
				processSendSurfaceToClient(); // �N���C�A���g�ɕ\�ʃf�[�^�𑗐M
			}
		}
		else {
			switch (getStatus()) {
				case INIT:
					// �T�[�o�ɕ\�ʃf�[�^�����N�G�X�g
					core.net.sendRequestSurfacesToServer(entityId);
					status = State.RUNNING;
					break;
				default:
					onEntityPositionUpdate();
					break;
			}
		}
	}
	
	@Override
	public void readEntityFromNBT(NBTTagCompound tag) {
		super.readEntityFromNBT(tag);
		// �Ƃ肠�����S���ǂݍ��񂶂Ⴄ
		byte status = tag.getByte("ImitatorStatus");
		int block = tag.getInteger("ThisBlock");
		int this_x = tag.getInteger("ThisBlockX");
		int this_y = tag.getInteger("ThisBlockY");
		int this_z = tag.getInteger("ThisBlockZ");
		byte[] blocksData = tag.getByteArray("Blocks");
		NBTTagList tileData = tag.getTagList("TileEntities");
		
		// �G���e�B�e�B���𔽉f
		setStatus(State.fromCode(status));
		
		// ���̃u���b�N���𔽉f
		setThisBlock(block, this_x, this_y, this_z);
		// �ێ����Ă���u���b�N���𔽉f
		space.setServerAllBlocks(newSerializer().deserialize(new Coord3D(this_x, this_y, this_z), blocksData));
		
		// �ێ����Ă��� TileEntity ���𔽉f
		for (int i = 0; i < tileData.tagCount(); i++) {
			NBTBase base = tileData.tagAt(i);
			if (base instanceof NBTTagCompound)
				space.setTileEntityData((NBTTagCompound) base);
			else
				core.debugPrint("EntityImitator#writeEntityToNBT unknown tag %s", base);
		}
	}
	
	public void requestSurfaceFromClient() {
		requestSurfaceFromClient = true;
	}
	
	@Override
	public void setDead() {
		try {
			super.setDead();
		}
		finally {
			dispose();
		}
	}
	
	@Override
	public void terminate() {
		if (getStatus() == State.RUNNING) {
			// adjustPositionAndRotation ���N���C�A���g���ł����{����悤�ɉ��ǂ����ق����������Ȃ�
			adjustPositionAndRotation();
			setStatus(State.PUTBLOCK); // adjust ��ɂ͋����u���b�N�z�u
		}
	}
	
	@Override
	public void writeEntityToNBT(NBTTagCompound tag) {
		super.writeEntityToNBT(tag);
		// �Ƃ肠�����������݃f�[�^��p�ӂ���
		byte status = getStatus().getCode();
		int block = getThisBlock();
		Coord3D base = getThisBlockCoord();
		int this_x = base.x;
		int this_y = base.y;
		int this_z = base.z;
		byte[] blockData = newSerializer().serialize(space.getAllBlocks());
		NBTTagList tileData = new NBTTagList();
		
		// �ێ����Ă��� TileEntity ������������
		for (NBTTagCompound t: space.getAllTileEntities()) {
			tileData.appendTag(t.copy());
		}
		
		// �Z�b�g
		tag.setByte("ImitatorStatus", status);
		tag.setInteger("ThisBlock", block);
		tag.setInteger("ThisBlockX", this_x);
		tag.setInteger("ThisBlockY", this_y);
		tag.setInteger("ThisBlockZ", this_z);
		tag.setByteArray("Blocks", blockData);
		tag.setTag("TileEntities", tileData);
	}
	
	protected Collection<BlockData> deserializeClientBlocks(byte[] data) {
		List<BlockData> blocks = newSerializer().deserialize(getThisBlockCoord(), data);
		toSafeClientBlocks(blocks);
		return blocks;
	}
	
	@Override
	protected void entityInit() {
		super.entityInit();
		dataWatcher.addObject(DWKEY_BLOCK, 0);
		dataWatcher.addObject(DWKEY_BLOCK_X, 0);
		dataWatcher.addObject(DWKEY_BLOCK_Y, 0);
		dataWatcher.addObject(DWKEY_BLOCK_Z, 0);
	}
	
	@Override
	protected void finalize() throws Throwable {
		try {
			super.finalize();
		}
		finally {
			dispose();
		}
	}
	
	protected int getThisBlock() {
		return dataWatcher.getWatchableObjectInt(DWKEY_BLOCK);
	}
	
	protected Coord3D getThisBlockCoord() {
		int x = dataWatcher.getWatchableObjectInt(DWKEY_BLOCK_X);
		int y = dataWatcher.getWatchableObjectInt(DWKEY_BLOCK_Y);
		int z = dataWatcher.getWatchableObjectInt(DWKEY_BLOCK_Z);
		return new Coord3D(x, y, z);
	}
	
	protected int getThisBlockId() {
		return BlockData.unpackBlockId(getThisBlock());
	}
	
	protected int getThisBlockMetadata() {
		return BlockData.unpackMetadata(getThisBlock());
	}
	
	protected void initCraftBody(int x, int y, int z) {
		String ownerName = getOwnerName();
		int size = core.getCraftBodySize();
		for (BlockData data: space.getSurfaceBlocks()) {
			if (data.relPos.isZero()) { // EntityImitator ���g�� CraftBody �ɂȂ邽�� EntityCraftBody �͐������Ȃ�
				continue;
			}
			if (size < 0 || data.relPos.nearFrom(size, Coord3D.ZERO)) {
				int ax = x + data.relPos.x;
				int ay = y + data.relPos.y;
				int az = z + data.relPos.z;
				AxisAlignedBB aabb = data.block.getCollisionBoundingBoxFromPool(worldObj, ax, ay, az);
				if (aabb != null) {
					EntityAirCraft ent = new EntityCraftBody(worldObj, ownerName);
					// TODO ������ Invisible �̏Փ˔͈͂�ݒ肵�Ă���
					ent.setPosition(ax + 0.5, ay, az + 0.5);
					worldObj.spawnEntityInWorld(ent);
				}
			}
		}
	}
	
	protected Serializer newSerializer() {
		return new Serializer();
	}
	
	protected void toSafeClientBlocks(List<BlockData> blocks) {
		for (int i = blocks.size() - 1; 0 <= i; i--) {
			blocks.set(i, core.toSafeClientBlock(blocks.get(i)));
		}
	}
	
	protected void processSendSurfaceToClient() {
		// ���\�ʃu���b�N���M
		processSendSurfaceToClient(false); // �����ɂ������𑗐M���Ă���
		// �\�ʃu���b�N���M
		processSendSurfaceToClient(true);
		// �^�C���f�[�^���M
		processSendTileDataToclient();
	}
	
	protected void processSendSurfaceToClient(boolean isSurface) {
		// ���f�[�^ 5byte�A��f�[�^ 15byte�APacket250CustomPayload �̍ő�� 32767
		// 2048 �u���b�N���ɋ�؂�΁A�� 4 + 1 + 5 * 2048 = 10245�A�� 4 + 1 + 15 * 2048 = 30725 �Ŏ��܂�
		final int SIZE = 2048;
		final Serializer serializer = newSerializer();
		List<BlockData> blocks = isSurface ? space.getSurfaceBlocks() : space.getSemiSurfaceBlocks();
		for (int i = 0; i < blocks.size(); i += SIZE) {
			List<BlockData> subList = blocks.subList(i, Math.min(i + SIZE, blocks.size()));
			byte[] data = serializer.serialize(subList);
			if (isSurface)
				core.net.sendSurfaceToClient(entityId, data);
			else
				core.net.sendSemiSurfaceToClient(entityId, data);
		}
	}
	
	protected void processSendTileDataToclient() {
		final Serializer serializer = newSerializer();
		for (NBTTagCompound tag: space.getAllTileEntities()) {
			byte[] data = serializer.serializeNBT(tag);
			if (data != null && 0 < data.length) {
				if (32767 - 4 < data.length) { // Packet250CustomPayload �̍ő�
					core.debugPrint("EntityImitator#processSendTileDataToclient too big NBTTagCompound");
				}
				else {
					core.net.sendTileDataToClient(entityId, data);
				}
			}
		}
	}
	
	protected void putBlock() { // Side: Server
		if (Utils.isClientSide(worldObj)) {
			return;
		}
		int x = MathHelper.floor_double(posX);
		int y = (int) Math.round(posY);
		int z = MathHelper.floor_double(posZ);
		int d = getDirection(this);
		Materializer materializer = core.newMaterializer(worldObj, space);
		if (materializer.putBlocks(x, y, z, d)) {
			Utils.showMessage(worldObj, "HariboteAirCraft: Off");
			setStatus(State.END); // END ��
		}
		else {
			Utils.showMessage(worldObj, "HariboteAirCraft: Can't put block on here");
			setStatus(State.RUNNING); // RUNNING �֖߂�
		}
	}
	
	protected void removeBlock() { // Side: Server
		if (Utils.isClientSide(worldObj)) {
			return;
		}
		int x = MathHelper.floor_double(posX);
		int y = (int) Math.round(posY);
		int z = MathHelper.floor_double(posZ);
		Materializer materializer = core.newMaterializer(worldObj, space);
		materializer.addCoreBlock(x, y, z, getThisBlockId(), getThisBlockMetadata());
		if (materializer.removeBlocks(x, y, z)) {
			// �N���t�g�{�̂̍쐬
			initCraftBody(x, y, z);
			// ���b�Z�[�W�\��
			int all = space.countAllBlocks();
			int surface = space.countSurfaceBlocks();
			Utils.showMessage(worldObj, "HariboteAirCraft: Total " + all + " blocks, Surface " + surface + " blocks");
			// Running
			setStatus(State.RUNNING);
		}
	}
	
	protected void setStatus(State state) {
		this.status = state;
	}
	
	protected void setThisBlock(int blockId, int metadata, Coord3D point) {
		setThisBlock(BlockData.pack(blockId, metadata), point.x, point.y, point.z);
	}
	
	protected void setThisBlock(int block, int x, int y, int z) {
		dataWatcher.updateObject(DWKEY_BLOCK, block);
		dataWatcher.updateObject(DWKEY_BLOCK_X, x);
		dataWatcher.updateObject(DWKEY_BLOCK_Y, y);
		dataWatcher.updateObject(DWKEY_BLOCK_Z, z);
	}
	
	public enum State {
		INIT((byte) 0), RUNNING((byte) 1), PUTBLOCK((byte) 2), END((byte) 3);
		private final byte code;
		
		private State(byte code) {
			this.code = code;
		}
		
		public byte getCode() {
			return code;
		}
		
		public static State fromCode(byte code) {
			for (State stt: values()) {
				if (stt.getCode() == code) {
					return stt;
				}
			}
			return INIT;
		}
	}
}
