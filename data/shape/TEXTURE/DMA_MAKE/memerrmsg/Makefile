#!smake
#
# $Id: Makefile,v 1.1 2003/12/06 23:45:36 wheeler Exp $
.NOTPARALLEL:				# 並列動作を禁止
LMAKEOPT = 
MAKEOPTION = 

include $(ROOT)/usr/include/make/PRdefs
include $(ROOT)/usr/local/srd/PR/SRDdefs.mk
include $(COMMONRULES)

GLDOPTS =				# デフォルトの内容を削除する
SHELL = /bin/sh

## 推定規則：.inc → .c
.SUFFIXES : .int .rgb
.int.c:
	rgb2c -F -f I -o C -s 4 -m $(.PREFIX) $(.IMPSRC) | grep -v gsSPEndDisplayList > $(.TARGET)
.rgb.c:
	rgb2c -F -f RGBA -o C -s 16 -m $(.PREFIX) $(.IMPSRC) | grep -v gsSPEndDisplayList > $(.TARGET)

##
TARGETS = memerrmsg.o memerrmsg_nes.o memerrmsg_pal.o locerrmsg.o locerrmsg_pal.o
default:$(TARGETS)

## 濱口さんのマシンからデータをゲット
## jpn
v2_attention_1.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/others/v2_attention_1.i v2_attention_1.int
v2_attention_2.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/others/v2_attention_2.i v2_attention_2.int

## pal
v2_attention_pal_nes_1.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/nes/others/v2_attention_nes_1.i v2_attention_pal_nes_1.int
v2_attention_pal_ger_1.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/ger/others/v2_attention_ger_1.i v2_attention_pal_ger_1.int
v2_attention_pal_fra_1.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/fra/others/v2_attention_fra_1.i v2_attention_pal_fra_1.int
v2_attention_pal_spa_1.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/spa/others/v2_attention_spa_1.i v2_attention_pal_spa_1.int
v2_attention_pal_nes_2.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/nes/others/v2_attention_nes_2.i v2_attention_pal_nes_2.int
v2_attention_pal_ger_2.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/ger/others/v2_attention_ger_2.i v2_attention_pal_ger_2.int
v2_attention_pal_fra_2.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/fra/others/v2_attention_fra_2.i v2_attention_pal_fra_2.int
v2_attention_pal_spa_2.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/spa/others/v2_attention_spa_2.i v2_attention_pal_spa_2.int

## nes
v2_attention_nes_1.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/nes/others/v2_attention_nes_1.i v2_attention_nes_1.int
v2_attention_nes_2.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/nes/others/v2_attention_nes_2.i v2_attention_nes_2.int

#v2_attention_fra_1.int v2_attention_fra_2.int:
#	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/fra/others/v2_attention_fra_1.i v2_attention_fra_1.int
#	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/fra/others/v2_attention_fra_2.i v2_attention_fra_2.int
#
#v2_attention_ger_1.int v2_attention_ger_2.int:
#	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/ger/others/v2_attention_ger_1.i v2_attention_ger_1.int
#	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/ger/others/v2_attention_ger_2.i v2_attention_ger_2.int

## jpn/nes
v2_attention_5.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/others/v2_attention_5.i v2_attention_5.int

## pal
v2_attention_pal_nes_5.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/nes/others/v2_attention_nes_5.i v2_attention_pal_nes_5.int
v2_attention_pal_ger_5.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/ger/others/v2_attention_ger_5.i v2_attention_pal_ger_5.int
v2_attention_pal_fra_5.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/fra/others/v2_attention_fra_5.i v2_attention_pal_fra_5.int
v2_attention_pal_spa_5.int:
	rcp guest@ot52:/usr/people/hamagut/Desktop/zelda2/pal/spa/others/v2_attention_spa_5.i v2_attention_pal_spa_5.int

getdata_all:\
v2_attention_1.int v2_attention_2.int \
v2_attention_nes_1.int v2_attention_nes_2.int \
v2_attention_pal_nes_1.int v2_attention_pal_nes_2.int \
v2_attention_pal_fra_1.int v2_attention_pal_fra_2.int \
v2_attention_pal_ger_1.int v2_attention_pal_ger_2.int \
v2_attention_pal_spa_1.int v2_attention_pal_spa_2.int \
v2_attention_5.int \
v2_attention_pal_nes_5.int v2_attention_pal_ger_5.int v2_attention_pal_fra_5.int v2_attention_pal_spa_5.int

##
memerrmsg.o:v2_attention_1.o v2_attention_2.o
	$(LD) $(LDFLAGS) -m -o $(.TARGET) -r $(.ALLSRC) > $(.PREFIX).map

memerrmsg_nes.o:v2_attention_nes_1.o v2_attention_nes_2.o
	$(LD) $(LDFLAGS) -m -o $(.TARGET) -r $(.ALLSRC) > $(.PREFIX).map

memerrmsg_pal.o:\
v2_attention_pal_nes_1.o v2_attention_pal_nes_2.o \
v2_attention_pal_fra_1.o v2_attention_pal_fra_2.o \
v2_attention_pal_ger_1.o v2_attention_pal_ger_2.o \
v2_attention_pal_spa_1.o v2_attention_pal_spa_2.o
	$(LD) $(LDFLAGS) -m -o $(.TARGET) -r $(.ALLSRC) > $(.PREFIX).map

locerrmsg.o:v2_attention_5.o
	$(LD) $(LDFLAGS) -m -o $(.TARGET) -r $(.ALLSRC) > $(.PREFIX).map

locerrmsg_pal.o:v2_attention_pal_nes_5.o v2_attention_pal_fra_5.o v2_attention_pal_ger_5.o v2_attention_pal_spa_5.o
	$(LD) $(LDFLAGS) -m -o $(.TARGET) -r $(.ALLSRC) > $(.PREFIX).map
