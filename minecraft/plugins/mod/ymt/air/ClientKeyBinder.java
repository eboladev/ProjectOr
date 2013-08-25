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

import net.minecraft.src.BaseMod;
import net.minecraft.src.KeyBinding;
import net.minecraft.src.ModLoader;
import org.lwjgl.input.Keyboard;

public class ClientKeyBinder {
	public final KeyBinding[] keys;
	
	public ClientKeyBinder(BaseMod base) {
		this.keys = new KeyBinding[]{ // MoveManager の並びと合わせる
			new KeyBinding("key.HAC_Stop", Keyboard.KEY_NUMPAD5),
			new KeyBinding("key.HAC_Forward", Keyboard.KEY_NUMPAD1),
			new KeyBinding("key.HAC_Backward", Keyboard.KEY_NUMPAD3),
			new KeyBinding("key.HAC_TurnRight", Keyboard.KEY_NUMPAD9),
			new KeyBinding("key.HAC_TurnLeft", Keyboard.KEY_NUMPAD7),
			new KeyBinding("key.HAC_Up", Keyboard.KEY_NUMPAD8),
			new KeyBinding("key.HAC_Down", Keyboard.KEY_NUMPAD2),
			new KeyBinding("key.HAC_Right", Keyboard.KEY_NUMPAD6),
			new KeyBinding("key.HAC_Left", Keyboard.KEY_NUMPAD4),
			new KeyBinding("key.HAC_Terminate", Keyboard.KEY_DIVIDE),
		};
		
		for (KeyBinding kb: keys) {
			ModLoader.registerKey(base, kb, false);
		}
		ModLoader.addLocalization("key.HAC_Forward", "ja_JP", "はりぼて前進");
		ModLoader.addLocalization("key.HAC_Backward", "ja_JP", "はりぼて後退");
		ModLoader.addLocalization("key.HAC_TurnRight", "ja_JP", "はりぼて右旋回");
		ModLoader.addLocalization("key.HAC_TurnLeft", "ja_JP", "はりぼて左旋回");
		ModLoader.addLocalization("key.HAC_Up", "ja_JP", "はりぼて上昇");
		ModLoader.addLocalization("key.HAC_Down", "ja_JP", "はりぼて下降");
		ModLoader.addLocalization("key.HAC_Right", "ja_JP", "はりぼて右スライド");
		ModLoader.addLocalization("key.HAC_Left", "ja_JP", "はりぼて左スライド");
		ModLoader.addLocalization("key.HAC_Stop", "ja_JP", "はりぼて停止");
		ModLoader.addLocalization("key.HAC_Terminate", "ja_JP", "はりぼて終了");
	}
	
	public void keyboardEvent(KeyBinding key) {
		for (int i = 0; i < keys.length; i++) {
			if (key == keys[i]) {
				AirCraftCore.getInstance().net.sendKeyToServer((byte) i);
				break;
			}
		}
	}
}
