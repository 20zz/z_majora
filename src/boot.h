/*
 * $Id: boot.h,v 1.1.1.1 2003/06/09 19:12:10 wheeler Exp $
 *
 *
 * 注意:このヘッダファイルは spec ファイルからインクルードされます
 *
 * $Log: boot.h,v $
 * Revision 1.1.1.1  2003/06/09 19:12:10  wheeler
 * Majora's Mask tree from Nintendo
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.2  1998/03/25 12:43:54  hayakawa
 * Ｃ＋＋が通っていなかったのを修正
 *
 * Revision 1.1  1997/03/17  12:16:10  hayakawa
 * Initial revision
 *
 */

#ifndef __BOOT_H_
#define __BOOT_H_

#define BOOT_STACKSIZE 1024

#if defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS)

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

extern void boot(void);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */

#endif /* __BOOT_H_ */
