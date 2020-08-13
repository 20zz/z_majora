#!/usr/local/bin/bash
# $Id: make_spec_inc_ovl.sh,v 1.1.1.1 2003/06/09 19:12:09 wheeler Exp $

read after || exit 0

echo '/*'
echo $0 'による自動生成ファイルです。'
echo '編集およびレジストは禁止されています。'
echo '*/'

while true
do
  read segname objbase || exit 0
  echo '	include "'$segname'"'
done
