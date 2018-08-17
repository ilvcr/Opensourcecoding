#!/bin/bash
#*************************************************************************#
# File Name: varAssignment.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 23时42分48秒
# Description: 裸体变量
#************************************************************************#

echo

# 变量什么时候是"裸体"的, 比如前边少了$的时候?
# 当它被赋值的时候, 而不是被引用的时候.
# 赋值
a=879
echo "The value of\"a\" is $a."

# 使用'let'赋值
let a=16+5
echo "The value of\"a\" is noe $a."

echo

# 在'for'循环中(一种伪赋值):
echo -n "Value of \"a\" in the loop are: "
for a in 7 8 9 11
do
    echo -n "$a "
done

echo
echo

# 使用'read'命令进行赋值(这也是一种赋值的类型):
echo -n "ENter \"a\" "
read a
echo "The value of \"a\" is now $a."

echo

exit

