/*
 * $Id: sys_buffers.h,v 1.1 2003/06/09 19:12:09 wheeler Exp $
 *
 * バッファ領域
 *
 * $Log: sys_buffers.h,v $
 * Revision 1.1  2003/06/09 19:12:09  wheeler
 * Initial revision
 *
 * Revision 1.9  2003-05-26 21:23:15+09  zelda
 * GC64EMU VERSION
 *
 * Revision 1.8  2000-03-11 22:42:32+09  hayakawa
 * サイズ増やした
 *
 * Revision 1.7  2000-02-17 19:21:41+09  hayakawa
 * RAM300KB減ってた分増加させた
 *
 * Revision 1.6  1999-11-08 20:19:57+09  hayakawa
 * メモリマップ変更
 *
 * Revision 1.5  1999-08-20 21:40:40+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1999-06-30 18:32:09+09  hayakawa
 * ハイレゾマップ変更
 *
 * Revision 1.3  1999-06-16 17:53:18+09  hayakawa
 * ハイレゾ
 *
 * Revision 1.2  1999-06-14 11:26:03+09  hayakawa
 * zbuf追加
 *
 * Revision 1.1  1999-06-07 16:38:13+09  hayakawa
 * Initial revision
 *
 *
 */

#ifndef __SYS_BUFFERS_H_
#define __SYS_BUFFERS_H_

#define CFBL_WD		(320)
#define CFBL_HT		(240)
#define CFBL_ULX	0
#define CFBL_ULY	0
#define CFBL_SIZE	(CFBL_WD * CFBL_HT * 2)

#define CFBH_WD		(576)	/* 左右32ピクセルカット */
#define CFBH_HT		(454)	/* (455)上下13ピクセルカット */
#define CFBH_ULX	30
#define CFBH_ULY	10
#define CFBH_SIZE	(CFBH_WD * CFBH_HT * 2)

/*

  新メモリマップ
  
  80000000
		システム領域
  80000400
		ワーク領域４(256B)
  80000500
		フレームバッファ０(150KB)
  80025d00
		ワーク領域０（ハイレゾフレームバッファ２）(362KB)
  80080000
		BOOTセグメント(7MB)
		
		Ｚバッファ(150KB)
		ワークフレームバッファ(150KB)
		
  80780000
		ワーク領域１（ハイレゾフレームバッファ１）(362KB)
  807da800
		フレームバッファ１(150KB)
  80800000
  
 */

#if defined(GC64EMU_VERSION)
#define SYS_CFB0H_SEGMENT_START	0x80000500
#define SYS_CFB0H_SEGMENT_END	0x80080000
#define SYS_CFB1H_SEGMENT_START	0x80780500
#define SYS_CFB1H_SEGMENT_END	0x80800000

#define BOOT_SEGMENT_START	0x80080000
#if defined(ROM_F)
#define SYS_HEAP_BOTTOM		0x8069d800 /* ZBUF&WBUF,FIFO2KB,HEAP-512KB */
#else /* ROM_D */
#define SYS_HEAP_BOTTOM		0x8071d800 /* ZBUF&WBUF,FIFO2KB,HEAP-0KB */
#endif

#define SYS_CFB0L_SEGMENT_START 0x80000500
#define SYS_CFB0L_SEGMENT_END	0x80025d00
#define SYS_WORK0_SEGMENT_START 0x80025d00
#define SYS_WORK0_SEGMENT_END	0x80080000

#define SYS_CFB1L_SEGMENT_START 0x807da800
#define SYS_CFB1L_SEGMENT_END	0x80800000
#else /* defined(GC64EMU_VERSION) */
#define SYS_WORK4_SEGMENT_START	0x80000400
#define SYS_WORK4_SEGMENT_END	0x80000500
#define SYS_CFB0H_SEGMENT_START	0x80000500
#define SYS_CFB0H_SEGMENT_END	0x80080000
#define SYS_CFB1H_SEGMENT_START	0x80780000
#define SYS_CFB1H_SEGMENT_END	0x80800000

#define BOOT_SEGMENT_START	0x80080000
#define SYS_HEAP_BOTTOM		0x80780000

#define SYS_CFB0L_SEGMENT_START 0x80000500
#define SYS_CFB0L_SEGMENT_END	0x80025d00
#define SYS_WORK0_SEGMENT_START 0x80025d00
#define SYS_WORK0_SEGMENT_END	0x80080000

#define SYS_WORK1_SEGMENT_START 0x80780000
#define SYS_WORK1_SEGMENT_END	0x807da800
#define SYS_CFB1L_SEGMENT_START 0x807da800
#define SYS_CFB1L_SEGMENT_END	0x80800000
#endif /* defined(GC64EMU_VERSION) */


#if defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS)

#include <ultratypes.h>

#define SIZEOF(name)		(name##_SEGMENT_END - name##_SEGMENT_START)
#define SIZEOF_U64(name)	(SIZEOF(name) / sizeof(u64))


#if 0
extern u64 sys_work4[SIZEOF_U64(SYS_WORK4)]; /* 80000400-80000500(256B) */
#endif
extern u64 sys_cfb0l[SIZEOF_U64(SYS_CFB0L)]; /* 80000500-80025d00(150KB) */
extern u64 sys_work0[SIZEOF_U64(SYS_WORK0)]; /* 80025d00-80080000(360KB) */
				/* game:80080000-80780000 */

#if !defined(GC64EMU_VERSION)
extern u64 sys_work1[SIZEOF_U64(SYS_WORK1)]; /* 80780000-807da800(362KB) */
#endif /* !defined(GC64EMU_VERSION) */
extern u64 sys_cfb1l[SIZEOF_U64(SYS_CFB1L)]; /* 807da800-80800000(150KB) */


				/* work4:80000400-80000500 */
extern u64 sys_cfb0h[SIZEOF_U64(SYS_CFB0H)]; /* 80000500-80080000(510.7KB) */
				/* game:80180000-80780000 */
extern u64 sys_cfb1h[SIZEOF_U64(SYS_CFB1H)]; /* 80780000-80800000(512KB) */

#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */

#endif /* __SYS_BUFFERS_H_ */
