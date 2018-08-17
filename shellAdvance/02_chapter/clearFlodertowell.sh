#!/bin/bash
#*************************************************************************#
# File Name: clearFlodertowell.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时04分19秒
# Description: #Cleanup, 版本2
#************************************************************************#

# 使用root身份运行
# 在此处插入代码, 来打印错误的消息, 并在不是root身份时退出

LOG_DIR=/var/log

cd $LOG_DIR

cat /dev/null > messages
cat /dev/null > wtmp

echo "Logs cleaned up."

exit  # 正确退出脚本的方法



