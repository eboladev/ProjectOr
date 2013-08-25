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
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import mod.ymt.air.op.AnvilOperator;
import mod.ymt.air.op.ButtonOperator;
import mod.ymt.air.op.ChestOperator;
import mod.ymt.air.op.DelicateDirectionalOperator;
import mod.ymt.air.op.DelicateOperator;
import mod.ymt.air.op.DirectionalOperator;
import mod.ymt.air.op.DoorOperator;
import mod.ymt.air.op.EnderChestOperator;
import mod.ymt.air.op.FluidOperator;
import mod.ymt.air.op.InventoryBlockOperator;
import mod.ymt.air.op.LadderOperator;
import mod.ymt.air.op.LeverOperator;
import mod.ymt.air.op.NormalOperator;
import mod.ymt.air.op.NullOperator;
import mod.ymt.air.op.PistonOperator;
import mod.ymt.air.op.RailOperator;
import mod.ymt.air.op.RailPoweredOperator;
import mod.ymt.air.op.StairsOperator;
import mod.ymt.air.op.TorchOperator;
import mod.ymt.air.op.TrapdoorOperator;
import mod.ymt.air.op.VineOperator;
import mod.ymt.air.op.WoodOperator;
import mod.ymt.cmn.NekonoteCore;
import mod.ymt.cmn.Utils;
import mod.ymt.cmn.WeakEntityCollection;
import net.minecraft.src.BaseMod;
import net.minecraft.src.Block;
import net.minecraft.src.Entity;
import net.minecraft.src.ITileEntityProvider;
import net.minecraft.src.Item;
import net.minecraft.src.ItemStack;
import net.minecraft.src.ModLoader;
import net.minecraft.src.World;

/**
 * @author Yamato
 *
 */
public class AirCraftCore extends NekonoteCore {
	private static final boolean DEBUG_RENDER_IMITATOR = false;
	private static final boolean DEBUG_RENDER_INVISIBLE = false;
	private static final boolean DEBUG_RENDER_MAT = false;
	private static final AirCraftCore instance = new AirCraftCore();
	
	private int blockIdPyxis = 209;
	private int blocklimit = 2000;
	private int craftBodySize = -1;
	private int moveKeepTime = 20 * 60;
	
	private int entityIdPyxis = 0;
	private int entityIdInvisible = 0;
	private int entityIdMobMat = 0;
	
	private BaseMod baseMod = null;
	private Block blockPyxis = null;
	
	public final AirCraftNetHandler net = new AirCraftNetHandler(this);
	private final Operator[] blockops = new Operator[Block.blocksList.length];
	private final Collection<EntityImitator> imitatorServer = new WeakEntityCollection<EntityImitator>();
	private final Collection<EntityImitator> imitatorClient = new WeakEntityCollection<EntityImitator>();
	
	public final Set<Integer> targetBlockId = new TreeSet<Integer>();
	public final Set<Integer> appendixBlockId = new TreeSet<Integer>();
	public final Set<Integer> ignoredBlockId = new TreeSet<Integer>();
	
	private AirCraftCore() {
		;
	}
	
	public void addRenderer(Map map) {
		// Imitator
		if (DEBUG_RENDER_IMITATOR)
			map.put(EntityImitator.class, new RenderDebugEntity(Block.blockDiamond));
		else
			map.put(EntityImitator.class, new RenderPyxis());
		
		// Invisible
		if (DEBUG_RENDER_INVISIBLE)
			map.put(EntityCraftBody.class, new RenderDebugEntity(Block.glass));
		else
			map.put(EntityCraftBody.class, new RenderNothing());
		
		// Mat
		if (DEBUG_RENDER_MAT)
			map.put(EntityMobMat.class, new RenderDebugEntity(Block.cloth));
		else
			map.put(EntityMobMat.class, new RenderNothing());
	}
	
	public int getBlockIdPyxis() {
		return blockIdPyxis;
	}
	
	public Operator getBlockOperator(int blockId) {
		if (0 < blockId && blockId < blockops.length) {
			Operator result = blockops[blockId];
			if (result != null) {
				return result;
			}
		}
		return NullOperator.INSTANCE;
	}
	
	public Block getBlockPyxis() {
		return blockPyxis;
	}
	
	public int getCraftBodySize() {
		return craftBodySize;
	}
	
	public Set<Integer> getDefaultMoveableSet() {
		Set<Integer> result = new TreeSet<Integer>();
		for (int i = 0; i < blockops.length; i++) { // target �����w��̎��ɂ� defaultMoveableSet
			if (blockops[i] != null) {
				result.add(i);
			}
		}
		return result;
	}
	
	public Set<Integer> getMoveableBlockIds() {
		Set<Integer> result = new HashSet<Integer>();
		
		// targetBlockId
		if (targetBlockId.isEmpty())
			result.addAll(getDefaultMoveableSet());
		else
			result.addAll(targetBlockId);
		
		// appendixBlockId
		result.addAll(appendixBlockId);
		
		// ignoredBlockId
		result.removeAll(ignoredBlockId);
		
		// ���̑�
		result.remove(0); // ��C�u���b�N�͈ړ��֎~
		result.remove(Block.bedrock.blockID); // ��Ղ͈ړ��֎~
		
		// ����
		return result;
	}
	
	public int getMoveKeepTime() {
		return moveKeepTime;
	}
	
	public Materializer newMaterializer(World world, ImitationSpace space) {
		Set<Integer> moveable = Utils.isServerSide(world) ? getMoveableBlockIds() : new TreeSet<Integer>();
		return new Materializer(world, space, blocklimit, moveable);
	}
	
	public AirCraftMoveHandler newMoveHandler(World worldObj, EntityCraftCore craftCore, String playerName) {
		return new AirCraftMoveHandler(craftCore, playerName, getMoveKeepTime());
	}
	
	public void processAppendSemiSurface(int entId, byte[] data) {
		synchronized (imitatorClient) {
			for (EntityImitator cli: imitatorClient) {
				if (cli != null && cli.entityId == entId) {
					debugPrint("receive appendSemiSurface: sender = %s, size = %s", entId, data.length);
					cli.addClientSemiSurfaces(data);
				}
			}
		}
	}
	
	public void processAppendSurface(int entId, byte[] data) {
		synchronized (imitatorClient) {
			for (EntityImitator cli: imitatorClient) {
				if (cli != null && cli.entityId == entId) {
					debugPrint("receive appendSurface: sender = %s, size = %s", entId, data.length);
					cli.addClientSurfaces(data);
				}
			}
		}
	}
	
	public void processAppendTileEntityData(int entId, byte[] data) {
		synchronized (imitatorClient) {
			for (EntityImitator cli: imitatorClient) {
				if (cli != null && cli.entityId == entId) {
					debugPrint("receive appendTileData: sender = %s, size = %s", entId, data.length);
					cli.addClientTileData(data);
				}
			}
		}
	}
	
	public void processMoveClient(byte type, String name) {
		processMove(imitatorClient, type, name);
	}
	
	public void processMoveServer(byte type, String name) {
		processMove(imitatorServer, type, name);
	}
	
	public void processRequestSurfaces(int entId) {
		synchronized (imitatorServer) {
			for (EntityImitator svr: imitatorServer) {
				if (svr != null && svr.entityId == entId) {
					debugPrint("receive requestSurface: sender = %s", entId);
					svr.requestSurfaceFromClient();
				}
			}
		}
	}
	
	public void registerImitator(EntityImitator imitator) {
		if (Utils.isServerSide(imitator.worldObj)) {
			synchronized (imitatorServer) {
				imitatorServer.add(imitator);
			}
		}
		else {
			synchronized (imitatorClient) {
				imitatorClient.add(imitator);
			}
		}
	}
	
	public void setBaseMod(BaseMod baseMod) {
		this.baseMod = baseMod;
	}
	
	public void setBlockIdPyxis(int blockIdPyxis) {
		this.blockIdPyxis = blockIdPyxis;
	}
	
	public void setBlocklimit(int blocklimit) {
		this.blocklimit = blocklimit;
	}
	
	public void setBlockOperator(int blockId, Operator operator) {
		if (0 < blockId && blockId < blockops.length) {
			if (blockops[blockId] != null) {
				debugPrint("BlockOperator[%d] overwrite %s -> %s", blockId, blockops[blockId], operator);
			}
			blockops[blockId] = operator;
		}
	}
	
	public void setCraftBodySize(int craftBodySize) {
		this.craftBodySize = craftBodySize;
	}
	
	public void setMoveKeepTime(int moveKeepTime) {
		this.moveKeepTime = moveKeepTime;
	}
	
	public Entity spawnEntity(int entId, World world, double x, double y, double z) {
		Entity result = null;
		{
			if (entId == entityIdInvisible)
				result = new EntityCraftBody(world);
			else if (entId == entityIdPyxis)
				result = new EntityPyxis(world);
			else if (entId == entityIdMobMat)
				result = new EntityMobMat(world);
		}
		if (result != null) {
			result.setPosition(x, y, z);
		}
		return result;
	}
	
	public BlockData toSafeClientBlock(BlockData data) {
		// TODO renderStrategy �I�v�V������ǉ�
		// 2 = �ϊ����Ȃ�
		// 1 = Operator �̖����u���b�N��ϊ�
		// 0 = Operator �̖��� BlockContainer ��ϊ�
		// -1 = ��ɗr�тɕϊ�
		if (getBlockOperator(data.block.blockID) instanceof NullOperator == false) {
			// Operator �����݂���Ȃ���S
			return data;
		}
		if (data.block instanceof ITileEntityProvider == false) {
			// BlockContainer �łȂ���΂��Ԃ���S
			return data;
		}
		// ���S�łȂ����̂� Block.cloth �ɕϊ�
		debugPrint("toSafeClientBlock [%s:%s] %s", data.block.blockID, data.metadata, data.block);
		return new BlockData(Block.cloth, data.metadata, data.relPos, data.absPos);
	}
	
	protected Operator[] getDefaultOperators() {
		return new Operator[]{
			new NormalOperator(),
			new DelicateOperator(),
			new DirectionalOperator(),
			new DelicateDirectionalOperator(),
			new DoorOperator(),
			new FluidOperator(),
			new LadderOperator(),
			new RailOperator(),
			new RailPoweredOperator(),
			new StairsOperator(),
			new TorchOperator(),
			new TrapdoorOperator(),
			new VineOperator(),
			new WoodOperator(),
			new ButtonOperator(),
			new LeverOperator(),
			new InventoryBlockOperator(),
			new ChestOperator(),
			new EnderChestOperator(),
			new AnvilOperator(),
			new PistonOperator(),
		//			new EndPortalOperator(),
		};
	}
	
	@Override
	protected void init() {
		if (0 < blockIdPyxis) {
			// �u���b�N�o�^
			blockPyxis = new BlockPyxis(blockIdPyxis).setUnlocalizedName("Pyxis");
			ModLoader.registerBlock(blockPyxis);
			Utils.addName(blockPyxis, "Pyxis", "���j��");
			ModLoader.addRecipe(new ItemStack(blockPyxis), new Object[]{
				" C ", "DGD", "OOO", 'C', Item.compass, 'D', Item.diamond, 'G', Block.blockGold, 'O', Block.obsidian
			});
			
			// �G���e�B�e�B�o�^
			ModLoader.registerEntityID(EntityPyxis.class, "HAC_Pyxis", entityIdPyxis = Utils.getUnusedEntityID());
			ModLoader.registerEntityID(EntityCraftBody.class, "HAC_CraftBody", entityIdInvisible = Utils.getUnusedEntityID());
			ModLoader.registerEntityID(EntityMobMat.class, "HAC_MobMat", entityIdMobMat = Utils.getUnusedEntityID());
			ModLoader.addEntityTracker(baseMod, EntityPyxis.class, entityIdPyxis, 256, 4, true); // �`�ʋ����Ƃ肠�����L�߂ɂƂ�
			ModLoader.addEntityTracker(baseMod, EntityCraftBody.class, entityIdInvisible, 32, 4, true);
			ModLoader.addEntityTracker(baseMod, EntityMobMat.class, entityIdMobMat, 32, 4, true);
			
			// �`���l���o�^
			net.registerPacketChannel(baseMod);
			
			// Operator �o�^
			for (Operator op: getDefaultOperators()) {
				op.register(this);
			}
		}
	}
	
	protected void processMove(Collection<EntityImitator> imitators, byte type, String name) {
		synchronized (imitators) {
			for (EntityCraftCore imitator: imitators) {
				if (imitator != null) {
					imitator.processMove(null, type);
				}
			}
		}
	}
	
	public static AirCraftCore getInstance() {
		return instance;
	}
}
