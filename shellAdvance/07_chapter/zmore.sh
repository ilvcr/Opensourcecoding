#!/bin/bash
#*************************************************************************#
# File Name: zmore.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月24日 星期五 01时15分40秒
# Description: 使用'more'来查看gzip文件
#************************************************************************#

NOARGS=65
NOTFOUND=66
NOTGZIP=67

if [ $# -eq 0 ]     # 与 if [ -z "$1" ] 效果相同
then
    echo "Usage: 'basename $0` filename" >&2
    # 错误消息输出到stderr
    exit $NOARGS
    # 返回65作为脚本的退出状态的值
fi

filename=$1

if [ ! -f "$filename" ]
then
    echo "Filename not found!" >&2
    exit $NOTFOUND
fi

if [ ${Filename##*.} != "gz" ]
# 在变量中替换使用中括号结构
then
    echo "File $1 is not a gzipped file!"
    exit $NOTGZIP
fi

zcat $1 | more

exit $?


