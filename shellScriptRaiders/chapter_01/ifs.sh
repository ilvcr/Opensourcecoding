#!/bin/bash

#*************************************************************************#
# File Name: ifs.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Tue 14 Aug 2018 03:47:46 PM DST
# Description: 演示IFS的用法
#************************************************************************#

line="root:x:0:0:root:/root:/bin/bash"
oldIFS=$IFS;
IFS=":"
count=0
for item in $line;
do
    [ $count -eq 0 ] && user=$item;
    [ $count -eq 6 ] && shell=$item;
    let count++
done;
IFS=$oldIFS
echo $user\'s shell is $shell;


