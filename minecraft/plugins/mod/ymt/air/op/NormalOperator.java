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
import mod.ymt.air.Materializer;
import net.minecraft.src.Block;

/**
 * @author Yamato
 *
 */
public class NormalOperator extends AbstractOperator {
	@Override
	protected void addMoveableBlockIds(Set<Integer> result) {
		result.add(Block.stone.blockID);
		result.add(Block.grass.blockID);
		result.add(Block.dirt.blockID);
		result.add(Block.cobblestone.blockID);
		result.add(Block.planks.blockID); // �؍�
		result.add(Block.sand.blockID);
		result.add(Block.gravel.blockID);
		result.add(Block.oreGold.blockID);
		result.add(Block.oreIron.blockID);
		result.add(Block.oreCoal.blockID);
		result.add(Block.leaves.blockID);
		result.add(Block.sponge.blockID);
		result.add(Block.glass.blockID);
		result.add(Block.oreLapis.blockID);
		result.add(Block.blockLapis.blockID);
		result.add(Block.sandStone.blockID);
		result.add(Block.web.blockID);
		result.add(Block.cloth.blockID);
		result.add(Block.blockGold.blockID);
		result.add(Block.blockIron.blockID);
		result.add(Block.stoneDoubleSlab.blockID); // �΂̃n�[�t�u���b�N��i�d��
		result.add(Block.stoneSingleSlab.blockID); // �΂̃n�[�t�u���b�N
		result.add(Block.brick.blockID); // �����K
		result.add(Block.tnt.blockID);
		result.add(Block.bookShelf.blockID);
		result.add(Block.cobblestoneMossy.blockID); // �ې�
		result.add(Block.obsidian.blockID); // ���j�Γ������ƁA�l�U�[�|�[�^�����j�]������
		result.add(Block.oreDiamond.blockID);
		result.add(Block.blockDiamond.blockID);
		result.add(Block.tilledField.blockID); // �_�n
		result.add(Block.oreRedstone.blockID);
		result.add(Block.oreRedstoneGlowing.blockID);
		result.add(Block.ice.blockID);
		result.add(Block.blockSnow.blockID);
		result.add(Block.blockClay.blockID);
		result.add(Block.fence.blockID);
		result.add(Block.netherrack.blockID); // �l�U�[���b�N
		result.add(Block.slowSand.blockID); // �\�E���T���h
		result.add(Block.glowStone.blockID);
		result.add(Block.silverfish.blockID); // �V���o�[�t�B�b�V������u���b�N
		result.add(Block.stoneBrick.blockID); // �΃����K
		result.add(Block.mushroomCapRed.blockID); // �Ԃ��L�m�R�u���b�N
		result.add(Block.mushroomCapBrown.blockID); // ���F�̃L�m�R�u���b�N
		result.add(Block.fenceIron.blockID); // �S�t�F���X
		result.add(Block.thinGlass.blockID); // �K���X
		result.add(Block.melon.blockID); // ������
		result.add(Block.mycelium.blockID); // �ێ��u���b�N
		result.add(Block.netherBrick.blockID); // �l�U�[�����K
		result.add(Block.netherFence.blockID); // �l�U�[�����K�t�F���X
		result.add(Block.whiteStone.blockID); // �G���h�X�g�[��
		result.add(Block.redstoneLampIdle.blockID); // ���b�h�X�g�[�������v(����)
		result.add(Block.redstoneLampActive.blockID); // ���b�h�X�g�[�������v(�_��)
		result.add(Block.woodDoubleSlab.blockID); // �؂̃n�[�t�u���b�N��i�d��
		result.add(Block.woodSingleSlab.blockID); // �؂̃n�[�t�u���b�N
		result.add(Block.oreEmerald.blockID);
		result.add(Block.blockEmerald.blockID);
		result.add(Block.cobblestoneWall.blockID); // �ې΃t�F���X
		result.add(Block.workbench.blockID); // ��Ƒ�� NormalOperator �ňړ��\
		result.add(Block.cauldron.blockID); // �劘
		result.add(Block.blockRedstone.blockID); // ���b�h�X�g�[���u���b�N
		result.add(Block.oreNetherQuartz.blockID); // �l�U�[�����z��
		result.add(Block.blockNetherQuartz.blockID); // �l�U�[�����u���b�N
		// AbstractOperator �� TileEntity �ɑΉ������̂ŁABlockContainer ������������������
		result.add(Block.music.blockID); // �m�[�g�u���b�N
		result.add(Block.daylightSensor.blockID); // ���z���Z���T�[
		result.add(Block.beacon.blockID); // �r�[�R��
		result.add(Block.enchantmentTable.blockID); // �G���`����
		result.add(Block.commandBlock.blockID); // �R�}���h�u���b�N
		// 1.6.1 �Œǉ����ꂽ�u���b�N
		result.add(Block.field_111039_cA.blockID); // �F�t�������K
		result.add(Block.field_111038_cB.blockID); // �����u���b�N
		result.add(Block.field_111031_cC.blockID); // �J�[�y�b�g
		result.add(Block.field_111032_cD.blockID); // �Ă��S�y
		result.add(Block.field_111034_cE.blockID); // �ΒY�u���b�N
	}
	
	@Override
	protected boolean setRealBlockWithRotation(Materializer owner, int blockId, int metadata, int x, int y, int z, int rotate) {
		return setRealBlock(owner, blockId, metadata, x, y, z);
	}
}
