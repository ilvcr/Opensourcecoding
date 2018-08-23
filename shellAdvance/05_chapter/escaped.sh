#!/bin/bash
#*************************************************************************#
# File Name: escaped.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月23日 星期四 23时58分34秒
# Description: 转义符
#************************************************************************#

echo; echo

echo "\v\v\v\v"      # 逐字打印\v\v\v\v

# 使用-e选项的'echo'命令来打印转义符
echo "================="
echo "VERTICAL TABS"
echo -e "\v\v\v\v"  # 打印四个垂直制表符
echo "================="

echo "QUOTATION MARK"
echo -e "\042"      # 打印"(引号
echo "================="

echo; echo "NEWLINE AND BEEP"
echo $'\n'      # new line
echo $'\a'      # warning(bee sing)


echo "================="
echo "QUOTATION MARKS"

echo $'\t \042 \t'  # 被水平制表符括起来的引号(")

echo $'\t \x22 \t'  #  16进制


echo "================="
echo

# 分配ASCII字符到变量中
# ----------
quote=$'\042'
echo "$quote Thia ai a quoted string, $quote and this lies outside quote."

echo

triple_underline=$'\137\137\137'  # 137为八进制的' '
echo "$triple_underline UNDERLINE $triple_underline"

echo

ABC=$'\101\102\103\010'       # 八进制  101->A, 102->B, 103->C
echo $ABC

echo;echo

escape=$'\033'        # 033为八进制的esc
echo "\"escape\" echoes as $escape"

echo; echo

exit 0


