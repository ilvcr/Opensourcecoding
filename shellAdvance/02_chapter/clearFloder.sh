#!/bin/bash
#*************************************************************************#
# File Name: clearFloder.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时01分40秒
# Description: 清除
#************************************************************************#

#使用root身份运行

cd /var/log
cat /dev/null > messages
cat /dev/null > wtmp
echo "Logs cleaned up."


