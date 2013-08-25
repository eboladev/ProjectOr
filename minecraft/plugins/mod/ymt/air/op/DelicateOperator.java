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
package mod.ymt.air.op;

import java.util.Set;
import mod.ymt.air.BlockData;
import mod.ymt.air.Materializer;
import net.minecraft.src.Block;

/**
 * @author Yamato
 *
 */
public class DelicateOperator extends AbstractOperator {
	@Override
	public int getPriority(BlockData data) {
		return data.block.blockID == Block.redstoneWire.blockID ? PRIORITY_REDSTONEWIRE : PRIORITY_DELECATE;
	}
	
	@Override
	protected void addMoveableBlockIds(Set<Integer> result) {
		result.add(Block.sapling.blockID); // �c��
		result.add(Block.tallGrass.blockID);
		result.add(Block.deadBush.blockID);
		result.add(Block.plantYellow.blockID);
		result.add(Block.plantRed.blockID);
		result.add(Block.mushroomBrown.blockID);
		result.add(Block.mushroomRed.blockID);
		result.add(Block.fire.blockID);
		result.add(Block.redstoneWire.blockID);
		result.add(Block.crops.blockID); // ����
		result.add(Block.pressurePlateStone.blockID); // �΂̊�����
		result.add(Block.pressurePlatePlanks.blockID); // �؂̊�����
		result.add(Block.snow.blockID);
		result.add(Block.cactus.blockID);
		result.add(Block.reed.blockID); // �T�g�E�L�r
		result.add(Block.portal.blockID); // �|�[�^���ړ��\
		result.add(Block.cake.blockID);
		result.add(Block.melonStem.blockID); // �X�C�J�̕c
		result.add(Block.pumpkinStem.blockID); // ���ڂ���̕c
		result.add(Block.waterlily.blockID); // �@�̗t
		result.add(Block.netherStalk.blockID); // �l�U�[����
		result.add(Block.dragonEgg.blockID);
		result.add(Block.carrot.blockID);
		result.add(Block.potato.blockID);
		result.add(Block.tripWire.blockID); // �g���b�v���C���[
		result.add(Block.flowerPot.blockID); // �A�ؔ�
		result.add(Block.pressurePlateGold.blockID); // ���̊�����
		result.add(Block.pressurePlateIron.blockID); // �S�̊�����
	}
	
	@Override
	protected boolean setRealBlockWithRotation(Materializer owner, int blockId, int metadata, int x, int y, int z, int rotate) {
		return setRealBlock(owner, blockId, metadata, x, y, z);
	}
}
