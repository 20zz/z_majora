/*
 * $Id: idle.c,v 1.3 2003/12/17 01:42:56 wheeler Exp $
 *
 * �����ɥ륹��åɤʤ�
 *
 * $Log: idle.c,v $
 * Revision 1.3  2003/12/17 01:42:56  wheeler
 * Shrink the size of the region that gets cleared initially so it doesn't clobber the
 * flash emulation buffer.
 *
 * Revision 2.51  2000-09-20 21:13:59+09  hayakawa
 * �¸��ե����ʥ�
 *
 * Revision 2.50  2000-09-20 20:44:30+09  hayakawa
 * �¸��ɤ�
 *
 * Revision 2.49  2000-09-20 20:08:23+09  hayakawa
 * �¸������
 *
 * Revision 2.48  2000-09-20 17:06:44+09  hayakawa
 * �ꥻ�å�Ϣ���к�
 *
 * Revision 2.47  2000-08-03 13:46:30+09  hayakawa
 * remove warning
 *
 * Revision 2.46  2000-04-18 14:45:47+09  hayakawa
 * PRINTF�Υ�˥��б�
 *
 * Revision 2.45  2000-03-23 14:57:15+09  hayakawa
 * �ӥǥ��⡼�ɥ����å��ѹ�
 *
 * Revision 2.44  2000-03-16 18:49:18+09  hayakawa
 * ���ƥ���
 *
 * Revision 2.43  2000-02-24 22:06:12+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.42  2000-02-23 22:09:50+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.41  2000-02-12 20:17:22+09  hayakawa
 * osTvType���㤦�Ȥ��Ϥ��������
 *
 * Revision 2.40  2000-01-25 20:20:04+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.39  2000-01-20 21:48:52+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.38  2000-01-08 15:00:43+09  hayakawa
 * ��˥��б�
 *
 * Revision 2.37  1999-11-24 13:53:31+09  hayakawa
 * sys_spdma.c ʬΥ
 *
 * Revision 2.36  1999-11-05 17:14:23+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.35  1999-10-29 21:42:06+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.34  1999-10-29 20:56:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.33  1999-10-29 18:58:00+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.32  1999-10-20 17:42:47+09  hayakawa
 * faultprint�б�
 *
 * Revision 2.31  1999-09-14 17:28:44+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.30  1999-09-14 09:32:53+09  hayakawa
 * PrintString �� fault_PosPrintf
 * DbSetFrameBuffer�����ѹ�
 *
 * Revision 2.29  1999-09-03 17:10:45+09  hayakawa
 * ��®�֡���
 *
 * Revision 2.28  1999-09-03 14:32:22+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.27  1999-08-21 20:35:49+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.26  1999-08-21 19:24:36+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.25  1999-08-21 18:54:44+09  hayakawa
 * ROM_D�ΤȤ������إ�����Ǥ������ޤ��٥⡼��
 *
 * Revision 2.24  1999-08-21 18:27:49+09  hayakawa
 * ��®�֡��ȡܦ�
 *
 * Revision 2.23  1999-07-13 13:49:11+09  hayakawa
 * sys_zb���ѻ�
 *
 * Revision 2.22  1999-06-16 17:50:43+09  hayakawa
 * �ϥ��쥾
 *
 * Revision 2.21  1999-06-14 11:22:53+09  hayakawa
 * �����Х��ѿ��ѹ�
 *
 * Revision 2.20  1999-06-07 16:43:24+09  hayakawa
 * USE_HIRESO�б�
 *
 * Revision 2.19  1999-06-03 17:44:14+09  hayakawa
 * �����ģĴ�Ϣ���
 *
 * Revision 2.18  1999-04-14 11:05:00+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.17  1999-03-30 17:59:43+09  hayakawa
 * rmon��Ϣ�ν�������
 *
 * Revision 2.16  1999-03-17 14:02:11+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.15  1999-03-01 17:30:40+09  hayakawa
 * ��˥��к�
 *
 * Revision 2.14  1999-02-23 16:51:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.13  1999-02-19 10:11:08+09  yoshida
 * ������ǧ�������б�����
 *
 * Revision 2.12  1999-01-07 15:47:27+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.11  1998-11-10 15:45:52+09  zelda
 * �֥�å������ȤΥ����ߥ��ѹ�
 *
 * Revision 2.10  1998-11-04 10:38:04+09  hayakawa
 * �ƥ���
 *
 * Revision 2.9  1998-10-30 14:56:46+09  hayakawa
 * viextendvstart
 *
 * Revision 2.8  1998-10-29 15:11:50+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.7  1998-10-28 17:21:23+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.6  1998-10-27 21:38:47+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.5  1998-10-27 21:37:20+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  1998-10-27 20:07:50+09  hayakawa
 * ���������б��ƥ���
 *
 * Revision 2.3  1998-10-23 17:50:15+09  hayakawa
 * FPAL TEST
 *
 * Revision 2.2  1998-10-23 17:34:48+09  hayakawa
 * FPAL TEST
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.40  1998/10/09 08:15:12  hayakawa
 * *** empty log message ***
 *
 * Revision 1.39  1998-10-06 23:14:00+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.38  1998-10-05 23:15:57+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.37  1998-09-22 22:06:52+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.36  1998-09-17 12:06:43+09  zelda
 * *** empty log message ***
 *
 * Revision 1.35  1998-09-07 13:27:36+09  hayakawa
 * BSS�Υ��ꥢ��˺��Ƥ�����
 * ���������פΤϤ�����
 *
 * Revision 1.34  1998-08-19 09:41:29+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.33  1998-08-01 15:13:13+09  hayakawa
 * ???
 *
 * Revision 1.32  1998-07-17 21:27:09+09  hayakawa
 * ���ߡ�����ɲ�
 *
 * Revision 1.31  1998-07-14 22:13:40+09  zelda
 * ROM_F�ΤȤ���undefined symbol�к�
 *
 * Revision 1.30  1998-07-07 19:47:51+09  hayakawa
 * leoemu�б��ʼ¸����
 *
 * Revision 1.29  1998-05-01 13:19:48+09  hayakawa
 * if USE_ �� ifdef USE_ ���ѹ�
 *
 * Revision 1.28  1998-04-30 22:38:21+09  hayakawa
 * ����������
 *
 * Revision 1.27  1998-04-30 20:59:44+09  hayakawa
 * ưŪ���ɥ쥹�ãƣ�
 *
 * Revision 1.26  1998-04-24 15:53:58+09  hayakawa
 * code�������ȥ��ɻ��֤��¬ɽ��
 *
 * Revision 1.25  1998-04-09 21:42:07+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.24  1998-04-09 20:34:54+09  hayakawa
 * �ۤȤ���Ѥ�äƤʤ��Ȼפ�
 *
 * Revision 1.23  1998-03-27 15:27:33+09  hayakawa
 * �áܡܤǽФ��˥󥰤��н�
 *
 * Revision 1.22  1998/03/25  14:15:43  hayakawa
 * ɬ�פʥإå��򥤥󥯥롼�ɤ���褦�ˤ���
 *
 * Revision 1.21  1998/03/25  12:47:46  hayakawa
 * �������黲�Ȥ���ʤ��ؿ��� static �������
 *
 * Revision 1.20  1998/03/23  09:45:15  hayakawa
 * osPi��osEPi�ѹ�
 *
 * Revision 1.19  1998/03/19  13:01:50  hayakawa
 * PRINT�ɲ�
 *
 * Revision 1.18  1998/03/10  04:39:26  hayakawa
 * ���� CREATER �� CREATOR
 *
 * Revision 1.17  1998/03/09  01:20:58  soejima
 * *** empty log message ***
 *
 * Revision 1.16  1998/03/07  12:53:03  soejima
 * Creater��CREATER, Datetime��DATETIME���ѹ������衣
 *
 * Revision 1.15  1998/03/07  07:09:02  sasaki
 * *** empty log message ***
 *
 * Revision 1.14  1998/03/07  05:52:18  sasaki
 * error taisaku
 *
 * Revision 1.13  1998/03/06  11:54:59  hayakawa
 * �ץ����ѹ��Τ�
 *
 * Revision 1.12  1998/03/06  11:33:22  hayakawa
 * �ץ����ѹ��Τ�
 *
 * Revision 1.11  1998/03/06  01:49:51  hayakawa
 * ��������Τ���� osViModeTable ��Ȥ�ʤ��褦�ˤ���
 * �Ǥ⡢osViModeTable����󥯤���Ƥ��ޤ��ΤǸ���̵��
 *
 * Revision 1.10  1997/11/17  10:02:27  hayakawa
 * �����å������å���ޥ���ˤ���
 *
 * Revision 1.9  1997/11/16  13:35:15  hayakawa
 * stackcheckĴ��
 *
 * Revision 1.8  1997/10/28  14:01:25  hayakawa
 * PI��å������Хåե��򣵣������䤷��
 *
 * Revision 1.7  1997/08/20  09:24:23  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1997/08/19  09:41:54  hayakawa
 * codesegment�򰵽̤���ƥ���
 *
 * Revision 1.5  1997/08/11  13:54:50  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1997/06/05  06:45:30  hayakawa
 * ld�ΥХ���Ϣ�ξ����ɽ��
 *
 * Revision 1.3  1997/05/20  12:41:42  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1997/03/20  12:52:26  hayakawa
 * stackcheck�ɲ�
 *
 * Revision 1.1  1997/03/17  12:18:17  hayakawa
 * Initial revision
 *
 */

#include "idle.h"
#include <ultra64.h>
#include "ThreadID.h"		/* THREAD_ID_MAIN */
#include "ThreadPriority.h"	/* PRIORITY_MAIN */
#include "debug.h"		/* PRINTF, disp */
#include "macro.h"		/* number */
#include "main.h"		/* mainproc, MAIN_STACKSIZE */
#include "stackcheck.h"		/* stackcheck */
#include "sys_buffers.h"	/* CFBL_WD */
#include "sys_segment.h"	/* BOOT_STACK_SIZE */
#if defined(USE_SPDMA)
#include "sys_spdma.h"		/* spdma_* */
#endif /* defined(USE_SPDMA) */
#include "sys_vimgr.h"		/* viBlack, viUpdate */
#include "u64macro.h"		/* EXTERN_DEFSEG_CODE */
#include "version.h"		/* __Creator__ ... */
#include "z_std_dma.h"		/* dmacopy_bg */
#if DEBUG
#include "faultprint.h"		/* faultprint_PosPrintf  */
#endif /* DEBUG */
#include "irqmgr.h"		/* irqmgr_t */
#include <sleep.h>		/* msleep */

/*
 * �����ѿ����
 */
EXTERN_DEFSEG_CODE(boot);
EXTERN_DEFSEG_CODE(code);
EXTERN_DEFSEG_CODE(sys_cfb0l);

/*
 * �����Х��ѿ����
 */
irqmgr_t _irqmgr;
#if DEBUG
int RamBroken;			/* !0:��ब����Ƥ��� */
#endif /* DEBUG */

/*
 * �������ѿ����
 */
static u64 	irqmgrStack[IRQMGR_STACKSIZE / sizeof(u64)];
StackCheckDecl(irqmgr);
static OSThread	mainThread;
static u64	mainStack[MAIN_STACKSIZE / sizeof(u64)];
StackCheckDecl(main);

#define NUM_PI_MSGS     50	/* ��������Ѥ��礭������ */
static OSMesg 		PiMsgs[NUM_PI_MSGS];
/*GLOBAL*/ OSMesgQueue _PiMsgQ;



/*
 * s ���� e �ޤǤ��ΰ�򣰥��ꥢ����
 * s >= e �ʤ鲿�⤷�ʤ�
 */
static void
ClearRegion(void *const s, void *const e)
{
    if (s < e) {
	u32 len = (u32)e - (u32)s;
#if defined(USE_SPDMA)
	spdma_fill(OS_K0_TO_PHYSICAL(s), len, 0);
#else /* defined(USE_SPDMA) */
	bzero(s, (int)len);
#endif /* defined(USE_SPDMA) */
    }
}

#if !defined(USE_SPDMA)
static void
my_fill4(u32 *ptr, u32 siz, u32 dat)
{
    for ( ; siz > 0; siz -= sizeof(u32)) {
	*ptr++ = dat;
    }
}
#endif /* !defined(USE_SPDMA) */

/*
 * �Ÿ��ϣΤ���ǤŷƲ���ޤǴ֤�����Τǲ��̤˥��ߤ��Фʤ��褦�˥��ꥢ����
 * ����Ϥ�ä�®�������ߥ󥰤ǥ����Ф����館���ʤ��ȹͤ��Ƥ���
 *
 * ROM_D�ΤȤ��Ϥ�ͷ�Ӥǡ����Ϥˡإ�����Ǥ������ޤ��٤�ɽ��
 */
static void
InitialScreen(void)
{
#if defined(ROM_D)
#define FILL_PATTERN 0x003f003f
#else
#define FILL_PATTERN 0x00010001
#endif /* defined(ROM_D) */
#if defined(USE_SPDMA)
    spdma_fill(OS_K0_TO_PHYSICAL(sys_cfb0l), sizeof(sys_cfb0l), FILL_PATTERN); /* 150KB */
#else /* defined(USE_SPDMA) */
    my_fill4((u32 *)sys_cfb0l, sizeof(sys_cfb0l), FILL_PATTERN);
#endif /* defined(USE_SPDMA) */
#undef FILL_PATTERN

//    viBlack(0);
    osViSetMode( &sys_vimode );
    osViSetSpecialFeatures(sys_vispecial);
    osViSwapBuffer((void *)sys_cfb0l);
    osViBlack(0);
    
#if defined(ROM_D)
    faultprint_Initial();
    faultprint_SetFrameBuffer((u16 *)sys_cfb0l, CFBL_WD, CFBL_HT);
#if 0
    faultprint_PosPrintf(130, 100, "  ZELDA  ");
    faultprint_PosPrintf(133, 110, "   de   ");
    faultprint_PosPrintf(130, 120, "GOZAIMASU");
#endif
    faultprint_PosPrintf(24, 20, "FUJITSU F-BASIC Version 3.0");
    faultprint_PosPrintf(24, 30, "Copyright (C) by FUJITSU/MICROSOFT");
    faultprint_PosPrintf(24, 40, "30530 Bytes Free");
    faultprint_PosPrintf(24, 60, "Ready");
    /* osTvType���㤦�Ȥ���ɽ������ץ� */
    faultprint_PosPrintf(60, 110, "This game is not designed");
    faultprint_PosPrintf(60, 120, " for use on this system. ");
#endif /* DEBUG */
}

/*
 * sys_cfb0l,boot,dmadata,code������������Τ��٤ƤΣң��ͤ򥯥ꥢ����
 * (����)����ޥåפ��Ѥ�ä��Ȥ��ˤ���դ��뤳��!!
 * 6.5MB �Υ��ꥢ�� 336ms �⤫����ΤǤ�äȹ�®����ˡ��Ƥ��
 * SP-DMA ���Ѥˤ�� 16.554ms �ؤι�®����¸���
 * BZERO 324759
 * SPDMA 17070
 * ��������������
 */
static void
ClearRDRAM(void)
{
    void *const ram_begin = (void *)0x80000400;
    void *const ram_bottom = (void *)(0x80000000 + (unsigned int)osMemSize-128*1024);
#if DEBUG
    OSTime t;

    t = osGetTime();
#endif /* DEBUG */

    ClearRegion(ram_begin, _sys_cfb0lSegmentStart); /* 256B */
    ClearRegion(_sys_cfb0lSegmentEnd, _bootSegmentStart); /* 360KB(25d00-80060) */
    ClearRegion(_codeSegmentEnd, ram_bottom); /* 5678KB(274420-800000) */
#if DEBUG
    t = osGetTime() - t;
    PRINTF1(ESC_CYAN "[%llu usec]\n" ESC_NORMAL, OS_CYCLES_TO_USEC(osGetTime()));
    PRINTF1("RAM CLEAR COMPLEATE!! TIME %llu usec\n", OS_CYCLES_TO_USEC(t));
#endif /* DEBUG */
}

/*
 * �����ɥ������ȤΥ��ɤ��ʤ���
 * ��९�ꥢ��Ԥ�
 */
static void
dma_and_clear(void)
{
    dma_t dma;
    OSMesgQueue mq;
    OSMesg m;
    u32 dma_split_size_save;
    
    osCreateMesgQueue(&mq, &m, 1);
    dma_split_size_save = _dma_split_size;
    _dma_split_size = 0;	/* DMAʬ���ʤ��ˤ��ƹ�®�� */
    
    dmacopy_bg(&dma, _codeSegmentStart, (u32)_codeSegmentRomStart, SEGMENT_ROM_SIZE(code), NULL, &mq, NULL);
    
    InitialScreen();
    ClearRDRAM();
    
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
    _dma_split_size = dma_split_size_save;

    ClearRegion(_codeSegmentBssStart, _codeSegmentBssEnd); /* 196KB(80243130-80274420) */
}

#if DEBUG
static void
FillRegion(u32 *start, u32 *end, u32 data)
{
    while (start < end) {
	*start++ = data;
    }
}

static int
MatchRegion(u32 *start, u32 *end, u32 data)
{
    while (start < end) {
	if (*start++ != data) {
	    return 1;
	}
    }
    return 0;
}

static int
TestRegion(u32 *start, u32 *end)
{
    int t1, t2;
    
    FillRegion(start, end, 0xffffffff);
    t1 = MatchRegion(start, end, 0xffffffff);
    FillRegion(start, end, 0x00000000);
    t2 = MatchRegion(start, end, 0x00000000);

    return (t1 || t2);
}

static int
TestRDRAM(void)
{
    void *const ram_begin = (void *)0x80000400;
    void *const ram_bottom = (void *)(0x80000000 + (unsigned int)osMemSize);
    int t1, t2;
    
    t1 = TestRegion((u32 *)ram_begin, (u32 *)_bootSegmentStart);
    t2 = TestRegion((u32 *)_bootSegmentEnd, (u32 *)ram_bottom);

    return (t1 || t2);
}
#endif /* DEBUG */

/*
 * ���� main
 *
 * code�������Ȥ���ɤ�����ʪ�� main ��¹Ԥ���
 *
 */
static void
mainx(void *arg)
{

    /*
     * IRQ�ޥ͡��������
     */
    StackCheckInit(irqmgr);
    CreateIRQManager(&_irqmgr, irqmgrStack + number(irqmgrStack),  PRIORITY_IRQMGR, 1);
//    msleep(100);
    if (ResetStatus == 0) {
	/*
	 * DMA�ޥ͡��������
	 */
	CreateDmaManager();
	
	/*
	 * RDRAM ���ꥢ �� DMA ��ʿ�Ԥ��Ƽ¹Ԥ��뤳�Ȥˤ�굯ư��®������
	 */
	dma_and_clear();
	
	mainproc(arg);		/* code�������Ȥ�main��¹� */
	
	/*
	 * DMA�ޥ͡����㽪λ
	 */
	KillDmaManager();
    } else {
	PRINTF(ESC_WARNING "�����ʤ�ꥻ�åȤ��줿����\n" ESC_NORMAL);
    }
    PRINTF("mainx ��λ\n");
}

/*
 * �ӥǥ��ν����
 * ��VI�ޥ͡������ư����
 * �����̥⡼�ɡ��Σԣӣá���������ꥢ��,���쥾,�ϥ����顼
 * ���ü���ħ������ޥ���,�ǥ����ե��륿����
 * �����̤򿿤ù��ˤ���
 */
static void
InitialVideo(void)
{
    osCreateViManager((OSPri)OS_PRIORITY_VIMGR);
    sys_vispecial = OS_VI_GAMMA_OFF|OS_VI_DITHER_FILTER_ON;
    sys_vixscale = 1.0f;
    sys_viyscale = 1.0f;

    /*
     * �ʲ��β��̤�ɽ�������뤿��ˤ����Ǥ��������ӥǥ��⡼�ɤ����ꤹ��
     * "This game is not designed for use on this system."
     */
    switch (osTvType) {
    case OS_TV_NTSC:
	sys_vimode_no = OS_VI_NTSC_LAN1;
	sys_vimode = osViModeNtscLan1;
	break;
    case OS_TV_MPAL: /* �����б� ���ݣ� ����ꥫ�������եȥ������ΣͣУ����б��ʥ��A�� */
	sys_vimode_no = OS_VI_MPAL_LAN1;
	sys_vimode = osViModeMpalLan1;
	break;
    case OS_TV_PAL:
#if defined(VIDEO_PAL_IS_FPAL)
	sys_vimode_no = OS_VI_FPAL_LAN1;
	sys_vimode = osViModeFpalLan1;
	sys_viyscale = 0.833f;
#else
	sys_vimode_no = OS_VI_PAL_LAN1;
	sys_vimode = osViModePalLan1;
	sys_viextendvstart = 0;
#endif
	break;
    }
    sys_vidirty = 1;
}

/*
 * �����ɥ륹��å�
 */ 
extern void
idleproc(void *arg)
{
    PRINTF("�����ɥ륹��åɼ¹Գ���\n");

    InitialVideo();		/* �ӥǥ��ν���� */

#if DEBUG
    /*
     *
     */
    {
	int t = TestRDRAM();
	if (t) {
	    PRINTF(ESC_ERROR "RDRAM�ƥ��Ȥˤ��ȥ�ब����Ƥ��ޤ�\n" ESC_NORMAL);
	    RamBroken = 1;
	}
    }
#endif /* DEBUG */

    /*
     * PI�ޥ͡������ư����(�����ȥ�å�����������)
     */
    osCreatePiManager((OSPri)OS_PRIORITY_PIMGR, &_PiMsgQ, PiMsgs, number(PiMsgs));

    /*
     * �ᥤ�󥹥�åɤκ���
     */
    StackCheckInitN(main, 1024);
    osCreateThread(&mainThread, THREAD_ID_MAIN, mainx, arg,
		   mainStack + number(mainStack), (OSPri)PRIORITY_MAIN);
    /*
     * �ᥤ�󥹥�åɤε�ư
     */
    osStartThread(&mainThread);
    
    /*
     * idle����åɤϲ��⤷�ʤ�����åɤˤʤ�
     */
    osSetThreadPri(NULL, (OSPri)OS_PRIORITY_IDLE);

    for (;;) {
	;
    }
}
