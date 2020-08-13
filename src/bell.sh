#!/usr/local/bin/bash
# $Id: bell.sh,v 1.1.1.1 2003/06/09 19:12:09 wheeler Exp $
#
# コンパイル完了音発生
#
#set -x

main() {

    COMPILEENDSOUND=${COMPILEENDSOUND:-compileend.aifc}
    if [ ! -f $COMPILEENDSOUND ]; then
	COMPILEENDSOUND=/usr/local/pds/lib/paro_se.aifc
    fi

    if [ -f $COMPILEENDSOUND ]; then
	if [ $REMOTEHOST ]; then
	    rsh -n $REMOTEHOST "(volume ${COMPILEENDVOLUME:-20} ${COMPILEENDVOLUME:-20}; cd $PWD; playaifc -pq $COMPILEENDSOUND)"
	else
	    machine=$(uname -m)
	    if [ "$machine" = "IP19" ]; then
>&2		echo "I am Onyx. No sound."
	    else
		volume ${COMPILEENDVOLUME:-20} ${COMPILEENDVOLUME:-20}
> /dev/null	playaifc -pq $COMPILEENDSOUND
	    fi
	fi
    fi
}

main
