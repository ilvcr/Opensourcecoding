#!/bin/bash

#*************************************************************************#
# File Name: aspellcheck.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Wed 15 Aug 2018 03:17:51 PM DST
# Description: 用拼写检查命令aspell来核查某个单词是否在词典中
#************************************************************************#

word=$l;

output=`echo \"$word\" | aspell list`

if [ -z $output ]; then
    echo $word is a dictionary word;
else
    echo $word is not a dictionary word;
fi



