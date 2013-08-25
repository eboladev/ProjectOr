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
import mod.ymt.cmn.Coord3D;
import net.minecraft.src.Block;
import net.minecraft.src.Entity;
import net.minecraft.src.GLAllocation;
import net.minecraft.src.Render;
import net.minecraft.src.RenderBlocks;
import net.minecraft.src.RenderHelper;
import net.minecraft.src.ResourceLocation;
import net.minecraft.src.TextureMap;
import org.lwjgl.opengl.GL11;

/**
 * @author Yamato
 *
 */
public class RenderImitator extends Render {
	public RenderImitator() {
		this.renderBlocks = new RenderBlocks() {
			@Override
			public boolean renderStandardBlockWithAmbientOcclusion(Block block, int x, int y, int z, float r, float g, float b) {
				// AmbientOcclusion �ɂ��Ă����ƈꕔ�̃u���b�N���s���R�ɈÂ��Ȃ�̂ŁA
				// AmbientOcclusion �͋����I�ɖ����ɂ��Ă��܂�
				return renderStandardBlockWithColorMultiplier(block, x, y, z, r, g, b);
			}
		};
	}
	
	@Override
	public void doRender(Entity ent, double x, double y, double z, float yaw, float partialTickTime) {
		this.renderImitator((EntityImitator) ent, x, y, z, reviceYaw(ent, partialTickTime), partialTickTime);
	}
	
	public void renderImitator(EntityImitator imitator, double x, double y, double z, float yaw, float partialTickTime) {
		if (imitator.glDisposed) { // ���ł��Ă���ꍇ�͉������Ȃ�
			return;
		}
		this.renderBlocks.blockAccess = imitator.getImitationSpace();
		// �ʏ�u���b�N����
		if (imitator.glUpdateList || imitator.glCallList <= 0) {
			updateBlockList(imitator);
		}
		// �ʏ�u���b�N�`��
		GL11.glPushMatrix();
		{
			if (0 < imitator.glCallList) {
				GL11.glTranslatef((float) x, (float) y, (float) z);
				GL11.glRotatef(-yaw, 0, 1, 0);
				// �R�[�����X�g�̕`��
				this.func_110777_b(imitator); // loadTexture
				GL11.glCallList(imitator.glCallList);
			}
		}
		GL11.glPopMatrix();
		// �J�X�^�������_�����O�u���b�N�`��
		GL11.glPushMatrix();
		{
			GL11.glTranslatef((float) x, (float) y, (float) z);
			GL11.glRotatef(-yaw, 0, 1, 0);
			renderCustomBlocks(imitator);
		}
		GL11.glPopMatrix();
	}
	
	protected void deleteGLCallList(EntityImitator imitator) {
		if (imitator.glDisposed) {
			return;
		}
		if (0 < imitator.glCallList) {
			GLAllocation.deleteDisplayLists(imitator.glCallList);
		}
		imitator.glCallList = -1;
		imitator.glUpdateList = false;
	}
	
	@Override
	protected ResourceLocation func_110775_a(Entity var1) {
		return TextureMap.field_110575_b; // �� terrain.png
	}
	
	protected void prepareBlockList(Collection<BlockData> blocks) {
		GL11.glPushMatrix();
		{
			RenderHelper.disableStandardItemLighting();
			GL11.glEnable(GL11.GL_BLEND);
			GL11.glEnable(GL11.GL_CULL_FACE);
			GL11.glBlendFunc(GL11.GL_SRC_ALPHA, GL11.GL_ONE_MINUS_SRC_ALPHA);
			AirCraftCore core = AirCraftCore.getInstance();
			for (BlockData data: blocks) {
				Coord3D relPos = data.relPos;
				GL11.glPushMatrix();
				{
					GL11.glTranslatef(relPos.x, relPos.y, relPos.z);
					Operator op = core.getBlockOperator(data.block.blockID);
					op.getRender().renderBlock(renderBlocks, data); // �����_�����O
				}
				GL11.glPopMatrix();
			}
			RenderHelper.enableStandardItemLighting();
			GL11.glDisable(GL11.GL_BLEND);
			GL11.glDisable(GL11.GL_CULL_FACE);
		}
		GL11.glPopMatrix();
	}
	
	protected void renderCustomBlocks(EntityImitator imitator) {
		RenderHelper.disableStandardItemLighting();
		GL11.glEnable(GL11.GL_BLEND);
		GL11.glEnable(GL11.GL_CULL_FACE);
		GL11.glBlendFunc(GL11.GL_SRC_ALPHA, GL11.GL_ONE_MINUS_SRC_ALPHA);
		AirCraftCore core = AirCraftCore.getInstance();
		for (BlockData data: imitator.space.getCustomRenderBlocks()) {
			GL11.glPushMatrix();
			{
				Coord3D relPos = data.relPos;
				GL11.glTranslatef(relPos.x, relPos.y, relPos.z);
				Operator op = core.getBlockOperator(data.block.blockID);
				op.getRender().renderBlockSpecial(renderManager, renderBlocks, data); // �����_�����O
			}
			GL11.glPopMatrix();
		}
		RenderHelper.enableStandardItemLighting();
		GL11.glDisable(GL11.GL_BLEND);
		GL11.glDisable(GL11.GL_CULL_FACE);
	}
	
	protected void updateBlockList(EntityImitator imitator) {
		deleteGLCallList(imitator); // �ŏ��ɂ��|��
		imitator.glCallList = GLAllocation.generateDisplayLists(1);
		if (0 < imitator.glCallList) {
			imitator.glUpdateList = false;
			GL11.glPushMatrix();
			{
				GL11.glNewList(imitator.glCallList, GL11.GL_COMPILE);
				prepareBlockList(imitator.getSurfaces()); // �����_�����O
				GL11.glEndList();
			}
			GL11.glPopMatrix();
		}
	}
	
	private static float reviceYaw(Entity ent, float partialTickTime) {
		float diff = ent.rotationYaw - ent.prevRotationYaw;
		if (Math.abs(diff + 360) < Math.abs(diff)) {
			diff += 360;
		}
		else if (Math.abs(diff - 360) < Math.abs(diff)) {
			diff -= 360;
		}
		return ent.prevRotationYaw + diff * partialTickTime;
	}
}
