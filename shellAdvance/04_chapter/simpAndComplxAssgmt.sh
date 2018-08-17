#!/bin/bash
#*************************************************************************#
# File Name: simpAndComplxAssgmt.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 23时48分50秒
# Description: 简单和复杂, 两种类型的变量赋值
#************************************************************************#

a=23        #简单赋值
echo $a
b=$a
echo $b

# 现在来点小变化(命令替换).
a=`echo Hello!`     # 把'echo'命令的结果传给变量'a'
echo $a

# 注意, 如果在一个#+的命令替换结构中包含一个(!)的话,
#+ 那么在命令行下将无法工作.
#+ 因为这触发了Bash的"历史机制."
# 但是, 在脚本中使用的话, 历史功能是被禁用的, 所以就能够正常的运行.

a=`ls -l`  # 把`ls -l`的结果赋值给'a'
echo $a    # 如果没有引号的话将会删除ls结果中多余的tab和换行符

echo
echo "$a"  # 加上引号的话会保留ls结果中的空白符.

exit 0


