#!/bin/bash

#*************************************************************************#
# File Name: checkSort.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Wed 15 Aug 2018 03:06:00 PM DST
# Description: 检查文件是否已经排过序
#************************************************************************#

#功能描述: 排序

sort -C filename;  #将filename替换成需要检查的文件名

if [ $? -eq 0]; then
    echo Sorted;
else
    echo Unsorted;
fi



