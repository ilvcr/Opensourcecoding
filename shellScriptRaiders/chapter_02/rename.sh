#!/bin/bash

#*************************************************************************#
# File Name: rename.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Wed 15 Aug 2018 03:09:43 PM DST
# Description: 重命名.jpg和.png文件
#************************************************************************#


count=1;
for img in `find . -iname '*.png' -o -iname '*.jpg' -type f -maxdepth 1`
do
    new=image-$count.${img##*.}

    echo "Renameing $img to $new"
    mv "$img" "$new"
    let count++

done



