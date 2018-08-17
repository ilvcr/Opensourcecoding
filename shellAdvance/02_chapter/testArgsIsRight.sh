#!/bin/bash
#*************************************************************************#
# File Name: testArgsIsRight.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 22时22分28秒
# Description: 测试脚本被调用的参数数量是否正确
#************************************************************************#

E_WRONG_ARGS=65
script_parameters="-a -h -m -z"

if [ $# -ne $Number_of_expected_args ]
then
    echo "Usage: `basename $0` $script_parameters"
    #`basename $0`为此脚本的文件名
    exit $E_WRONG_ARGS
fi


