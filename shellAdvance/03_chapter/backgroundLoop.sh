#!/bin/bash
#*************************************************************************#
# File Name: backgroundLoop.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时55分37秒
# Description: 在后台运行一个循环
#************************************************************************#


for i in 1 2 3 4 5 6 7 8 9 10     #第一个循环
do
    echo -n "$i "
#    sleep 1
done &         #在后台运行这个循环
               #在第2个循环之后, 将在某些时候执行

echo           #此'echo'某些时候不会显示

for i in 11 12 13 14 15 16 17 18 19 20   #第二个循环
do
    echo -n "$i "
#    sleep 1
done

echo           #这个'echo'某些时候将不会显示


# =====================================================


exit



