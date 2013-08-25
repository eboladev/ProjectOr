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
import mod.ymt.cmn.Coord3D;
import mod.ymt.cmn.Utils;
import net.minecraft.src.Block;
import net.minecraft.src.NBTTagCompound;
import net.minecraft.src.TileEntity;
import net.minecraft.src.TileEntityChest;
import net.minecraft.src.World;

/**
 * @author Yamato
 *
 */
public class ChestOperator extends InventoryBlockOperator {
	@Override
	protected void addMoveableBlockIds(Set<Integer> result) {
		result.add(Block.chest.blockID);
		result.add(Block.chestTrapped.blockID);
	}
	
	@Override
	protected boolean canPlaceBlockAt(World world, int x, int y, int z, int blockId, int metadata) {
		Block block = Utils.getBlock(blockId);
		return block == null || block.canPlaceBlockAt(world, x, y, z); //
	}
	
	@Override
	protected BlockRender newRender() {
		return new ChestOperatorRender();
	}
	
	@Override
	protected NBTTagCompound readFromTileEntity(Materializer owner, int blockId, int metadata, Coord3D pos) {
		NBTTagCompound tag = super.readFromTileEntity(owner, blockId, metadata, pos);
		{
			TileEntity tile = owner.world.getBlockTileEntity(pos.x, pos.y, pos.z);
			if (tile instanceof TileEntityChest) {
				TileEntityChest chest = (TileEntityChest) tile;
				tag.setBoolean("adjacentChestZNeg", chest.adjacentChestZNeg != null);
				tag.setBoolean("adjacentChestZPos", chest.adjacentChestZPosition != null);
				tag.setBoolean("adjacentChestXNeg", chest.adjacentChestXNeg != null);
				tag.setBoolean("adjacentChestXPos", chest.adjacentChestXPos != null);
			}
		}
		return tag;
	}
}
