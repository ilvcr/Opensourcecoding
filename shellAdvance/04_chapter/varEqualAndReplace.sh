#!/bin/bash
#*************************************************************************#
# File Name: varEqualAndReplace.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 23时18分16秒
# Description: 变量赋值和替换
#************************************************************************#

a=375
hello=$a

#==============================================
#赋值时等号前后不能有空格
#若有空格, 
#VARIABLE =value
#脚本将尝试运行一个"VARIABLE"的命令, 带着一个"=value"参数

#VARIABLE= value
#脚本将尝试运行一个"value"的命令, 并带着一个被赋值成“”的
#环境变量"VARIABLE"
#==============================================

echo hello      #没有变量引用, 只是个hello字符串

echo $hello
echo ${hello}

echo "$hello"
echo "${hello}"

echo

hello="A B  C   D"
echo $hello
echo "$hello"


exit 0


