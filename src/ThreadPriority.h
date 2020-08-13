/*
 * $Id: ThreadPriority.h,v 1.3 2003/12/17 02:15:02 wheeler Exp $
 *
 * ����å�ͥ���̤��������
 * �����ͤϡ���տ������ʤ���Фʤ�ʤ�
 *
 * $Log: ThreadPriority.h,v $
 * Revision 1.3  2003/12/17 02:15:02  wheeler
 * Add back headers necessary to build idle.o
 *
 * Revision 2.8  2000-02-28 11:52:54+09  hayakawa
 * �ģͣ����٤��Ȥޤ������������뤽���ʤΤǼ�괺�����н�
 *
 * Revision 2.7  2000-02-23 14:18:35+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.6  2000-02-22 19:51:22+09  hayakawa
 * ����åɤ���ͭ���Ƥ��ޤ��Τ�PRIORITY_SYS_FLASHROM��ͥ���٤����ˤ���
 *
 * Revision 2.5  2000-01-21 12:05:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  2000-01-06 19:47:02+09  hayakawa
 * PRIORITY_SLOWLY�ɲ�
 *
 * Revision 2.3  1999-09-27 18:08:46+09  hayakawa
 * DD��Ϣ���
 *
 * Revision 2.2  1999-03-09 18:04:18+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.11  1998/10/19 07:19:44  hayakawa
 * PRIORITY_DDMSG��ͥ���٤�PRIORITY_N64DD��Ʊ���ˤ���
 *
 * Revision 1.10  1998-10-06 23:13:41+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-10-06 17:31:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.8  1998-09-14 23:01:46+09  hayakawa
 * PRIORITY_N64DD��ͥ���٤򲼤���
 *
 * Revision 1.7  1998-07-03 16:23:31+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1998-04-28 21:06:39+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.5  1998-04-21 22:39:15+09  hayakawa
 * 64DD���ѹ�
 *
 * Revision 1.4  1997-11-08 17:20:15+09  hayakawa
 * PRIORITY_IRQMGR
 *
 * Revision 1.3  1996/10/12  08:12:28  hayakawa
 * �إå����ѹ�
 *
 */

#ifndef __THREADPRIORITY_H_
#define __THREADPRIORITY_H_

typedef enum threadpriority_e {
    PRIORITY_SLOWLY = 5,	/* �������� */
    PRIORITY_GRAPH = 9,		/* �������� */
    PRIORITY_SLIDMA = 10,	/* �������� */
    PRIORITY_AUDIO = 11,	/* �������� */
    PRIORITY_MAIN = 12,		/* �������� */
#if defined(USE_FLASHROM)
/*    PRIORITY_SYS_FLASHROM = 9,*/
    PRIORITY_SYS_FLASHROM = 13,
#endif
#if defined(VOICE_TEST)
    PRIORITY_SYS_VOICE2 = 14,
#endif
    PRIORITY_PADMGR = 15,
    PRIORITY_SCHEDULER,
    PRIORITY_DMAMGR,		
    PRIORITY_IRQMGR,		
    PRIORITY_FAULTMGR,		/* ��äȤ�⤤ɬ�פ����� */
    PRIORITY_MSGMGR,		/* ��äȤ�⤤ɬ�פ����� */
    PRIORITY_MAX
} threadpriority_t;

#endif
