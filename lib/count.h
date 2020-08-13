/*
 * $Id: count.h,v 1.1.1.1 2003/06/09 19:12:06 wheeler Exp $
 *
 * シェイプ中のポリゴン数を数える
 *
 * $Log: count.h,v $
 * Revision 1.1.1.1  2003/06/09 19:12:06  wheeler
 * Majora's Mask tree from Nintendo
 *
 * Revision 2.4  2000-03-06 22:12:02+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1999-12-25 14:12:41+09  hayakawa
 * indentした
 *
 * Revision 2.2  1999-12-25 13:45:15+09  hayakawa
 * 同期のチェックのしかたを変更
 * その他
 *
 * Revision 2.1  1998-10-22 20:53:12+09  hayakawa
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.5  1998-08-20 22:11:16+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1998-08-06 22:51:00+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.3  1998-08-03 11:02:00+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1997/10/10  08:29:36  hayakawa
 * *** empty log message ***
 *
 * Revision 1.1  1997/01/28  08:42:01  hayakawa
 * Initial revision
 *
 *
 */

#ifndef __COUNT_H_
#define __COUNT_H_

#include "ultra64.h"

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

    typedef enum ucode_type_e {
	UCODE_TYPE_UNKNOWN,
	UCODE_TYPE_F3DEX,
	UCODE_TYPE_L3DEX,
	UCODE_TYPE_S2DEX,
	UCODE_TYPE_MAX
    } ucode_type_t;

    typedef struct ucode_info_s {
	ucode_type_t ucode_type;
	void *textstart;
    } ucode_info_t;

    typedef struct count_s {
	s8 verbose;			/* verboseレベル */
	u8 segcnv_chk;			/* !0:セグメント変換チェックする */

	/*
	 * レポート
	 */
	int dl_cnt;			/* ディスプレイリストの数 */
	int vtx_cnt;			/* 頂点の数 */
	int spvtx_cnt;			/* SPVetrexの数 */
	int tri1_cnt;			/* SP1Triangleの数 */
	int tri2_cnt;			/* SP2Trianglesの数 */
	int quad_cnt;			/* SP1Quadrangleの数 */
	int line_cnt;			/* SP1Lineの数 */
	int loaducode_cnt;		/* gsSPLoadUcodeの数 */
	int sync_err;			/* syncエラー発生数 */
	int noopfill_cnt;		/* SPNoOpFill数 */
	int bound_err;			/* バウンダリエラー数 */

	/*
	 * マイクロコード情報
	 */
	s8 ucode_info_max;		/* マイクロコード情報数 */
	ucode_info_t *ucode_info_tbl;
	ucode_type_t current_ucode_type;	/* 現在のマイクロコード種別  */

	/*
	 * SP/DPの状態
	 */
	u32 segment_base[16];
	Gfx *dl_stack[18];
	s8 dl_depth;			/* ディスプレイリストの段数 */
	u8 primsync;			/* プリミティブ同期チェック用 */
	u8 tilesync;			/* 個別タイル同期チェック用 */
	u8 _aligner;			/* ダミー */
	u32 state_othermode_h;
	u32 state_othermode_l;
	u32 state_geometory_mode;
    } count_t;

    extern count_t count_class;

    extern void count_init(void);
    extern void count_cleanup(void);
    extern void count_check(Gfx *);
    extern void count_set_ucode_info(int, ucode_info_t *);
    extern void count_set_first_ucode(void *);

#if STANDALONE
    extern void do_count(Gfx *);
#endif

    /*
     * gDPNoOpマイクロコードの未使用部分に情報を書き込むマクロ
     */
    enum {
	COUNT_NOOP_TAG3 = 0,
	COUNT_NOOP_HERE,	/* ソースファイル名と行番号 */
	COUNT_NOOP_STRING,	/* 文字列 */
	COUNT_NOOP_WORD,	/* int */
	COUNT_NOOP_FLOAT,	/* float */
	COUNT_NOOP_VERBOSE,	/* verboseモード/quietモード */
	COUNT_NOOP_CALLBACK,	/* コールバック関数の登録 */
	COUNT_NOOP_OPENDISP,	/* OPEN_DISP()用 */
	COUNT_NOOP_CLOSEDISP,	/* CLOSE_DISP()用 */
	COUNT_NOOP_FILL,	/* クリア用 */
	COUNT_NOOP_MAX
    };
#define count_gsDPNoOpTag3(b, w, h)		gsDma1p(G_NOOP, w, h, b)
#define count_gDPNoOpTag3(pkt, b, w, h)		gDma1p(pkt, G_NOOP, w, h, b)
#define count_gsDPNoOpHere()			count_gsDPNoOpTag3(    COUNT_NOOP_HERE, __FILE__, __LINE__)
#define count_gDPNoOpHere(pkt)			count_gDPNoOpTag3(pkt, COUNT_NOOP_HERE, __FILE__, __LINE__)
#define count_gsDPNoOpString(s, n)		count_gsDPNoOpTag3(    COUNT_NOOP_STRING, s, n)
#define count_gDPNoOpString(pkt, s, n)		count_gDPNoOpTag3(pkt, COUNT_NOOP_STRING, s, n)
#define count_gsDPNoOpWord(w, n)		count_gsDPNoOpTag3(    COUNT_NOOP_WORD, w, n)
#define count_gDPNoOpWord(pkt, w, n)		count_gDPNoOpTag3(pkt, COUNT_NOOP_WORD, w, n)
#define count_gsDPNoOpFloat(f, n)		count_gsDPNoOpTag3(    COUNT_NOOP_FLOAT, *(u32*)&(f), n)
#define count_gDPNoOpFloat(pkt, f, n)		count_gDPNoOpTag3(pkt, COUNT_NOOP_FLOAT, *(u32*)&(f), n)
#define count_gsDPNoOpVerbose()			count_gsDPNoOpTag3(    COUNT_NOOP_VERBOSE, 0, 1)
#define count_gDPNoOpVerbose(pkt)		count_gDPNoOpTag3(pkt, COUNT_NOOP_VERBOSE, 0, 1)
#define count_gsDPNoOpQuiet()			count_gsDPNoOpTag3(    COUNT_NOOP_VERBOSE, 0, 0)
#define count_gDPNoOpQuiet(pkt)			count_gDPNoOpTag3(pkt, COUNT_NOOP_VERBOSE, 0, 0)
#define count_gsDPNoOpCallBack(func, n)		count_gsDPNoOpTag3(    COUNT_NOOP_CALLBACK, func, n)
#define count_gDPNoOpCallBack(pkt, func, n)	count_gDPNoOpTag3(pkt, COUNT_NOOP_CALLBACK, func, n)
#define count_gsDPNoOpOpenDisp2(file, line)     count_gsDPNoOpTag3(    COUNT_NOOP_OPENDISP, file, line)
#define count_gDPNoOpOpenDisp2(pkt, file, line)	count_gDPNoOpTag3(pkt, COUNT_NOOP_OPENDISP, file, line)
#define count_gsDPNoOpOpenDisp()		count_gsDPNoOpOpenDisp2(    __FILE__, __LINE__)
#define count_gDPNoOpOpenDisp(pkt)		count_gDPNoOpOpenDisp2(pkt, __FILE__, __LINE__)
#define count_gsDPNoOpCloseDisp2(file, line)	count_gsDPNoOpTag3(     COUNT_NOOP_CLOSEDISP, file, line)
#define count_gDPNoOpCloseDisp2(pkt, file, line) count_gDPNoOpTag3(pkt, COUNT_NOOP_CLOSEDISP, file, line)
#define count_gsDPNoOpCloseDisp()		count_gsDPNoOpCloseDisp2(    __FILE__, __LINE__)
#define count_gDPNoOpCloseDisp(pkt)		count_gDPNoOpCloseDisp2(pkt, __FILE__, __LINE__)
#define count_gsDPNoOpFill()			count_gsDPNoOpTag3(    COUNT_NOOP_FILL, 0, 0)
#define count_gDPNoOpFill(pkt)			count_gDPNoOpTag3(pkt, COUNT_NOOP_FILL, 0, 0)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif
#endif /* __COUNT_H_ */
