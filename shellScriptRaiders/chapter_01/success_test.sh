#!/bin/bash

#*************************************************************************#
# File Name: success_test.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Tue 14 Aug 2018 03:44:36 PM DST
# Description: 
#************************************************************************#

CMD="command"  #command指代要检测推出状态的目标命令
$CMD
if [ $? -eq 0];
then
    echo "$CMD executed successfully"
else
    echo "$CMD terminated unsuccessfully"
fi


