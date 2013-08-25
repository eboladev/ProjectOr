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
package net.minecraft.src;

import java.util.Arrays;
import java.util.Collections;
import java.util.Map;
import mod.ymt.air.AirCraftCore;
import mod.ymt.air.ClientKeyBinder;
import mod.ymt.cmn.CfgFile;

/**
 * @author Yamato
 *
 */
public class mod_HariboteAirCraft extends BaseMod {
	public ClientKeyBinder keyBinder = null;

	@Override
	public void addRenderer(Map map) {
		AirCraftCore.getInstance().addRenderer(map);
	}

	@Override
	public void clientCustomPayload(NetClientHandler handler, Packet250CustomPayload packet) {
		AirCraftCore.getInstance().net.processClientCustomPayload(packet);
	}

	@Override
	public String getPriorities() {
		return "required-after:mod_YMTLib";
	}

	@Override
	public Packet23VehicleSpawn getSpawnPacket(Entity var1, int var2) {
		return new Packet23VehicleSpawn(var1, var2);
	}

	@Override
	public String getVersion() {
		return "162v2 helios";
	}

	@Override
	public void keyboardEvent(KeyBinding key) {
		keyBinder.keyboardEvent(key);
	}

	@Override
	public void load() {
		CfgFile cfg = new CfgFile("mod_HariboteAirCraft.txt");
		if (cfg.getBoolean("enable", true)) {
			AirCraftCore core = AirCraftCore.getInstance();
			core.setBaseMod(this);
			core.setBlockIdPyxis(cfg.getInt("IdPyxis", 209, 0, Integer.MAX_VALUE));
			core.setBlocklimit(cfg.getInt("blockLimit", 2000, 0, Integer.MAX_VALUE));
			core.setCraftBodySize(cfg.getInt("craftBodySize", -1));
			core.setMoveKeepTime(20 * cfg.getInt("moveKeepTime", 60, 1, Integer.MAX_VALUE)); // 20FPS
			core.targetBlockId.addAll(cfg.getIntList("blockTarget", Collections.EMPTY_LIST));
			core.appendixBlockId.addAll(cfg.getIntList("blockAppend", Collections.EMPTY_LIST));
			core.ignoredBlockId.addAll(cfg.getIntList("blockIgnore", Arrays.asList(2, 3, 8, 9, 10, 11, 12, 13, 31, 32, 37, 38, 78, 87, 121))); // 芝生、土、水、溶岩、砂、砂利、草、枯れ木、花、バラ、雪、ネザーラック、エンドストーン
			core.run();

			try {
				keyBinder = new ClientKeyBinder(this);
			}
			catch (NoClassDefFoundError ex) {
				ex.printStackTrace();
			}
		}
		cfg.save();
	}

	@Override
	public void modsLoaded() {
		// デバッグ表示
		AirCraftCore core = AirCraftCore.getInstance();
		core.debugPrint("defaultMoveableSet: %s", core.getDefaultMoveableSet());
		core.debugPrint("targetBlockId: %s", core.targetBlockId);
		core.debugPrint("appendixBlockId: %s", core.appendixBlockId);
		core.debugPrint("ignoredBlockId: %s", core.ignoredBlockId);
		core.debugPrint("MoveableBlockIds: %s", core.getMoveableBlockIds());
	}

	@Override
	public void serverCustomPayload(NetServerHandler handler, Packet250CustomPayload packet) {
		AirCraftCore.getInstance().net.processServerCustomPayload(packet);
	}

	@Override
	public Entity spawnEntity(int entId, World world, double x, double y, double z) {
		return AirCraftCore.getInstance().spawnEntity(entId, world, x, y, z);
	}
}
