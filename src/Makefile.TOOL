#
# $Id: Makefile.TOOL,v 1.1.1.1 2003/06/09 19:12:09 wheeler Exp $
#
# TOOLÍÑÄêµÁ
#
# $Log: Makefile.TOOL,v $
# Revision 1.1.1.1  2003/06/09 19:12:09  wheeler
# Majora's Mask tree from Nintendo
#
# Revision 1.1  2000-01-05 15:07:17+09  hayakawa
# Initial revision
#

TOOL_OBJS = z_debug.o z_en_time_tag.o z_opening.o z_play.o z_player.o z_room.o z_scene.o z_scene_proc.o z_scene_table.o z_std_dma_data.o z_std_dma.o
toolobjs:
	mkdirhier rom_t
	cd rom_t && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_D) SCENE_TOOL= $(TOOL_OBJS)
