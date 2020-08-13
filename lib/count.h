/*
 * $Id: count.h,v 1.1.1.1 2003/06/09 19:12:06 wheeler Exp $
 *
 * ����������Υݥꥴ����������
 *
 * $Log: count.h,v $
 * Revision 1.1.1.1  2003/06/09 19:12:06  wheeler
 * Majora's Mask tree from Nintendo
 *
 * Revision 2.4  2000-03-06 22:12:02+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1999-12-25 14:12:41+09  hayakawa
 * indent����
 *
 * Revision 2.2  1999-12-25 13:45:15+09  hayakawa
 * Ʊ���Υ����å��Τ��������ѹ�
 * ����¾
 *
 * Revision 2.1  1998-10-22 20:53:12+09  hayakawa
 * �ңϣͽФ��С������(NTSC)
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
	s8 verbose;			/* verbose��٥� */
	u8 segcnv_chk;			/* !0:���������Ѵ������å����� */

	/*
	 * ��ݡ���
	 */
	int dl_cnt;			/* �ǥ����ץ쥤�ꥹ�Ȥο� */
	int vtx_cnt;			/* ĺ���ο� */
	int spvtx_cnt;			/* SPVetrex�ο� */
	int tri1_cnt;			/* SP1Triangle�ο� */
	int tri2_cnt;			/* SP2Triangles�ο� */
	int quad_cnt;			/* SP1Quadrangle�ο� */
	int line_cnt;			/* SP1Line�ο� */
	int loaducode_cnt;		/* gsSPLoadUcode�ο� */
	int sync_err;			/* sync���顼ȯ���� */
	int noopfill_cnt;		/* SPNoOpFill�� */
	int bound_err;			/* �Х�����ꥨ�顼�� */

	/*
	 * �ޥ��������ɾ���
	 */
	s8 ucode_info_max;		/* �ޥ��������ɾ���� */
	ucode_info_t *ucode_info_tbl;
	ucode_type_t current_ucode_type;	/* ���ߤΥޥ��������ɼ���  */

	/*
	 * SP/DP�ξ���
	 */
	u32 segment_base[16];
	Gfx *dl_stack[18];
	s8 dl_depth;			/* �ǥ����ץ쥤�ꥹ�Ȥ��ʿ� */
	u8 primsync;			/* �ץ�ߥƥ���Ʊ�������å��� */
	u8 tilesync;			/* ���̥�����Ʊ�������å��� */
	u8 _aligner;			/* ���ߡ� */
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
     * gDPNoOp�ޥ��������ɤ�̤������ʬ�˾����񤭹���ޥ���
     */
    enum {
	COUNT_NOOP_TAG3 = 0,
	COUNT_NOOP_HERE,	/* �������ե�����̾�ȹ��ֹ� */
	COUNT_NOOP_STRING,	/* ʸ���� */
	COUNT_NOOP_WORD,	/* int */
	COUNT_NOOP_FLOAT,	/* float */
	COUNT_NOOP_VERBOSE,	/* verbose�⡼��/quiet�⡼�� */
	COUNT_NOOP_CALLBACK,	/* ������Хå��ؿ�����Ͽ */
	COUNT_NOOP_OPENDISP,	/* OPEN_DISP()�� */
	COUNT_NOOP_CLOSEDISP,	/* CLOSE_DISP()�� */
	COUNT_NOOP_FILL,	/* ���ꥢ�� */
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
