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
import mod.ymt.cmn.Utils;
import net.minecraft.src.Block;

/**
 * @author Yamato
 *
 */
public class RailOperator extends AbstractRotationOperator {
	public RailOperator() {
		// 0 - �삩��k
		// 1 - �����瓌
		// 2 - �����瓌(��)
		// 3 - �����瓌(��)
		// 4 - �삩��k(��)
		// 5 - �삩��k(��)
		// 6 - �������
		// 7 - �삩�琼
		// 8 - ������k
		// 9 - �k���瓌
		// 0 �� 1
		// 2 �� 5 �� 3 �� 4
		// 6 �� 7 �� 8 �� 9
		rotation[0] = 1;
		rotation[1] = 0;
		rotation[2] = 5;
		rotation[3] = 4;
		rotation[4] = 2;
		rotation[5] = 3;
		rotation[6] = 7;
		rotation[7] = 8;
		rotation[8] = 9;
		rotation[9] = 6;
	}
	
	@Override
	public int getPriority(BlockData data) {
		return PRIORITY_REDSTONEOUTPUT;
	}
	
	@Override
	protected void addMoveableBlockIds(Set<Integer> result) {
		result.add(Block.rail.blockID);
	}
	
	@Override
	protected boolean setRealBlock(Materializer owner, int blockId, int metadata, int x, int y, int z) {
		boolean result = super.setRealBlock(owner, blockId, metadata, x, y, z);
		if (result && Utils.getBlock(blockId) != null) {
			owner.world.setBlockMetadataWithNotify(x, y, z, metadata, 2); // ���������̂ŏd�˂� metadata �ݒ�
		}
		return result;
	}
}
