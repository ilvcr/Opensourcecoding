#!/bin/bash

#*************************************************************************#
# File Name: sleep.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Tue 14 Aug 2018 03:39:32 PM DST
# Description: 使用tput和sleep从0开始计数到40
#************************************************************************#

count=0;
while true;
do
    if[$count -lt 40];
    then
        let count++;
        sleep 1;
        tput rc
        tput ed
        echo -n $count;
    else exit 0;
    fi
done



