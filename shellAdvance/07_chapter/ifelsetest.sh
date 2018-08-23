#!/bin/bash
#*************************************************************************#
# File Name: ifelsetest.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月24日 星期五 00时51分44秒
# Description: 
#************************************************************************#

echo

if test -z "$1"
then
    echo "No command-line arguments."
else
    echo "First command-line arguments is $1."
fi

echo

if /usr/bin/test -z "$1"
then
    echo "No command-line arguments."
else
    echo "First command-line arguments is $1."
fi

echo

if [ -z "$1" ]
then
    echo "No command-line arguments."
else
    echo "First command-line arguments is $1."
fi

echo

if /usr/bin/[ -z "$1" ]
then
    echo "No command-line arguments."
else
    echo "First command-line arguments is $1."
fi

echo

exit 0

