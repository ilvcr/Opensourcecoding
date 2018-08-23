#!/bin/bash
#*************************************************************************#
# File Name: weirdvars.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月23日 星期四 21时37分41秒
# Description: echo出一些诡异变量
#************************************************************************#


var="'(]\\{}\$\""
echo $var
echo
echo "$var"

echo

IFS='\'
echo $var
echo "$var"

exit 0


