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
import net.minecraft.src.Block;

/**
 * @author Yamato
 *
 */
public class PistonOperator extends AbstractRotationOperator {
	public PistonOperator() {
		super(7, 2, 5, 3, 4);
	}

	@Override
	public int getPriority(BlockData data) {
		return data.block.blockID == Block.pistonExtension.blockID ? PRIORITY_REDSTONEOUTPUT : PRIORITY_PISTONBASE;
	}

	@Override
	protected void addMoveableBlockIds(Set<Integer> result) {
		result.add(Block.pistonBase.blockID);
		result.add(Block.pistonStickyBase.blockID);
		result.add(Block.pistonExtension.blockID);
	}
}
