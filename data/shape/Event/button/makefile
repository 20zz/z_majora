# Makefile

CFLAGS = -g  -fullwarn -xansi -wlint,-f -woff 813,852,827,826,756,515,608,658,799,819,702,814,816
# -g デバッガ  -p プロファイラ -O2
IDIR = /auto/srd61/usr/include
LDIR =/auto/srd61/usr/lib
#LDLIB =  -lGLw -lGL -lGLU  -lXm -lXt -lX11 -lm -lPW 
LDLIB =  -lXm -lXt -lX11 -lm -lPW 
TARGET = gradiv3

OBJ = vs_mask_tool.o
HEA = 

all::$(TARGET)

.c.o:$(HEA)
	cc $(CFLAGS) -I$(IDIR) -c $*.c

$(TARGET):$(OBJ)
	cc $(OBJ) $(LDLIB) $(CFLAGS) -I$(IDIR) -L$(LDIR) -o $(TARGET)
	playaifc /usr/local/pds/lib/paro_se.aifc > /dev/null

