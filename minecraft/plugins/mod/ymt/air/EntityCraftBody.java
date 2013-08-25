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

import net.minecraft.src.EntityPlayer;
import net.minecraft.src.World;

/**
 * @author Yamato
 *
 */
public class EntityCraftBody extends EntityFollower {
	public EntityCraftBody(World world) {
		this(world, null);
	}
	
	public EntityCraftBody(World world, String ownerName) {
		super(world, ownerName);
	}
	
	@Override
	public boolean func_130002_c(EntityPlayer player) {
		if (core.tryInteractServer(worldObj)) {
			capturePassengers(); // ���ʔ͈͂ɂ���q���悹��
			return true;
		}
		return false;
	}
	
	@Override
	public void setNextPosition(double x, double y, double z, float yaw, float pitch, int turn) {
		// x �� z �� 16 ���� 1 �ɃA���C�������g
		x = Math.floor(x * 16) / 16;
		z = Math.floor(z * 16) / 16;
		// CraftBody �ł� yaw �� pitch ������Ȃ�
		super.setNextPosition(x, y, z, 0, 0, turn);
	}
}
