#!/bin/bash
#*************************************************************************#
# File Name: shift.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月18日 星期六 00时34分30秒
# Description: 使用shift命令
#************************************************************************#

# 使用'shift'来逐步存取所有的位置参数.
# 给脚本命个名, 比如shft,
#+ 然后给脚本传递一些位置参数, 比如:
#           ./shft a b c def 23 skidoo

until [ -z "$1" ]    # 直到所有的位置参数都被存取完...
do
    echo -n "$1 "
    shift
done

echo         # 额外的换行

exit 0

