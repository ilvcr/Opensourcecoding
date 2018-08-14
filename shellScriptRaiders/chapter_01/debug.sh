#!/bin/bash

#*************************************************************************#
# File Name: debug.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Tue 14 Aug 2018 03:41:51 PM DST
# Description: 
#************************************************************************#

for i in {1..6};
do
    set -x
    echo $i
    set +x
done
echo "Script executed"


