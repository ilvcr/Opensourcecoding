#!/bin/bash

#*************************************************************************#
# File Name: checkword.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Wed 15 Aug 2018 03:13:41 PM DST
# Description: 检查给定的单词是否为词典中的单词
#************************************************************************#

word=$l
grep "^$l$" /usr/share/dict/british-english -q

if [ $? -eq 0 ]; then
    echo $word is a dictionary word;
else
    echo $word is not a dictionary word;
fi


