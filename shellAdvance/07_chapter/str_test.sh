#!/bin/bash
#*************************************************************************#
# File Name: str_test.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月24日 星期五 01时07分25秒
# Description: 检查null字符串和未引用的字符串
#************************************************************************#

# 如果字符串并没有被初始化, 那么它里面的值未定义.
# 这种状态被称为"null" (注意这与零值不同).

if [ -n $string1 ]   # string1 没有被声明和初始化
then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

echo

if [ -n $string1 ]
then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

echo

if [ $string1 ]
then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

echo


string1=initialized

if [ $string1]
then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi


string1="a = b"

if [ $string1 ]
then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

exit 0


