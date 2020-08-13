#!/usr/sbin/smake
#
# make clobber のあとや、co spec_ovl のあとに以下の make を実行してください
# make genfiles
#
# $Id: Makefile,v 1.1 2003/06/09 19:12:09 wheeler Exp $
#
#HELP# ６４ゼルダ用メイクファイル
#HELP#
#HELP# 通常 nloadバージョンのメイク：make rom_d
#HELP# ＲＯＭ焼きバージョンのメイク：make rom_x
#HELP# 最終ＲＯＭバージョンのメイク：make rom_f
#HELP# 
#HELP# NES-GATEWAYバージョンのメイク：make 'VMAKEOPTION=NES_VERSION= GATEWAY_VERSION='
#HELP# PAL-GATEWAYバージョンのメイク：make 'VMAKEOPTION=PAL_VERSION= PAL_GATEWAY_VERSION='
#HELP# バージョン変更時のおまじない：touch3 'VIDEO_|NES_VERSION|PAL_VERSION|GATEWAY_VERSION|SYS_GATEWAY_N64|USE_RUMBLE_PACK'
#HELP#
#HELP# make "VMAKEOPT=" ; コンパイル/makeromオプション追加
#HELP# make "VMAKEROMOPT=" ; makeromオプション追加
#HELP# make "VMAKEOPTION=" ; makeオプション追加
#HELP#
#HELP#
#HELP#
#HELP# make -n ; makeすると実行されるコマンドを表示する
#
#
# make clean ; rm -rf *.[ou] a.out core lex.yy.[co] y.tab.[cho] _force ar.tmp.*
# make clobber ; 上記に加えて $(TARGETS) MakeDepend をも消す
# make rmtargets ; $(TARGETS) だけを消す
#
# パートナーＮ６４立ち上げ例
# setenv PTSRC ../:/home/hayakawa/prj/PR/libc64/:/home/hayakawa/prj/PR/libu64/:/home/hayakawa/prj/PR/libbg/:/usr/src/PR/libultra/gu/
# ptnet -host partner2 -fn rk24 -jfn k24 -fg white -bg black -width 80 -height 40 /usr/local/partner-net/n64/nptn64 -EUC
#
# z_actor_h.h を触るとどれだけのファイルが影響を受けるかを調べるには
# grep z_actor_h.h rom_d/Makedepend | cut -d: -f1
#
# ( cd rom_d && ls -lt `grep z_actor.o Makedepend | sed -e 's/[^ ]*://' -e 's/#.*//'` )|head
#
# $Log: Makefile,v $
# Revision 1.1  2003/06/09 19:12:09  wheeler
# Initial revision
#
# Revision 2.182  2003-05-26 21:22:28+09  zelda
# GC64EMU VERSION
#
# Revision 2.181  2002-05-24 17:05:35+09  zelda
# RESUME_VERSION wo KUMIKONNDA!
# AKEOPTION_D to MAKEOPTION_F ni jyoutyuu!!
#
# Revision 2.180  2002-05-08 16:14:40+09  zelda
# CAMDATINSTALLROOTを変更
#
# Revision 2.179  2000-09-29 15:31:16+09  hayakawa
# *** empty log message ***
#
# Revision 2.178  2000-09-29 15:29:37+09  hayakawa
# *** empty log message ***
#
# Revision 2.177  2000-09-29 14:13:15+09  hayakawa
# PAL2用にROM_VERSION=1とした
#
# Revision 2.176  2000-09-26 13:34:57+09  hayakawa
# *** empty log message ***
#
# Revision 2.175  2000-09-26 10:45:56+09  hayakawa
# PAL-GATEWAY対応
#
# Revision 2.174  2000-08-24 13:30:14+09  soejima
# osViModeMpalHpf1, osViModePalHpf1, osViModeFpalHpf1
#
# Revision 2.173  2000-08-08 12:00:05+09  hayakawa
# GATEWAY用にMAKEMASK変数を追加
#
# Revision 2.172  2000-08-07 15:09:25+09  soejima
# *** empty log message ***
#
# Revision 2.171  2000-08-04 13:55:30+09  hayakawa
# *** empty log message ***
#
# Revision 2.170  2000-08-02 14:30:49+09  hayakawa
# *** empty log message ***
#
# Revision 2.169  2000-07-28 11:59:28+09  hayakawa
# *** empty log message ***
#
# Revision 2.168  2000-07-25 20:46:32+09  hayakawa
# *** empty log message ***
#
# Revision 2.167  2000-07-25 20:08:11+09  hayakawa
# *** empty log message ***
#
# Revision 2.166  2000-07-18 13:58:35+09  hayakawa
# *** empty log message ***
#
# Revision 2.165  2000-07-04 10:15:07+09  soejima
# ＰＡＬ
#
# Revision 2.164  2000-06-29 16:23:27+09  hayakawa
# *** empty log message ***
#
# Revision 2.163  2000-06-06 17:40:30+09  hayakawa
# *** empty log message ***
#
# Revision 2.162  2000-06-06 14:52:01+09  hayakawa
# *** empty log message ***
#
# Revision 2.161  2000-06-06 14:15:03+09  zelda
# G++
#
# Revision 2.160  2000-06-06 13:24:32+09  hayakawa
# *** empty log message ***
#
# Revision 2.159  2000-06-06 11:44:36+09  hayakawa
# *** empty log message ***
#
# Revision 2.158  2000-04-28 16:30:57+09  hayakawa
# TEST_DOLPHIN
#
# Revision 2.157  2000-04-26 11:22:43+09  hayakawa
# C++でエラーになる？のを修正
#
# Revision 2.156  2000-04-24 17:36:27+09  hayakawa
# *** empty log message ***
#
# Revision 2.155  2000-04-18 15:58:37+09  hayakawa
# *** empty log message ***
#
# Revision 2.154  2000-04-18 15:00:34+09  hayakawa
# FOR_USA→NES_VERSION
# -DNES_VERSION
#
# Revision 2.153  2000-04-18 14:44:44+09  hayakawa
# クロックタウン(西)デバッグ完了
#
# Revision 2.152  2000-04-14 17:48:05+09  hayakawa
# CIC6105第３版対応
#
# Revision 2.151  2000-04-14 09:35:00+09  hayakawa
# *** empty log message ***
#
# Revision 2.150  2000-04-13 18:23:19+09  hayakawa
# *** empty log message ***
#
# Revision 2.149  2000-04-13 11:08:51+09  hayakawa
# ワーニング609がでるがメモリが減る
#
# Revision 2.148  2000-04-13 10:41:37+09  hayakawa
# ゲームタイトル（仮）を変えてみた
#
# Revision 2.147  2000-04-11 09:22:43+09  hayakawa
# DEBUG_WEST # クロックタウン(西)デバッグ用
#
# Revision 2.146  2000-04-07 15:21:11+09  hayakawa
# /aspMain_debugのテスト
#
# Revision 2.145  2000-03-28 20:39:22+09  hayakawa
# GCCのときに-wallされないようにした
#
# Revision 2.144  2000-03-27 21:01:30+09  hayakawa
# USE_SRAM外した
# 大丈夫か？
#
# Revision 2.143  2000-03-27 19:44:54+09  hayakawa
# USE_SRAM戻した。実際には使われないはず。
#
# Revision 2.142  2000-03-27 19:31:34+09  hayakawa
# USE_CIC6105_NOCHECKをUSE_CIC6105_CHECKに
#
# Revision 2.141  2000-03-27 19:26:01+09  hayakawa
# USE_SRAM外した
#
# Revision 2.140  2000-03-26 03:51:33+09  hayakawa
# ROM_FのZURUMODE=0にした
#
# Revision 2.139  2000-03-25 23:13:02+09  hayakawa
# ROM_F_DEBUG外した
#
# Revision 2.138  2000-03-24 09:15:58+09  hayakawa
# ROM_F_DEBUG
#
# Revision 2.137  2000-03-23 18:45:32+09  hayakawa
# CFILES_LEOFILEOUTにz_debug_hayakawa.cを追加
#
# Revision 2.136  2000-03-23 14:56:22+09  hayakawa
# ビデオモードチェック変更
#
# Revision 2.135  2000-03-21 11:20:39+09  hayakawa
# *** empty log message ***
#
# Revision 2.134  2000-03-21 09:22:04+09  hayakawa
# *** empty log message ***
#
# Revision 2.133  2000-03-20 11:09:50+09  hayakawa
# 正式なコードＮＺＳＪ
#
# Revision 2.132  2000-03-17 20:46:48+09  hayakawa
# VRS
#
# Revision 2.131  2000-03-16 20:35:41+09  hayakawa
# *** empty log message ***
#
# Revision 2.130  2000-03-16 20:12:14+09  hayakawa
# *** empty log message ***
#
# Revision 2.129  2000-03-16 18:49:58+09  hayakawa
# 日本語英語判別なくした
#
# Revision 2.128  2000-03-14 22:58:45+09  hayakawa
# フラッシュロム書き込みが少し速くなる
#
# Revision 2.127  2000-03-11 22:43:03+09  hayakawa
# *** empty log message ***
#
# Revision 2.126  2000-03-09 16:41:51+09  hayakawa
# *** empty log message ***
#
# Revision 2.125  2000-03-06 22:13:56+09  hayakawa
# *** empty log message ***
#
# Revision 2.124  2000-02-29 21:18:14+09  hayakawa
# フラッシュのライブラリ変更
# タグ用ファイル追加
#
# Revision 2.123  2000-02-25 18:44:56+09  hayakawa
# bootsegment.oのメイクに失敗するとブートオブジェクトを消してしまっていたのを修正
#
# Revision 2.122  2000-02-25 15:18:00+09  umemiya
# *** empty log message ***
#
# Revision 2.121  2000-02-25 15:13:23+09  umemiya
# *** empty log message ***
#
# Revision 2.120  2000-02-25 15:12:20+09  umemiya
# *** empty log message ***
#
# Revision 2.119  2000-02-24 15:08:35+09  ogawa
# camera_param_data.h の scene_make 対策
#
# Revision 2.118  2000-02-24 15:04:16+09  ogawa
# *** empty log message ***
#
# Revision 2.117  2000-02-24 13:34:24+09  hayakawa
# フラッシュライブラリをテスト版にした
#
# Revision 2.116  2000-02-23 12:21:08+09  ogawa
# *** empty log message ***
#
# Revision 2.115  2000-02-22 22:21:02+09  sakaguti
# DEBUG_DISP_COL_SHAPE= 対応
#
# Revision 2.114  2000-02-22 13:33:54+09  hayakawa
# zelda_pressが更新されてもromPPを作るようにした
#
# Revision 2.113  2000-02-19 21:43:48+09  hayakawa
# ROM_FのZURUMODE=2にした
#
# Revision 2.112  2000-02-19 20:33:26+09  hayakawa
# *** empty log message ***
#
# Revision 2.111  2000-02-18 21:51:52+09  ogawa
# LEOFILEOUT= SCENE_TOOL= どのタイプでコンパイルされたか分からない時に対応
#
# Revision 2.110  2000-02-18 16:09:53+09  ogawa
# *** empty log message ***
#
# Revision 2.109  2000-02-18 16:00:57+09  ogawa
# *** empty log message ***
#
# Revision 2.108  2000-02-18 14:21:03+09  ogawa
# RM_SCENETOOL 追加
#
# Revision 2.107  2000-02-10 14:43:55+09  hayakawa
# *** empty log message ***
#
# Revision 2.106  2000-02-08 19:03:34+09  hayakawa
# SFILES_BOOT追加
#
# Revision 2.105  2000-02-04 16:00:52+09  hayakawa
# 圧縮用テーブル作成に失敗していたのを修正したつもり
#
# Revision 2.104  2000-02-03 21:14:11+09  hayakawa
# *** empty log message ***
#
# Revision 2.103  2000-02-03 16:56:24+09  hayakawa
# *** empty log message ***
#
# Revision 2.102  2000-02-02 18:40:09+09  hayakawa
# ZELDA_TAGに*.incを追加
#
# Revision 2.101  2000-01-31 22:30:45+09  hayakawa
# *** empty log message ***
#
#

#if !defined(PARALLEL)
.NOTPARALLEL:				# 並列動作を禁止
#endif
.PATH: ..				# rom_?ディレクトリからソースを見るため
.SUFFIXES :				# メイク開始までの化時間短縮
.SUFFIXES : .c .h .s .o .i		# 必要なサフィックス

## 標準関数ライブラリ
N64KITDIR    = /usr/local/n64kit
NUSTDDIR     = $(N64KITDIR)/nustd
NUSTDINCDIR  = $(NUSTDDIR)/include
NUSTDLIBDIR  = $(NUSTDDIR)/lib

## cc / makerom のオプション

##LMAKEOPT += -DDEBUG_WEST		# クロックタウン(西)デバッグ用(sched.c/audio.o)
LMAKEOPT += -DDEBUG_WEST2		# global_audio_sp_data_*設定用(sched.c)
##LMAKEOPT += -DUSE_UCODE_F3DZEX_NON_FIFO	# ucode比較用
##LMAKEOPT += -DFOR_JAPAN			## 販売地域	#HIRATSU
LMAKEOPT += -DFOR_USA			## 販売地域		#HIRATSU
LMAKEOPT += -DPLAY_ADJUST		# GAME_PLAY追加テスト用
LMAKEOPT += -DOPTIMIZE_NEXT_DISP	# NEXT_DISPの高速化

## make のオプション

#if defined(ROM_D)
LMAKEOPT += -DROM_D
LMAKEOPT += -DZURUMODE=2
LMAKEOPT += "-DU_${USER}_U"
#endif
#if defined(ROM_X)
LMAKEOPT += -DROM_X
LMAKEOPT += -DZURUMODE=2
#endif
#if defined(ROM_F)
#LMAKEOPT += -DROM_F_DEBUG
LMAKEOPT += -DROM_F
LMAKEOPT += -DZURUMODE=0
#endif
#if defined(ROM_S)
LMAKEOPT += -DROM_S
LMAKEOPT += -DZURUMODE=2
#endif
#if defined(FINAL_ROM)
LMAKEOPT += -DFINAL_ROM -D_FINALROM
#endif

#if defined(ROM_ROM)
LMAKEOPT +=	-DROM_ROM=1			# ＲＯＭ焼き用のコードを吐く
#endif

#if defined(EMU_ROM)
LMAKEOPT +=	-DEMU_ROM=1			# ボード用のコードを吐く
#endif
#if defined(PARTNER)
LMAKEOPT +=	-DPARTNER=1			# パートナー用のコードを吐く
#endif
#if defined(ISVIEWER)
LMAKEOPT +=	-DISVIEWER=1 			# ISVIEWER用のコードを吐く
LMAKEOPT +=	-DISV64 			# osInitialze
#endif

#もうすぐ消す
LMAKEOPT += -DRAM8M

#if defined(USE_CIC6105)
LMAKEOPT += -DUSE_CIC6105
#endif
#if defined(USE_CIC6105_NOCHECK)
LMAKEOPT += -DUSE_CIC6105_NOCHECK
#endif
#if defined(USE_CIC6105_CHECK)
LMAKEOPT += -DUSE_CIC6105_CHECK
#endif

#if defined(LEOFILEOUT)
LMAKEOPT += -DLEOFILEOUT
#endif

#if defined(USE_THREAD_PROFILE)
LMAKEOPT += -DUSE_THREAD_PROFILE
#endif

#if defined(USE_COUNT)
LMAKEOPT += -DUSE_COUNT
#endif
#if defined(USE_FLASHROM)
LMAKEOPT += -DUSE_FLASHROM
#endif
#if defined(USE_SRAM)
LMAKEOPT += -DUSE_SRAM
#endif

#if defined(USE_LOCALE)
LMAKEOPT += -DUSE_LOCALE
#endif
#if defined(USE_DEBUG_MALLOC)
LMAKEOPT += -DUSE_DEBUG_MALLOC
#endif
#if defined(SCENE_TOOL)
LMAKEOPT += -DSCENE_TOOL
#endif
#if defined(SCENE_TOOL2)
#endif
#if defined(TEST_DOLPHIN)
LMAKEOPT += -DTEST_DOLPHIN
#endif
#if defined(DEBUG_CAMERA)
LMAKEOPT += -DDEBUG_CAMERA
#endif
#if defined(PAL_VERSION)
LMAKEOPT += "-DPAL_VERSION"
#endif
#if defined(GATEWAY_VERSION)
LMAKEOPT += -DGATEWAY_VERSION
LMAKEOPT += -DSYS_GATEWAY_N64
#elif defined(PAL_GATEWAY_VERSION)
LMAKEOPT += -DPAL_GATEWAY_VERSION
LMAKEOPT += -DSYS_GATEWAY_N64
#else
LMAKEOPT += -DUSE_RUMBLE_PACK
#endif
#if defined(SHOW_VERSION)
LMAKEOPT += "-DSHOW_VERSION"
#endif
#if defined(NES_VERSION)
LMAKEOPT += "-DNES_VERSION"
#endif

#if defined(RESUME_VERSION)
LMAKEOPT += "-DRESUME_VERSION"
#endif

## ６４トランスレーターバージョン
#ifdef GC64EMU_VERSION
LMAKEOPT += "-DGC64EMU_VERSION"
LMAKEOPT += "-DGC64EMU_DMA_TEST"
#endif

#if defined(USE_HIRESO)
LMAKEOPT += -DUSE_HIRESO
#endif

#if defined(VIDEO_AUTO)
LMAKEOPT += "-DVIDEO_PAL"
LMAKEOPT += "-DVIDEO_NTSC_OR_MPAL"	# NTSC:北米 MPAL:南米
LMAKEOPT += "-DVIDEO_NTSC"
#elif defined(PAL_VERSION)
LMAKEOPT += "-DVIDEO_PAL"
#elif defined(NES_VERSION)
LMAKEOPT += "-DVIDEO_NTSC_OR_MPAL"	# NTSC:北米 MPAL:南米
#elif defined(FOR_JAPAN)
LMAKEOPT += "-DVIDEO_NTSC"
#endif
LMAKEOPT += "-DVIDEO_PAL_IS_FPAL"	# PALのときはFPALモードを使う


include $(ROOT)/usr/include/make/PRdefs
#if defined(HAYAKAWA_LIB)
###include /home/hayakawa/prj/PR/COMMON/SRDdefs.mk	#HIRATSU
#else
include $(ROOT)/usr/local/srd/PR/SRDdefs.mk
#endif
include $(COMMONRULES)

NM	= /usr/bin/nm

#if defined(__GCC__)
CC      = $(ULTRA_ROOT)/usr/local/bin/nu64-gcc
CXX     = /usr/gnu/bin/g++
LD      = $(ULTRA_ROOT)/usr/local/bin/nu64-ld
MAKEROM = $(ULTRA_ROOT)/usr/local/nu64/bin/gmakerom
N64LIB  = $(ULTRA_ROOT)/usr/local/lib/gcc-lib/2.8.1/libmon64.a  \
$(ULTRA_ROOT)/usr/lib/libgultra_rom.a \
$(NUSLIB) \
$(ULTRA_ROOT)/usr/local/lib/gcc-lib/nu64/2.8.1/libgcc.a \

WOFF=
GCOPTS	= $(OPTIMIZER) $(ENDIAN) $(MKDEPOPT) $(WOFF) -mips2
GCDEFS	= -D_MIPS_SZLONG=32 -D_MIPS_SZINT=32
GCINCS	= -I$(INCLDIR)

GASDEFS	= 

CVERSION   =
#OPTIMIZER  = -O
MKDEPOPT   =

GC++INCS  = -I$(INCLDIR)/CC -I$(INCLDIR)

LDOPTS_ABI = -abi $(VLDOPTS) $(LLDOPTS)  -L$(ROOT)/usr/lib/abi
GLDOPTS= $(LD_QUICKSTART_INFO)  -L$(ROOT)/lib -L$(ROOT)/usr/lib -mips2

MKDEPFILE = 
LCOPTS = -Wall -W -G 0
LASOPTS = 	-G 0

#else

#LD 		= $(ROOT)/usr/lib/PR/nld
LD 		= $(ROOT)/usr/bin/ld
#if !defined(FORCE_CPP) && !defined(__GCC__)
ZELDA_CC	= $(ZELDA_ROOT)/tool/bin/zelda_cc
.c.o :
	@echo $(ZELDA_CC) '$$(CFLAGS) -c' $(.IMPSRC)
	@$(ZELDA_CC) $(CFLAGS) -c $(.IMPSRC)
#endif /* !defined(FORCE_CPP) && !defined(__GCC__) */
#endif

#
# ディレクトリの設定
#

ZELDA_LIB =	$(ZELDA_ROOT)/lib
ZELDA_DATA =	$(ZELDA_ROOT)/data
ZELDA_AUDIO =   $(ZELDA_LIB)/audio

SHELL 		= $(ROOT)/usr/local/bin/bash
MAKEMASK6102 	= $(ROOT)/usr/sbin/makemask
MAKEMASK6105 	= $(ROOT)/usr/sbin/makemask6105
#if defined(GATEWAY_VERSION) || defined(PAL_GATEWAY_VERSION)
MAKEMASK 	= $(MAKEMASK6102)
#else
MAKEMASK 	= $(MAKEMASK6102)	#HIRATSU
#endif

#if defined(USE_CIC6105)
VERSUM 		= $(ZELDA_LIB)/CIC6105/981006/CIC6105/versum
#endif
NRDC 		= $(ZELDA_LIB)/NRDC/nrdc/nrdc

NRDC_GAME_TITLE="ZELDA MAJORA'S MASK"
### 新しいバージョンをリリースするときは
### NRDC_ROM_VERSION の値を１つ増やしてください
#if defined(PAL_GATEWAY_VERSION)
NRDC_ROM_VERSION=0
NRDC_INITIAL_CODE=nzsl
#elif defined(GATEWAY_VERSION)
NRDC_ROM_VERSION=0
NRDC_INITIAL_CODE=nzsg
#elif defined(PAL_VERSION)
NRDC_ROM_VERSION=1
NRDC_INITIAL_CODE=nzsp
#elif defined(NES_VERSION)
NRDC_ROM_VERSION=0
NRDC_INITIAL_CODE=nzse
#else
NRDC_ROM_VERSION=2
NRDC_INITIAL_CODE=nzsj
#endif

TARGETS = romPP_d

#if defined(HAYAKAWA_LIB_TEST)
HAYAKAWA_LIB =
#endif

ZELDA_INFO =    zelda_makerom.stdout

#if defined(__GCC__)
MKDEPOPT=
LLDOPTS  = 
#else
LLDOPTS  = $(MKDEPOPT)
#endif
#if defined(HAYAKAWA_LIB)
PATCH_DIR = /home/hayakawa/prj/PR/COMMON/patch/PR
PATCH_INCDIR = $(PATCH_DIR)
PATCH_LIBDIR = $(PATCH_DIR)
#endif
#if defined(HAYAKAWA_LIB)
LCINCS += \
-I/home/hayakawa/prj/PR/libu64 \
-I/home/hayakawa/prj/PR/libc64
LLDOPTS += \
-L/home/hayakawa/prj/PR/libu64 \
-L/home/hayakawa/prj/PR/libc64
LCINCS += \
-I$(ZELDA_LIB)/fault \
-I$(ZELDA_ROOT)/tool/src/count
#endif
LCINCS += \
-I$(ZELDA_LIB) \
-I$(COMMON_INCDIR) \
-I$(PATCH_INCDIR) \
-I$(PATCH_INCDIR)/.. \
-I$(ROOT)/usr/include/PR \
-I/usr/local/include \
-I$(NUSTDINCDIR)

#if defined(__GCC__) && defined(FORCE_CPP)
LCINCS += -I/usr/gnu/lib/gcc-lib/mips-sgi-irix5.3/2.7.2.2/include
#elif defined(__GCC__) && !defined(FORCE_CPP)
LCINCS += -I/ultra/usr/local/lib/gcc-lib/nu64/2.8.1/include
#endif

#if !defined(__GCC__)
LLDOPTS += -wall
#endif

LLDOPTS +=  \
-L$(ZELDA_LIB)/audio \
-L$(COMMON_LIBDIR) \
-L$(PATCH_LIBDIR) \
-L$(ROOT)/usr/lib/PR \
-L$(NUSTDLIBDIR)

### ウルトラライブラリの選択
### ４−３ デバッグ情報の削除（ランクＡ）
#if defined(ROM_ROM)
ULTRALIB_BASE = ultra_rom
#else
ULTRALIB_BASE = ultra
#endif
ULTRALIB = -l$(ULTRALIB_BASE)



#if defined(FINAL_ROM)
U64LIB_BASE = u64_rom
C64LIB_BASE = c64_rom
NUSLIB_BASE = nustd
#else
U64LIB_BASE = u64_d
C64LIB_BASE = c64_d
NUSLIB_BASE = nustd_d
#endif

U64LIB    = -l$(U64LIB_BASE)
C64LIB    = -l$(C64LIB_BASE)
NUSLIB    = -l$(NUSLIB_BASE)

#if defined(HAYAKAWA_LIB)
U64LIB_FULLPATH = /home/hayakawa/prj/PR/libu64/lib$(U64LIB_BASE).a
C64LIB_FULLPATH = /home/hayakawa/prj/PR/libc64/lib$(C64LIB_BASE).a
#else
U64LIB_FULLPATH = $(COMMON_LIBDIR)/lib$(U64LIB_BASE).a
C64LIB_FULLPATH = $(COMMON_LIBDIR)/lib$(C64LIB_BASE).a
#endif
NUSLIB_FULLPATH = $(NUSTDLIBDIR)/lib$(NUSLIB_BASE).a

##
## ファイルの設定
##
## CFILES, CFILES_EN, CFILES_EFF, CFILES_Z, CFILES_SYS, CFILES_DATA の定義
include Makefile.CFILES

## TOOL用
include Makefile.TOOL

C++FILES =	
COBJECTS        = 	$(CFILES:.c=.o)
COBJECTS_EN     = 	$(CFILES_EN:.c=.o)
COBJECTS_EFF    = 	$(CFILES_EFF:.c=.o)
COBJECTS_Z      = 	$(CFILES_Z:.c=.o)
COBJECTS_SYS    = 	$(CFILES_SYS:.c=.o)
COBJECTS_BOOT   = 	$(CFILES_BOOT:.c=.o)
C++OBJECTS      = 	$(C++FILES:.c++=.o)
C++OBJECTS_EN   = 	$(C++FILES_EN:.c++=.o)
C++OBJECTS_EFF  = 	$(C++FILES_EFF:.c++=.o)
C++OBJECTS_Z    = 	$(C++FILES_Z:.c++=.o)
C++OBJECTS_SYS  = 	$(C++FILES_SYS:.c++=.o)
C++OBJECTS_BOOT = 	$(C++FILES_BOOT:.c++=.o)

COBJECT_EN  = cobject_en.o
COBJECT_EFF = cobject_eff.o
COBJECT_Z   = cobject_z.o
COBJECT_SYS = cobject_sys.o
COBJECTS    = $(COBJECTS_EN) $(COBJECTS_EFF) $(COBJECTS_Z) $(COBJECTS_SYS)

CODEOBJECTS += \
	$(COBJECTS) \
	$(C++OBJECTS) \
	$(KANJIDATA1)

#if defined(USE_VOLCULL)
CODEOBJECTS += $(ZELDA_LIB)/volcull.o
#endif
#if defined(USE_COUNT)
#if defined(HAYAKAWA_LIB)
CODEOBJECTS += $(ZELDA_ROOT)/tool/src/count/count.o
#else
CODEOBJECTS += $(ZELDA_LIB)/count.o
#endif /* HAYAKAWA_LIB */
#endif /* USE_COUNT */
#if defined(USE_FLASHROM)
CODEOBJECTS +=   $(ZELDA_LIB)/1M_FLASH/1M_FLASH_76/flash.o
LCINCS      += -I$(ZELDA_LIB)/1M_FLASH/1M_FLASH_76
#endif

#if defined(PAL_VERSION)

#if !defined(ROM_F)
CODEOBJECTS +=	$(ZELDA_LIB)/audio/debug_audio_pal.o 
#else
CODEOBJECTS +=	$(ZELDA_LIB)/audio/audio_pal.o 
#endif

#else /* PAL_VERSION */

#if !defined(ROM_F)
CODEOBJECTS +=	$(ZELDA_LIB)/audio/debug_audio.o 
AUDIOOBJECTS += $(ZELDA_AUDIO)/aspMain_debug.o
#else
CODEOBJECTS +=	$(ZELDA_LIB)/audio/audio.o 
AUDIOOBJECTS += $(ZELDA_AUDIO)/aspMain.o
#endif

#endif /* PAL_VERSION */

AUDIOOBJECTS +=	\
	$(ZELDA_AUDIO)/audio.o \
	$(ZELDA_AUDIO)/audio_hb.o \
	$(ZELDA_AUDIO)/audio_hm.o \
	$(ZELDA_AUDIO)/audio_hs.o \
	$(ZELDA_AUDIO)/audio_hw.o \
	$(ZELDA_AUDIO)/audiotable.o \
	$(ZELDA_AUDIO)/audioheap.o

BOOTOBJECTS = \
	$(COBJECTS_BOOT) \
	$(C++OBJECTS_BOOT) \
	$(SFILES_BOOT:.s=.o)
#if defined(HAYAKAWA_LIB)
BOOTOBJECTS += $(ZELDA_LIB)/fault/z_fault.o $(ZELDA_LIB)/fault/faultprint.o
#else
BOOTOBJECTS += $(ZELDA_LIB)/z_fault.o $(ZELDA_LIB)/faultprint.o
#endif

DATAOBJECTS =	$(CFILES_DATA:.c=.o)

AUDIOSEGMENT =	audiosegment.o
BOOTSEGMENT =	bootsegment.o
CODESEGMENT =	codesegment.o
KANJIDATA1 = 	kanread.o
KANJIDATA2 =	kan.o

OBJECTS =	$(BOOTSEGMENT) $(CODESEGMENT)

OBJECTS +=	$(DATAOBJECTS)

#if !defined(PAL_VERSION)
OBJECTS +=	$(KANJIDATA2)
#endif

LMAKEOPT +=	-DF3DEX_GBI -DF3DEX_GBI_2	# 使用するGBI
LMAKEOPT +=	-DUSE_VISCVG			# カバレッジの可視表示
#if defined(ROM_F)
LMAKEOPT +=	-DDEBUG_MODE_NOINPUT		# デバッグレジスタを出さない
##LMAKEOPT +=	-DDISABLE_FAULT_DISPLAY		# HungUpを出さない
#endif
#if defined(ROM_F)
LMAKEOPT +=	-DNOUSE_DEBUG_PAD		# デバッグ用コントローラパッドを使用しない
#endif

LMAKEOPT +=	-DESCAPE_WARNING		# ワーニング回避のための無駄なコードを許す

OPTIMIZER = -O2 -g3				# 速く・小さく
LMAKEOPT += -D_ODEBUG				# デバッグモード.とると z_camera.c がエラーになる
LMAKEOPT += -DUSE_FAULT=1 			# 画面にフォルトメッセージが出る
#if defined(ROM_F)
LMAKEOPT += -DROM_VERSION=1			# 実機用ＲＯＭの作成
LMAKEOPT += -DNOUSE_PRINTF			# PRINTFを使わない
LMAKEOPT += -DPRINTF_with_Warning_609		# ワーニング609がでるがメモリが減る
LMAKEOPT += -DDEBUG=0				# 
LMAKEOPT += -DNDEBUG				# assertを殺す
LMAKEOPT += -DUSE_TIMER=0 			# 処理時間を計測しない
#else
#if defined(ROM_X) || defined(ROM_S)
LMAKEOPT += -DROM_VERSION=1			# 実機用ＲＯＭの作成
LMAKEOPT += -DNOUSE_PRINTF			# PRINTFを使わない
#else
LMAKEOPT += -DROM_VERSION=0			# エミュレータボード用
LMAKEOPT += -UNOUSE_PRINTF			# PRINTFを使う
#endif
LMAKEOPT += -DDEBUG=1				# lib*_d.aを使用する
LMAKEOPT += -DUSE_DEBUG_MOJI			# puts8x8用
LMAKEOPT += -DUSE_TIMER=1 			# 処理時間を計測する
#endif


#if defined(ROM_D)
LMAKEOPT += -DUSE_SEGMENT_NAME_TABLE
#endif
#if !defined(ROM_F)
LMAKEOPT += -DUSE_ACTOR_NAME_TABLE
#endif


LLDLIBS_CODE += $(ZELDA_LIB)/ucode/libjpg.a
#if defined(TEST_DOLPHIN)
LLDLIBS_CODE += $(ZELDA_LIB)/Test/Dolphin/n64lib/lib/libdolcont.a
#endif /* if defined(TEST_DOLPHIN) */

LLDLIBS_BOOT += -L$(ROOT)/usr/lib $(U64LIB) $(C64LIB)
#if defined(LEOFILEOUT)
LLDLIBS_BOOT += -L$(ZELDA_LIB)/ISV/tool/lib -lleofile 
#endif

#if defined(__GCC__)
##LLDLIBS_BOOT += -lgultra_d $(NUSLIB) $(GCCDIR)/mipse/lib/libkmc.a
LLDLIBS_BOOT += $(N64LIB)
#else
LLDLIBS_BOOT += $(ULTRALIB) $(NUSLIB)
#endif


##cfe: Warning 813:: struct/union/enum '' is used, but not defined
##cfe: Warning 828:: '' may be indistinguishable from '' due to internal name truncation
##cfe: Warning 852:: '' can be const qualified, since it is not set within its lifetime.
##cfe: Warning 814:: static '' unused
##cfe: Warning 819:: function parameter '' is not used in function ''
##cfe: Warning 820:: '' is not used in function ''
##cfe: Warning 821:: '' set but unused in function ''
##cfe: Warning 827:: implicit conversion from '' to ''
##cfe: Warning 828:: '' may be indistinguishable from '' due to internal name truncation
#WOFF=-woff 1685,515,608,658,799,803,852,1048,1233,1499$(LWOFF)
#if defined(WARNLEVEL0)
LWOFF = 	813,828
#elifdef WARNLEVEL1
LWOFF = 	813,828,852
#elifdef WARNLEVEL2
LWOFF = 	813,828,852,814,819,820,821,827
#elifdef WARNLEVEL3
LWOFF = 	1685,515,608,658,799,803,852,1048,1233,1499,813,828,852,814,819,820,821,827
#else
LWOFF = 	813,828,852
#endif
#if !defined(__GCC__)
WOFF = -woff $(LWOFF)$(VWOFF)
#endif

#if defined(DEBUG_DISP_COL_SHAPE)
VMAKEOPT += -DDEBUG_DISP_COL_SHAPE
#endif

#if !defined(ROM_D)
LCOPTS += -Olimit 1300			 #コンパイルが遅くなるかも
#endif

MAKEOPT = $(GMAKEOPT) $(LMAKEOPT) $(VMAKEOPT)

#LCINCS =
LASINCS =	$(LCINCS)
LCDEFS += $(MAKEOPT)
#if defined(__GCC__)
LCOPTS = -Wall -W -G 0
#LCOPTS += -Wimplicit -Wreturn-type -Wunused -Wswitch -Wcomment -Wtrigraphs -Wformat -Wchar-subscripts -Wuninitialized -Wparentheses -Wtemplate-debugging 
#LCOPTS += -Wid-clash-len -Wcast-align -Wwrite-strings -Waggregate-return -Wconversion -Wshadow
LCOPTS += -Wpointer-arith -Wcast-qual -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wredundant-decls -Wnested-externs -Woverloaded-virtual -Winline
#if defined(FORCE_CPP)
LCOPTS += -Wenum-clash
#endif
LASOPTS = 	-G 0
#else
LCOPTS = -non_shared -G 0 -mips2 -fullwarn -float -xansi -Xcpluscomm -wlint,-fhp
# 大きすぎる関数を発見する
#LCOPTS += -Olimit 100
LASOPTS =	-non_shared -G 0
#endif

LC++DEFS =	$(LCDEFS)
LC++INCS =	$(LCINCS)
### #if defined(__GCC__)
LC++DEFS += -D_LANGUAGE_C_PLUS_PLUS -DLANGUAGE_C_PLUS_PLUS
### #endif
#if !defined(ROM_F) && !defined(__GCC__)
LC++OPTS =	-non_shared -G 0 -mips2 -fullwarn -float -xansi +pp -woff 3259,3262,3672,3106
#else
LC++OPTS =	-non_shared -G 0 -mips2 -xansi
#endif
#: warning(3106): nested comment is not allowed
#: warning(3259): expression has no effect
#: warning(3262): variable "p1" was declared but never referenced
#: warning(3672): Mangling of signed character does not match cfront name mangling

: error(3114): identifier "" is undefined
: error(3130): the #endif for this directive is missing
: error(3232): a value of type "" cannot be used to initialize an entity of type ""
: error(3252): argument of type "" is incompatible with parameter of type ""
: error(3611): a value of type "" cannot be assigned to an entity of type ""
: error(3867): expected a member name

## 初期化しないauto変数を 0xffffa5a5にしてしまう
## 全バージョンで外すようにします（全責任者：山本雄一）
## スタックトレースが追いにくいので復活させました（早川）
#if !defined(ROM_F) && !defined(__GCC__)
LCOPTS   += -trapuv
LC++OPTS += -trapuv
#endif

## make clean で消えるもの
LDIRT  = rom_d rom_x rom_f rom_s spec_inc_ovl.inc spec_seg_ovl.inc *.rel *.map $(ULTRALIB2) $(U64LIB2) $(C64LIB2) $(NUSLIB2) zelda.gdis eptvr.dat ptn64.dat *.szp *.szs
LDIRT1 = *.d


##LLDOPTS = $(MKDEPOPT) -L$(PATCH_LIBDIR) -L$(COMMON_LIBDIR) -L$(ROOT)/usr/lib/PR
GLDOPTS =				# デフォルトの内容を削除する

#if defined(__GCC__)
LDFLAGS_WIDHOUT_LDLIBS = $(LDOPTS) $(ENDIAN)
#else
LDFLAGS_WIDHOUT_LDLIBS	= $(LDOPTS) $(ENDIAN)
#endif

TOOLBIN = ${ZELDA_ROOT}/tool/bin
CAMDATINSTALLROOT = ${ZELDA_ROOT}/data/shape/SAM_TOOL
CAMPARAMH = camera_param_data.h
CAMERAZDB = camera.zdb
CAMDATABASE = ${ZELDA_ROOT}/data/$(CAMERAZDB)

THEENDH = z_the_end_data.h

#
# エントリ登録
#
all default:	genfiles $(TARGETS)

help::
	@head -100 $(MAKEFILE) | egrep '^#HELP#' | sed 's/^#HELP#//'

# ソース・データ更新
coall::
	coall
	$(MAKE) data

# フルコース2！
# make_midnight 用
# clobber する際に以前の *.szs ファイルを保存しています
fullcourse2::
	@echo このモードは make clobber を使用します
	coall
	-rm -rf szs_d; mkdir szs_d && (cd rom_d && mv ovl*.szs ../szs_d/. && mv object*.szs ../szs_d/. && mv *.szs ../szs_d/.)
	-rm -rf szs_x; mkdir szs_x && (cd rom_x && mv ovl*.szs ../szs_x/. && mv object*.szs ../szs_x/. && mv *.szs ../szs_x/.)
	-rm -rf szs_f; mkdir szs_f && (cd rom_f && mv ovl*.szs ../szs_f/. && mv object*.szs ../szs_f/. && mv *.szs ../szs_f/.)
##	-rm -rf szs_s; mkdir szs_s && (cd rom_s && mv ovl*.szs ../szs_s/. && mv object*.szs ../szs_s/. && mv *.szs ../szs_s/.)
	$(MAKE) clobber
	-mkdir rom_d; (cd szs_d && mv ovl*.szs ../rom_d/. && mv object*.szs ../rom_d/. && mv *.szs ../rom_d/.)
	-mkdir rom_x; (cd szs_x && mv ovl*.szs ../rom_x/. && mv object*.szs ../rom_x/. && mv *.szs ../rom_x/.)
	-mkdir rom_f; (cd szs_f && mv ovl*.szs ../rom_f/. && mv object*.szs ../rom_f/. && mv *.szs ../rom_f/.)
##	-mkdir rom_s; (cd szs_s && mv ovl*.szs ../rom_s/. && mv object*.szs ../rom_s/. && mv *.szs ../rom_s/.)
	$(MAKE) data
	$(MAKE) camera_param_data
	$(MAKE) genfiles
	-$(MAKE) ZELDA_CC=$(CC) rom_d
	-$(MAKE) ZELDA_CC=$(CC) rom_x
	-$(MAKE) ZELDA_CC=$(CC) rom_f
##	-$(MAKE) ZELDA_CC=$(CC) rom_s

rebuild_d:
	-rm -rf szs_d; mkdir szs_d && (cd rom_d && mv ovl*.szs ../szs_d/. && mv object*.szs ../szs_d/. && mv *.szs ../szs_d/.) && rm -rf rom_d && mv szs_d rom_d
	-$(MAKE) PARALLEL= rom_d
rebuild_x:
	-rm -rf szs_x; mkdir szs_x && (cd rom_x && mv ovl*.szs ../szs_x/. && mv object*.szs ../szs_x/. && mv *.szs ../szs_x/.) && rm -rf rom_x && mv szs_x rom_x
	-$(MAKE) PARALLEL= rom_x
rebuild_f:
	-rm -rf szs_f; mkdir szs_f && (cd rom_f && mv ovl*.szs ../szs_f/. && mv object*.szs ../szs_f/. && mv *.szs ../szs_f/.) && rm -rf rom_f && mv szs_f rom_f
	-$(MAKE) PARALLEL= rom_f
rebuild_s:
	-rm -rf szs_s; mkdir szs_s && (cd rom_s && mv ovl*.szs ../szs_s/. && mv object*.szs ../szs_s/. && mv *.szs ../szs_s/.) && rm -rf rom_s && mv szs_s rom_s
	-$(MAKE) PARALLEL= rom_s
rebuild_all:
	-coall
	-$(MAKE) data
	-$(MAKE) camera_param_data
	-$(MAKE) genfiles
	-$(MAKE) rebuild_d
	-$(MAKE) rebuild_x
	-$(MAKE) rebuild_f
	-$(MAKE) PARALLEL= romPP_d romPP_x romPP_f
	-$(MAKE) rebuild_s
	-$(MAKE) PARALLEL= romPP_s

fullcourse3::
	-$(MAKE) cleanboot
##	-$(MAKE) rom_d rom_x rom_f rom_s
	-$(MAKE) rom_d
	-$(MAKE) rom_x
	-$(MAKE) rom_f
	-$(MAKE) romPP_d
	-$(MAKE) toolobjs
	-$(MAKE) romPP_x
	-$(MAKE) romPP_f
##	-$(MAKE) romPP_s

# フルコース！
fullcourse::
	coall
	$(MAKE) camera
	$(MAKE) data
	$(MAKE) genfiles
	-$(MAKE) romPP_d || $(MAKE) romPP_d

SPECFILE  = spec
SPEC_INCLUDE  = \
	boot.h sys_segment.h sys_buffers.h spec.segment
# spec_seg_ovl.inc spec_inc_ovl.inc
LMAKEROMOPT = -I$(ZELDA_ROOT)

MAKEROMOPT = $(GMAKEROMOPT) $(LMAKEROMOPT) $(VMAKEROMOPT)

MAKEROMOBJECTS = $(OBJECTS) $(ZELDA_DATA)/*.{o,raw} $(OVLOBJECTS) \
	$(ZELDA_AUDIO)/ZeldaAudio_banks.o \
	$(ZELDA_AUDIO)/ZeldaAudio_music.o \
	$(ZELDA_AUDIO)/ZeldaAudio_table.o
MAKEROMFILES = $(SPECFILE) $(SPEC_INCLUDE)  $(OVLRELFILES)


# マップファイルの作成
zelda.map: $(MAKEROMOBJECTS) $(MAKEROMFILES)
	(LANG=C ZELDA_DATA=${ZELDA_DATA} time $(MAKEROM) -m $(MAKEROMOPT) $(MAKEOPT) -r rom ../$(SPECFILE) > zelda.map)


##
## LMAKEOPTIONの定義
##
#if !defined(NES_VERSION)
#LMAKEOPTION = FOR_JAPAN=	#HIRATSU
#endif
LMAKEOPTION += USE_HIRESO=
LMAKEOPTION += USE_LOCALE=
#LMAKEOPTION += USE_SRAM=
LMAKEOPTION += USE_FLASHROM=
LMAKEOPTION += USE_CIC6105=
#if defined(PARALLEL)
LMAKEOPTION += "PARALLEL=$(PARALLEL)"
#endif
#if defined(HAYAKAWA_LIB)
LMAKEOPTION += "HAYAKAWA_LIB=$(HAYAKAWA_LIB)"
#endif
#if defined(FORCE_CPP)
LMAKEOPTION += "FORCE_CPP=$(FORCE_CPP)"
#endif
#if defined(VMAKEOPT)
LMAKEOPTION += "VMAKEOPT=$(VMAKEOPT)"
#endif
#if defined(VMAKEROMOPT)
LMAKEOPTION += "VMAKEROMOPT=$(VMAKEROMOPT)"
#endif
#if defined(SCENE_TOOL)
LMAKEOPTION += "SCENE_TOOL=$(SCENE_TOOL)"
#endif
#if defined(SCENE_TOOL2)
LMAKEOPTION += "SCENE_TOOL2=$(SCENE_TOOL2)"
#endif
#if defined(TEST_DOLPHIN)
LMAKEOPTION += "TEST_DOLPHIN=$(TEST_DOLPHIN)"
#endif
#ifdef GC64EMU_VERSION
LMAKEOPTION += "GC64EMU_VERSION=1"
#endif
#if defined(__GCC__)
LMAKEOPTION += "__GCC__=$(__GCC__)"
#endif
MAKEOPTION_D = $(LMAKEOPTION) $(VMAKEOPTION) ROM_D= USE_CIC6105_NOCHECK= USE_THREAD_PROFILE= USE_COUNT= DEBUG_CAMERA= USE_DEBUG_MALLOC= VIDEO_AUTO= ISVIEWER= 
MAKEOPTION_X = $(LMAKEOPTION) $(VMAKEOPTION) ROM_X= USE_CIC6105_NOCHECK= USE_THREAD_PROFILE= USE_COUNT= DEBUG_CAMERA= USE_DEBUG_MALLOC= VIDEO_AUTO= ISVIEWER=
MAKEOPTION_F = $(LMAKEOPTION) $(VMAKEOPTION) ROM_F= USE_CIC6105_NOCHECK= ROM_ROM= FINAL_ROM=
MAKEOPTION_S = $(LMAKEOPTION) $(VMAKEOPTION) ROM_S= USE_CIC6105_NOCHECK= ROM_ROM= SHOW_VERSION=

LMAKEFLAGS = -f ../$(MAKEFILE)
MAKEFLAGS = $(GMAKEFLAGS) $(LMAKEFLAGS) $(VMAKEFLAGS)

zelda_d.map:
	@echo ": Entering directory \`./rom_d/'"
	mkdirhier rom_d
	cd rom_d && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_D) zelda.map
	@echo ": Leaving directory \`./rom_d/'"

zelda_x.map:
	@echo ": Entering directory \`./rom_x/'"
	mkdirhier rom_x
	cd rom_x && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_X) zelda.map
	@echo ": Leaving directory \`./rom_x/'"

zelda_f.map:
	@echo ": Entering directory \`./rom_f/'"
	mkdirhier rom_f
	cd rom_f && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_F) zelda.map
	@echo ": Leaving directory \`./rom_f/'"

zelda_s.map:
	@echo ": Entering directory \`./rom_s/'"
	mkdirhier rom_s
	cd rom_s && $(MAKE) $(VMAKEFLAGS) $(MAKEOPTION_S) zelda.map
	@echo ": Leaving directory \`./rom_s/'"

spec.i:../$(SPECFILE) ../spec.segment ../spec_seg_ovl.inc ../boot.h ../sys_segment.h
	(LANG=C ZELDA_DATA=${ZELDA_DATA} $(CC) -E $(MAKEOPT) ../$(SPECFILE) > spec.i.tmp)
	mv spec.i.tmp spec.i

rom: $(MAKEROMOBJECTS) $(MAKEROMFILES)
	../make_version.sh $(MAKEOPTION) > version_data.h
	$(CC) $(CFLAGS) -c ../version.c
	rm -f zelda lowreso highreso
#if defined(__GCC__)
	(LANG=C ZELDA_DATA=${ZELDA_DATA} ROOT=$(ULTRA_ROOT) time $(MAKEROM) -d $(MAKEROMOPT) $(MAKEOPT) -r rom.tmp ../$(SPECFILE) > $(ZELDA_INFO))
#else
	(LANG=C ZELDA_DATA=${ZELDA_DATA} ROOT=/             time $(MAKEROM) -d $(MAKEROMOPT) $(MAKEOPT) -r rom.tmp ../$(SPECFILE) > $(ZELDA_INFO))
#endif
	$(NRDC) -b -i$(NRDC_INITIAL_CODE) -t$(NRDC_GAME_TITLE) -v$(NRDC_ROM_VERSION) rom.tmp
#if defined(USE_CIC6105_CHECK)
	$(VERSUM) rom.tmp
#endif
	mv -f rom.tmp rom
	-($(NM) -B -v zelda | tee zelda.nm1 | egrep "^8" > zelda.nm)&
#if defined(PARTNER)
	n64deb zelda		# パートナー用変換
#endif
#if !defined(EMU_ROM)
	@echo "makemaskはスキップされました"
	@echo "makemaskは手でやってください"
	@echo "例）makemask rom_d/rom"
##	$(MAKEMASK) rom		# ROM焼き用変換
#endif
	@-if [ \( ${USER} = "###yoshida" -o ${USER} = "###hayakawa" \) -a -f /home/iwawaki/AIFC_FILES/capture.mv ]; then \
	    audiopanel -nodisplay -nofork -outlevels 2; \
	    movieplayer -l 0 -N -z 0.5 -b q -v /home/iwawaki/AIFC_FILES/capture.mv > /dev/null; \
	else \
	    if [ -x ../bell.sh ]; then \
		    ../bell.sh; \
	    else \
	        if [ -x ./bell.sh ]; then \
		        ./bell.sh; \
	        fi; \
	    fi; \
	fi

#if defined(__GCC__)
LDMAPOPT =
#else
LDMAPOPT = -m
#endif

## オーバーレイなオブジェクトから 新しくosなどの関数を呼ぼうとすると
## Undefined text symbol "strcmp" -- 1st referenced by codesegment.o.
## のようにリンクエラーになります。そういう場合はこの下に追加してください。
OVLSYMS =
#OVLSYMS += -u sprintf
#OVLSYMS += -u vaprintf
OVLSYMS += -u DisplayArena
OVLSYMS += -u KillRspRdp
OVLSYMS += -u LoadFragment
OVLSYMS += -u LoadFragment2
OVLSYMS += -u _dbg_hungup
OVLSYMS += -u __cmpdi2
OVLSYMS += -u __fixsfdi
OVLSYMS += -u __floatdidf
OVLSYMS += -u __osEPiRawStartDma
OVLSYMS += -u __osGetActiveQueue
OVLSYMS += -u __osGetCause
OVLSYMS += -u __osGetCompare
OVLSYMS += -u __osGetConfig
OVLSYMS += -u __osGetCurrFaultedThread
OVLSYMS += -u __osGetFpcCsr
OVLSYMS += -u __osGetSR
OVLSYMS += -u __osGetWatchLo
OVLSYMS += -u __osGetHWIntrRoutine
OVLSYMS += -u __osMalloc
OVLSYMS += -u __osMotorAccess
OVLSYMS += -u __osSetCause
OVLSYMS += -u __osSetCompare
OVLSYMS += -u __osSetConfig
OVLSYMS += -u __osSetFpcCsr
OVLSYMS += -u __osSetHWIntrRoutine
OVLSYMS += -u __osSetSR
OVLSYMS += -u __osSetWatchLo
OVLSYMS += -u __ull_to_f
OVLSYMS += -u bcmp
OVLSYMS += -u cosf
OVLSYMS += -u coss
OVLSYMS += -u facos
OVLSYMS += -u fatan2
OVLSYMS += -u fmodf
OVLSYMS += -u fqrand
OVLSYMS += -u fround
OVLSYMS += -u ftan
OVLSYMS += -u gfxprint_init
OVLSYMS += -u guLoadMatrixi2f
OVLSYMS += -u guLookAt
OVLSYMS += -u guLookAtHilite
OVLSYMS += -u guMtxIdent
OVLSYMS += -u guOrtho
OVLSYMS += -u guPerspective
OVLSYMS += -u guPosition
OVLSYMS += -u guRotate
OVLSYMS += -u guS2DInitBg
OVLSYMS += -u guS2DInitBg
OVLSYMS += -u guScale
OVLSYMS += -u guTranslate
OVLSYMS += -u malloc_DEBUG
OVLSYMS += -u memset
OVLSYMS += -u msleep
OVLSYMS += -u osAfterPreNMI
OVLSYMS += -u osAiGetLength
OVLSYMS += -u osAiSetFrequency
OVLSYMS += -u osContGetQuery
OVLSYMS += -u osContGetReadData
OVLSYMS += -u osContInitX
OVLSYMS += -u osContSetCh
OVLSYMS += -u osContStartQuery
OVLSYMS += -u osContStartReadData
OVLSYMS += -u osGetIntMask
OVLSYMS += -u osGetMemSize
OVLSYMS += -u osInitializeCPP
OVLSYMS += -u osMotorInit
OVLSYMS += -u osPfsAllocateFile
OVLSYMS += -u osPfsDeleteFile
OVLSYMS += -u osPfsFileState
OVLSYMS += -u osPfsFindFile
OVLSYMS += -u osPfsFreeBlocks
OVLSYMS += -u osPfsInitPak
OVLSYMS += -u osPfsReadWriteFile
OVLSYMS += -u osSetTime
OVLSYMS += -u osSpTaskLoad
OVLSYMS += -u osSpTaskStartGo
OVLSYMS += -u osSpTaskYield
OVLSYMS += -u osSpTaskYielded
OVLSYMS += -u osStopThread
OVLSYMS += -u osStopTimer
OVLSYMS += -u osViExtendVStart
OVLSYMS += -u osViGetCurrentFramebuffer
OVLSYMS += -u osViGetNextFramebuffer
OVLSYMS += -u osViModeFpalLan1
OVLSYMS += -u osViModeNtscHpf1
OVLSYMS += -u osViModeNtscHpn1
OVLSYMS += -u osViModeMpalHpf1
OVLSYMS += -u osViModePalHpf1
OVLSYMS += -u osViModeFpalHpf1
OVLSYMS += -u osViSetEvent
OVLSYMS += -u osViSwapBuffer
## #if defined(USE_VRS)
OVLSYMS += -u osVoiceCheckWord
OVLSYMS += -u osVoiceClearDictionary
OVLSYMS += -u osVoiceControlGain
OVLSYMS += -u osVoiceGetReadData
OVLSYMS += -u osVoiceInit
OVLSYMS += -u osVoiceMaskDictionary
OVLSYMS += -u osVoiceSetWord
OVLSYMS += -u osVoiceStartReadData
OVLSYMS += -u osVoiceStopReadData
## #endif /* defined(USE_VRS) */
OVLSYMS += -u osWritebackDCacheAll
OVLSYMS += -u pad_on_trigger
OVLSYMS += -u sinf
OVLSYMS += -u sins
OVLSYMS += -u sqrtf
OVLSYMS += -u strcmp
OVLSYMS += -u strcpy
OVLSYMS += -u usleep
#if defined(LEOFILEOUT)
OVLSYMS += -u FileInit
#endif /* defined(LEOFILEOUT) */
#if defined(USE_THREAD_PROFILE)
OVLSYMS += -u osThreadProfileReadTime
OVLSYMS += -u osThreadProfileReadCount
OVLSYMS += -u osThreadProfileClear
OVLSYMS += -u osThreadProfileInit
OVLSYMS += -u osThreadProfileStart
#endif /* defined(USE_THREAD_PROFILE) */
#if defined(USE_FLASHROM)
OVLSYMS += -u osEPiLinkHandle
OVLSYMS += -u osEPiWriteIo
#endif /* defined(USE_FLASHROM) */
OVLSYMS += -u osEPiReadIo

$(AUDIOSEGMENT:.o=.map): $(AUDIOSEGMENT)
$(AUDIOSEGMENT): $(AUDIOOBJECTS)
	$(LD)  -o $(AUDIOSEGMENT) -r $(AUDIOOBJECTS) $(LDFLAGS_WIDHOUT_LDLIBS) $(LLDLIBS_AUDIO) $(LDMAPOPT) > $(AUDIOSEGMENT:.o=.map)

$(BOOTSEGMENT:.o=.map): $(BOOTSEGMENT)
$(BOOTSEGMENT): $(BOOTOBJECTS)
	rm -f $(BOOTSEGMENT)
	$(LD)  -o $(BOOTSEGMENT) -r $(BOOTOBJECTS) $(OVLSYMS) $(LDFLAGS_WIDHOUT_LDLIBS) $(LLDLIBS_BOOT) $(LDMAPOPT) > $(BOOTSEGMENT:.o=.map)

$(CODESEGMENT:.o=.map): $(CODESEGMENT)
#$(CODESEGMENT): $(CODEOBJECTS) $(ULTRALIB2) $(NUSLIB2) $(U64LIB2) $(C64LIB2)
$(CODESEGMENT): $(CODEOBJECTS)
	rm -f $(CODESEGMENT)
	$(LD)  -o $(CODESEGMENT) -r $(CODEOBJECTS) $(LDFLAGS_WIDHOUT_LDLIBS) $(LLDLIBS_CODE) $(LDMAPOPT) > $(CODESEGMENT:.o=.map)

$(COBJECT_EN) $(COBJECT_EN:.o=.map): $(COBJECTS_EN)
	$(LD)  -o $(COBJECT_EN) -r $(COBJECTS_EN) $(LDFLAGS) $(LDMAPOPT) > $(COBJECT_EN:.o=.map)

$(COBJECT_EFF) $(COBJECT_EFF:.o=.map): $(COBJECTS_EFF)
	$(LD)  -o $(COBJECT_EFF) -r $(COBJECTS_EFF) $(LDFLAGS) $(LDMAPOPT) > $(COBJECT_EFF:.o=.map)

$(COBJECT_Z) $(COBJECT_Z:.o=.map): $(COBJECTS_Z)
	$(LD)  -o $(COBJECT_Z) -r $(COBJECTS_Z) $(LDFLAGS) $(LDMAPOPT) > $(COBJECT_Z:.o=.map)

$(COBJECT_SYS) $(COBJECT_SYS:.o=.map): $(COBJECTS_SYS)
	$(LD)  -o $(COBJECT_SYS) -r $(COBJECTS_SYS) $(LDFLAGS) $(LDMAPOPT) > $(COBJECT_SYS:.o=.map)

## 第１水準フォント データ
CC_FLAGS  = -Wab,-r4300_mul -mips2 -O -xansi -signed -fullwarn -prototypes -Xcpluscomm -I/usr/include/PR -non_shared -G 0 -c -Dyj
##LASFLAGS = -Wab,-r4300_mul -mips2 -O2 -xansi -signed -prototypes -Xcpluscomm -I/usr/include/PR -non_shared -G 0 -c -Dyj
kanread.o	: kanread.s	;cc $(CC_FLAGS) -o $(.TARGET) $(.IMPSRC)
kan.o	: kan.s	;cc $(CC_FLAGS) -o $(.TARGET) $(.IMPSRC)

cfb.o:cfb.c
	$(CC) $(LCOPTS) $(LCINCS) $(MKDEPOPT) $(WOFF) $(LCDEFS) -c cfb.c

##
###    終末リセット関係
####
#####
the_end:
	make -f the_end_data.mk

##
###  ♪カメラ〜〜〜〜〜〜〜〜〜〜〜〜〜
####   カメラ〜〜〜〜〜〜〜〜〜〜〜〜〜
#####  つよいぞカメラッつよいぞカメラッ
###### つよいぞカ〜メ〜ラ〜〜〜〜〜~

camera: $(CAMDATABASE) $(TOOLBIN)/makecamera
	$(TOOLBIN)/makecamera -l -d$(CAMDATINSTALLROOT) $(CAMDATABASE)

camera_params:
	@cat $(CAMDATINSTALLROOT)/ROM_DATA/camera_rom_name.dat $(CAMDATINSTALLROOT)/ROM_DATA/event_rom_name.dat | grep '^CAM_' > /tmp/camtypechk.old
	@makecamera -c ../data/camera/camera.zdb | grep '^CAM_' > /tmp/camtypechk.new
	@if diff /tmp/camtypechk.old /tmp/camtypechk.new; \
	then echo "camera updated..."; \
	else $(TOOLBIN)/makecamera -l -q -d$(CAMDATINSTALLROOT) $(CAMDATABASE); \
	fi

camera_param_data: $(CAMPARAMH)

$(CAMPARAMH):  $(CAMDATABASE) $(TOOLBIN)/makecamera
	$(TOOLBIN)/makecamera -td -q $(CAMDATABASE)

../$(CAMPARAMH):  ../../data/$(CAMERAZDB)
	$(TOOLBIN)/makecamera -td -q ../../data/$(CAMERAZDB)
	mv $(CAMPARAMH) ..

../../data/$(CAMERAZDB):
	@if [ ! -l ../../data/camera ]; \
	then \
	    if [ `echo ${HOST} | awk '{print substr($$0, 1, 3)}'` = "srd" ]; \
	    then  ln -s /project/ZELDA/data/camera ../../data; \
	    else  echo "please contact to SRD ..."; \
	    fi; \
	fi
	@if [ ! -r ../../data/$(CAMERAZDB) ]; \
	then \
	    cp ../../data/camera/$(CAMERAZDB) ../../data; \
	fi

$(CAMDATABASE):  ${ZELDA_ROOT}/data/camera/${@F}
	if [ -r $@ ] && [ ! -w $@ ]; \
	then  chmod +w $@; \
	fi
	cp ${ZELDA_ROOT}/data/camera/${@F} $@

###
##

zelda.gdis::				# 逆アセンブルリストの作成
	gdis -S \
$(GDISOPT) \
-I.. \
-I/usr/local/srd/PR/src/libu64 \
-I/usr/local/srd/PR/src/libc64 \
-I/usr/src/PR/libultra/gu zelda > zelda.gdis

# 逆アセンブルリストの作成
zelda_d.gdis::
	cd rom_d && $(MAKE) $(MAKEFLAGS) zelda.gdis "GDISOPT=$(GDISOPT)"
zelda_x.gdis::
	cd rom_x && $(MAKE) $(MAKEFLAGS) zelda.gdis "GDISOPT=$(GDISOPT)"
zelda_f.gdis::
	cd rom_f && $(MAKE) $(MAKEFLAGS) zelda.gdis "GDISOPT=$(GDISOPT)"
zelda_s.gdis::
	cd rom_s && $(MAKE) $(MAKEFLAGS) zelda.gdis "GDISOPT=$(GDISOPT)"

cleanall:
	rm -f rom*/*.o rom*/Makedepend rom*/*.map rom*/*. rom*/*.oo rom*/*.gdis rom*/*.a
cleanboot:				# ptstart()/isPrintfInit()を呼んでいる
	rm -f */boot.o
	rm -f */padmgr.o */main.o

#if defined(CLEAN_ALL) || defined(USE_COUNT) || defined(USE_TIMER)
	rm -f */graph.o
#endif
#if defined(CLEAN_ALL) || defined(USE_CIC6105)
	rm -f */boot.o */z_bg_zg.o */z_en_zl2.o */z_fishing.o */sys_ucode.o */audioMgr.o */z_title.o */CIC6105.o */main.o
#endif
#if defined(CLEAN_ALL) || defined(USE_ACTOR_NAME_TABLE)
	rm -f */z_actor_dlftbls.o */z_std_dma.o
#endif
#if defined(CLEAN_ALL) || defined(USE_VISCVG)
	rm -f */game.o
#endif
#if defined(CLEAN_ALL) || defined(SHOW_VERSION)
	rm -f */main.o 				# DISABLE_FAULT_DISPLAY	
	rm -f */padmgr.o			# SHOW_VERSION
#endif
#if defined(CLEAN_ALL) || defined(DEBUG_MODE_NOINPUT)
	rm -f */game.o */graph.o */z_debug.o */z_demo.o */z_file_choose.o */z_kaleido.o */z_kaleido_scope.o */z_kankyo.o */z_message.o */z_play.o */z_player.o	# DEBUG_MODE_NOINPUT
#endif
#if defined(CLEAN_ALL) || defined(GATEWAY_VERSION) || defined(PAL_GATEWAY_VERSION)
	rm -f */graph.o */ssSRAMrdwt.o */z_locale.o 
#endif
#if defined(CLEAN_ALL) || defined(USE_LOCALE)
	rm -f */first_game.o */z_locale.o */z_common_data.o
#endif

cleancode:				# リンクだけをやり直す
	rm -f */$(CODESEGMENT)
cleanbootseg:				# リンクだけをやり直す
	rm -f */$(BOOTSEGMENT)
cleanrom:				# makeromだけをやり直す
	rm -f */rom
cleandepend:				# Makedependだけを消す
	rm -f */Makedepend
data:
	cd $(ZELDA_DATA) && coall && ./shape_all -f

data1:
	cd $(ZELDA_DATA) && coall && ./shape_all

scene:
	cd $(ZELDA_DATA) && $(TOOLBIN)/scene_make

keep:
	cd $(ZELDA_DATA) && ./keep

dma_make::
	cd $(ZELDA_DATA) && ./dma_make

mes_make::
	cd $(ZELDA_DATA) && ./mes_make

#if defined(FORCE_CPP) && defined(__GCC__)
SUBDIR_D = rom_d_g++
SUBDIR_X = rom_x_g++
SUBDIR_F = rom_f_g++
#elif defined(FORCE_CPP) && !defined(__GCC__)
SUBDIR_D = rom_d_c++
SUBDIR_X = rom_x_c++
SUBDIR_F = rom_f_c++
#elif !defined(FORCE_CPP) && defined(__GCC__)
SUBDIR_D = rom_d_gcc
SUBDIR_X = rom_x_gcc
SUBDIR_F = rom_f_gcc
#else
SUBDIR_D = rom_d
SUBDIR_X = rom_x
SUBDIR_F = rom_f
#endif

# ROM用バージョンの作成
rom_x::
	@echo ": Entering directory \`./$(SUBDIR_X)/'"
	mkdirhier $(SUBDIR_X)
	cd $(SUBDIR_X) && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_X) rom
	@echo ": Leaving directory \`./$(SUBDIR_X)/'"

# デバッグバージョン
rom_d::
	@echo ": Entering directory \`./$(SUBDIR_D)/'"
	mkdirhier $(SUBDIR_D)
	cd $(SUBDIR_D) && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_D) rom
	@echo ": Leaving directory \`./$(SUBDIR_D)/'"

# 最終ＲＯＭバージョン
rom_f::
	@echo ": Entering directory \`./$(SUBDIR_F)/'"
	mkdirhier $(SUBDIR_F)
	cd $(SUBDIR_F) && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_F) rom
	@echo ": Leaving directory \`./$(SUBDIR_F)/'"

# ショウバージョン
rom_s::
	@echo ": Entering directory \`./rom_s/'"
	mkdirhier rom_s
	cd rom_s && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_S) rom
	@echo ": Leaving directory \`./rom_s/'"

romPP_d::
	@echo ": Entering directory \`./$(SUBDIR_D)/'"
	mkdirhier $(SUBDIR_D)
	cd $(SUBDIR_D) && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_D) romPP
	-(cd $(SUBDIR_D) && $(MAKEMASK) romPP)
	@echo ": Leaving directory \`./$(SUBDIR_D)/'"

romPP_x::
	@echo ": Entering directory \`./$(SUBDIR_X)/'"
	mkdirhier $(SUBDIR_X)
	cd $(SUBDIR_X) && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_X) romPP
	-(cd $(SUBDIR_X) && $(MAKEMASK) romPP)
	@echo ": Leaving directory \`./$(SUBDIR_X)/'"

romPP_f::
	@echo ": Entering directory \`./$(SUBDIR_F)/'"
	mkdirhier $(SUBDIR_F)
	cd $(SUBDIR_F) && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_F) romPP
	-(cd $(SUBDIR_F) && $(MAKEMASK) romPP)
	@echo ": Leaving directory \`./$(SUBDIR_F)/'"

romPP_s::
	@echo ": Entering directory \`./rom_s/'"
	mkdirhier rom_s
	cd rom_s && $(MAKE) $(MAKEFLAGS) $(MAKEOPTION_S) romPP
	@echo ": Leaving directory \`./rom_s/'"

romPP:rom ../zelda_press
#	../zelda_press -p1
	../zelda_press -p2
	@if [ -x ../bell.sh ]; then \
	    ../bell.sh; \
	else \
	    if [ -x ./bell.sh ]; then \
	        ./bell.sh; \
	    fi; \
	fi

rom_d/rom::rom_d
rom_x/rom::rom_x
rom_f/rom::rom_f
rom_s/rom::rom_s
rom_d/romPP::romPP_d
rom_x/romPP::romPP_x
rom_f/romPP::romPP_f
rom_s/romPP::romPP_s

install::
	-rm /project/ZELDA/ROM/rom
	cp rom_d/rom /project/ZELDA/ROM/rom_d
	cp rom_x/rom /project/ZELDA/ROM/rom_x
	cp rom_f/rom /project/ZELDA/ROM/rom_f
	cp rom_s/rom /project/ZELDA/ROM/rom_s
	ln /project/ZELDA/ROM/rom_d /project/ZELDA/ROM/rom_d_`date '+%y-%m-%d_%H:%M:%S'`
	ln /project/ZELDA/ROM/rom_x /project/ZELDA/ROM/rom_x_`date '+%y-%m-%d_%H:%M:%S'`
	ln /project/ZELDA/ROM/rom_f /project/ZELDA/ROM/rom_f_`date '+%y-%m-%d_%H:%M:%S'`
	ln /project/ZELDA/ROM/rom_s /project/ZELDA/ROM/rom_s_`date '+%y-%m-%d_%H:%M:%S'`

main.o:sys_heap.h
z_actor_dlftbls.o:z_actor_dlftbls.decl
z_actor_profile.o:z_actor_dlftbls.decl
z_scene.o:z_actor_dlftbls.decl

genfiles:spec_seg_ovl.inc spec_inc_ovl.inc camera_param_data
# 実体のないセグメントは除外する
z_segment.decl:spec.i
	egrep include spec.i | \
egrep -v '(\.|hilite|fifobuffer|yieldbuffer|SystemDynamic|dramstackbuffer|yieldbuffer|zbuffer|rcp_dynamic|rcp_cfb|rcp_zb|Audioheap|SystemHeap|object_boss06|sys_cfb0h|sys_cfb0l|sys_cfb1h|sys_cfb1l|sys_work0|sys_work1|sys_work2|sys_work3|sys_work4|sys_zbufh|sys_zbufl|sys_wbufl|UndefinedSymbols)' | \
sed -e 's/[ 	]*include[ 	]*"\(.*\)"[ 	]*/_DECL_(\1)/' \
> z_segment.decl.tmp
	mv z_segment.decl.tmp z_segment.decl

../rom_d/z_segment.decl:z_segment.decl
../rom_x/z_segment.decl:z_segment.decl
../rom_f/z_segment.decl:z_segment.decl
../rom_s/z_segment.decl:z_segment.decl
spec_seg_ovl.inc:spec_ovl.dat make_spec_seg_ovl.sh
	make_spec_seg_ovl.sh < spec_ovl.dat > spec_seg_ovl.inc~$$$$~ && chmod 444 spec_seg_ovl.inc~$$$$~ && mv spec_seg_ovl.inc~$$$$~ spec_seg_ovl.inc
spec_inc_ovl.inc:spec_ovl.dat make_spec_inc_ovl.sh
	make_spec_inc_ovl.sh < spec_ovl.dat > spec_inc_ovl.inc~$$$$~ && chmod 444 spec_inc_ovl.inc~$$$$~ && mv spec_inc_ovl.inc~$$$$~ spec_inc_ovl.inc

z_std_dma.o:z_segment.decl
z_std_dma_data.o:z_segment.decl

## 依存ファイル(depend)をつくる
#DEPEND_FILES = $(COBJECTS:.o=.dep)
#.SUFFIXES : .dep
#.c.dep :
#	$(CC) $(CFLAGS) -M $(.IMPSRC) > $(.PREFIX).dep
#.cxx.dep .C.dep .c++.dep :
#	$(CXX) $(CXXFLAGS) -M $(.IMPSRC) > $(.PREFIX).dep
#depend : $(DEPEND_FILES)

#test
test:test.o
	cc -non_shared -o test test.o
touch_z_actor_dlftbls.decl:
	@echo "z_actor_dlftbls.declの順番は大丈夫ですか？"
	touch 01010000 z_actor_dlftbls.decl
	touch 01010000 rom_[dfxs]/z_actor.o rom_[dfxs]/z_actor_dlftbls.o
#ifmake fluff
GCDEFS = $(HW_FLAGS) -F
#endif

figure:
	@echo 'Makedependのリフレッシュ'
	@make Makedepend.new
	@echo 'rom_d/Makedependのリフレッシュ'
	@( cd rom_d && make -f ../$(MAKEFILE) Makedepend.new )

ZELDA_TAG:
	etags --typedefs-and-c++ \
/usr/local/srd/PR/patch/PR/*.h \
/usr/include/PR/*.h 	
	sed -n -e "s/\(extern .*(.*)\)\;/\1{}/p" /usr/include/PR/*.h > temp_tags_work.h
	etags --typedefs-and-c++ --append temp_tags_work.h
	etags --typedefs-and-c++ --append \
/usr/include/float.h \
/usr/include/limits.h \
/usr/include/sgidefs.h \
/usr/include/standards.h \
/usr/include/stdarg.h \
/usr/include/stddef.h \
${ZELDA_ROOT}/lib/audio/*.h \
${ZELDA_ROOT}/lib/*/*.[ch] \
${ZELDA_ROOT}/lib/*.h
	etags --typedefs-and-c++ --append \
/usr/local/srd/PR/src/libu64/*.[ch] \
/usr/local/srd/PR/src/libc64/*.[ch]
	etags --typedefs-and-c++ --append *.h
	etags --typedefs-and-c++ --append *.c
	etags --typedefs-and-c++ --append *.inc

# /* tags-query-replace tags-search 用 */
ZELDA_TAG2:
	find ${PWD} -type f -name "*.h" -print | sort | awk '{ printf("\014\n%s,0\n", $$0); }' - >  TAGS
	find ${PWD} -type f -name "*.c" -print | sort | awk '{ printf("\014\n%s,0\n", $$0); }' - >>  TAGS

#if defined(__GCC__)
.c.o :
#ifdef FORCE_CPP
#if defined(__MAKE_VERBOSE__)
	@echo "cat $(.IMPSRC)|/home/hayakawa/prj/tool/gccfilter $(.IMPSRC)| $(CXX) -I.. $(CFLAGS) -Dthis=_this -c -x c++ - -o $(.TARGET)"
#else
	@echo '$(CXX) -I.. $$(CXXFLAGS) -c -x c++ $(.IMPSRC)'
#endif
	@cat $(.IMPSRC)|/home/hayakawa/prj/tool/gccfilter $(.IMPSRC)| $(CXX) -I.. $(CXXFLAGS) -Dthis=_this -c -x c++ - -o $(.TARGET)
#else
#if defined(__MAKE_VERBOSE__)
	@echo "cat $(.IMPSRC)|/home/hayakawa/prj/tool/gccfilter $(.IMPSRC)| $(CC) -I.. $(CFLAGS) -c -x c - -o $(.TARGET)"
#else
	@echo '$(CC) -I.. $$(CFLAGS) -c -x c - -o $(.TARGET)'
#endif
	@cat $(.IMPSRC)|/home/hayakawa/prj/tool/gccfilter $(.IMPSRC)| $(CC) -I.. $(CFLAGS) -c -x c - -o $(.TARGET)
#endif
#endif

OPTCHKFILE = rom_d/z_play.o
#
# LEOFILEOUTが影響するファイルを削除
# (touch3 LEOFILEOUTでも消せる)
#
CFILES_LEOFILEOUT = \
demo_camera.c first_game.c is_debug.c z_debug_hayakawa.c z_demo.c z_kankyo_debug.c z_play.c
OBJFILES_LEOFILEOUT = $(CFILES_LEOFILEOUT:.c=.o)

RM_LEOFILEOUT:
	(cd rom_d && rm -f $(OBJFILES_LEOFILEOUT))

demotool_rom:
	@if [ ! -e $(OPTCHKFILE) ] \
		|| ! nm $(OPTCHKFILE) | grep leofileout_defined > /dev/null; \
	then \
		(cd rom_d && rm -f $(OBJFILES_LEOFILEOUT)); \
		echo "update defined(LEOFILEOUT) files..."; \
	fi

no_demotool_rom:
	@if [ ! -e $(OPTCHKFILE) ] \
		|| nm $(OPTCHKFILE) | grep leofileout_defined > /dev/null; \
	then \
		(cd rom_d && rm -f $(OBJFILES_LEOFILEOUT)); \
		echo "update defined(LEOFILEOUT) files..."; \
	fi

#
# SCENE_TOOL が影響するファイルを削除
#
OBJFILES_SCENE_TOOL = \
	rom_d/z_play.o \
	rom_d/z_room.o \
	rom_d/z_scene.o \
	rom_d/z_scene_table.o \
	rom_d/z_opening.o \
	rom_d/z_segment.decl \
	rom_d/z_std_dma_data.o \
	rom_d/z_std_dma.o \
	rom_d/z_scene_proc.o \
	rom_d/z_debug.o \
	rom_d/z_player.o \
	rom_d/spec.i \
	rom_d/z_en_time_tag.o

RM_SCENE_TOOL:
	rm -f $(OBJFILES_SCENE_TOOL)

scenetool_rom:
	@if [ ! -e $(OPTCHKFILE) ] \
		|| ! nm $(OPTCHKFILE) | grep scene_tool_defined > /dev/null; \
	then \
		rm -f $(OBJFILES_SCENE_TOOL); \
		echo "update defined(SCENE_TOOL) files..."; \
	fi

no_scenetool_rom:
	@if [ ! -e $(OPTCHKFILE) ] \
		|| nm $(OPTCHKFILE) | grep scene_tool_defined > /dev/null; \
	then \
		rm -f $(OBJFILES_SCENE_TOOL); \
		echo "update defined(SCENE_TOOL) files..."; \
	fi
