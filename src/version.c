/*
 * $Id: version.c,v 1.1 2003/06/09 19:12:09 wheeler Exp $
 *
 * バージョン文字列
 *
 * $Log: version.c,v $
 * Revision 1.1  2003/06/09 19:12:09  wheeler
 * Initial revision
 *
 * Revision 2.4  1999-04-14 11:10:03+09  hayakawa
 * 余分な extern を削除
 *
 * Revision 2.3  1999-03-08 09:18:44+09  hayakawa
 * ROM_S用追加
 *
 * Revision 2.2  1998-11-09 11:55:51+09  hayakawa
 * ソースコメント追加
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.4  1998/08/26 04:21:58  zelda
 * *** empty log message ***
 *
 * Revision 1.3  1998-03-10 13:40:21+09  hayakawa
 * 修正 CREATER → CREATOR
 *
 * Revision 1.2  1998/03/06  11:54:25  hayakawa
 * MAKEOPTION対応
 *
 */

#include "version.h"

#if defined(ROM_D)
#include "rom_d/version_data.h"
#elif defined(ROM_X)
#include "rom_x/version_data.h"
#elif defined(ROM_F)
#include "rom_f/version_data.h"
#elif defined(ROM_S)
#include "rom_s/version_data.h"
#else
#include "version_data.h"
#endif

char __Creator__[] = __CREATOR__;
char __DateTime__[] = __DATETIME__;
char __MakeOption__[] = __MAKEOPTION__;
