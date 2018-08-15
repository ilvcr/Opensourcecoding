#!/bin/bash

#*************************************************************************#
# File Name: generate_checksums.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Wed 15 Aug 2018 03:24:28 PM DST
# Description: 
#************************************************************************#

PIDARRAY=()
for file in File1.iso File2.iso
do
    md5sum $file & PIDARRAY+=("$!")
done
wait ${IDARRAY[@]}


