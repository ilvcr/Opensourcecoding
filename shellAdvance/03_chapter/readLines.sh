#!/bin/bash
#*************************************************************************#
# File Name: readLines.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时37分12秒
# Description: 从/etc/fstab中读行
#************************************************************************#

File=/etc/fstab

{
    read line1
    read line2
} < $File

echo "First line in $File is:"
echo "$line1"
echo
echo "Second line in $File is:"
echo "$line2"

exit 0


