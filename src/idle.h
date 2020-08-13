/*
 * $Id: idle.h,v 1.3 2003/12/17 02:15:02 wheeler Exp $
 *
 * $Log: idle.h,v $
 * Revision 1.3  2003/12/17 02:15:02  wheeler
 * Add back headers necessary to build idle.o
 *
 * Revision 2.8  2000-08-03 13:46:30+09  hayakawa
 * remove warning
 *
 * Revision 2.7  1999-06-14 11:23:03+09  hayakawa
 * �����Х��ѿ��ѹ�
 *
 * Revision 2.6  1998-10-30 14:57:26+09  hayakawa
 * viextendvstart�Υƥ���
 *
 * Revision 2.5  1998-10-29 15:12:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  1998-10-28 17:19:23+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1998-10-27 21:56:52+09  zelda
 * *** empty log message ***
 *
 * Revision 2.2  1998-10-27 20:08:27+09  hayakawa
 * ���������б��ƥ���
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.3  1998/04/01 02:47:11  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.2  1998/03/25  14:15:28  hayakawa
 * ɬ�פʥإå��򥤥󥯥롼�ɤ���褦�ˤ���
 *
 * Revision 1.1  1997/03/17  10:37:26  hayakawa
 * Initial revision
 *
 */

#ifndef __IDLE_H_
#define __IDLE_H_

#include <os.h>			/* OSViMode */
#include "irqmgr.h"		/* irqmgr_t */

#define IDLE_STACKSIZE 1024

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    extern irqmgr_t _irqmgr;
#if DEBUG
    extern int RamBroken;			/* !0:��ब����Ƥ��� */
#endif /* DEBUG */

    extern void	idleproc(void *);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __IDLE_H_ */
