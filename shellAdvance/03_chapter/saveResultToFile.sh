#!/bin/bash
#*************************************************************************#
# File Name: saveResultToFile.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时41分35秒
# Description: 将一个代码块的结果保存到文件中
#************************************************************************#

#此脚本的目的是为了描述列表和确定是否可以安装一个rpm包
#在一个文件中保存输出

#此脚本使用一个代码块来展示

SUCCESS=0
E_NOARGS=65

if [ -z "$1" ]
then
    echo "Usage: `basename $0` rpm-file"
    exit $E_NOARGS
fi

{
    echo
    echo "Archive Description:"
    rpm -qpi $1        #查询说明
    echo
    echo "Archive Listing:"
    rpm -qpi $1        #查询列表
    echo
    rpm -i --test $1   #查询rpm包是否可以被安装
    if [ "$?" -eq $SUCCESS ]
    then
        echo "$1 can be installed."
    else
        echo "$1 cannot be installed."
    fi
    echo
} > "$1.test"          #把代码块中的所有输出都重定向到文件中

echo "Result of rpm test in file $1.test"

#查看rpm的man页来查看rpm选项

exit 0



