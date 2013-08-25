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

import java.util.Comparator;
import mod.ymt.cmn.Utils;

/**
 * @author Yamato
 *
 */
class BlockDataPuttingComparator implements Comparator<BlockData> {
	private final AirCraftCore core = AirCraftCore.getInstance();
	
	@Override
	public int compare(BlockData o1, BlockData o2) {
		int result = 0;
		Operator op1 = core.getBlockOperator(o1.block.blockID);
		Operator op2 = core.getBlockOperator(o2.block.blockID);
		if (result == 0)
			result = Utils.compare(op1.getPriority(o1), op2.getPriority(o2));
		if (result == 0)
			result = Utils.compare(o1.relPos.x, o2.relPos.x);
		if (result == 0)
			result = Utils.compare(o1.relPos.z, o2.relPos.z);
		if (result == 0)
			result = Utils.compare(o1.relPos.y, o2.relPos.y);
		return result;
	}
}
