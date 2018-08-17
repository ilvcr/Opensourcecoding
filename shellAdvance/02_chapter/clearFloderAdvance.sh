#!/bin/bash
#*************************************************************************#
# File Name: clearFloderAdvance.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时07分54秒
# Description: Cleaned up, 版本3
#************************************************************************#

#WRNING: NEW CHAPTER
#USE ROOT RUN

LOG_DIR=/var/log
ROOT_UID=0         #$UID为0时, 用户才具有root用户权限
LINES=50           #默认保存行数
E_XCO=66           #不能修改目录
E_NOTROOT=67       #非root用户将以error退出

if [ "$UID" -ne "$ROOT_UID" ]
then
    echo "Must be root to run this script."
    exit $E_NOTROOT
fi

if [ -n "$1"]
#测试是否有命令行参数(非空)
then
    lines=$1
else
    lines=$LINES #默认, 如果不在命令行中指定
fi

cd $LOG_DIR

if [ `pwd` != "$LOG_DIR" ]
then
    echo "Can't change to $LOG_DIR."
    exit $E_XCO
fi      #在处理log file前, 再确认一遍当前目录是否zhengque

#更有效的做法
#cd /var/log || {
#   echo "Cannot change to necessary directory." >&2
#   exit $E_XCO;
#}

tail -$lines messages > mesg.temp #保存log.file消息的最后部分
mv mesg.temp messages             #变为新的log目录


#cat /dev/null > messages

cat /dev/null > wtmp   #'" > wtmp'和'>wtmp'具有相同的作用
echo "Logs cleaned up."

exit 0
#退出之前返回0
#返回0表示成功


