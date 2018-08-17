#!/bin/bash
#*************************************************************************#
# File Name: saveANdCopyChangeLastday.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月17日 星期五 23时04分05秒
# Description: 备份最后一天所有修改的文件
#************************************************************************#

# 在一个"tarball"中(经过tar和zip处理过的文件)
#+备份最后24小时当前目录下d所有修改的文件

BACKUPFILE=backup-$(date +%m-%d-%Y)
# 在备份文件中嵌入时间

archive=$(1:-$BACKUPFILE}

# 如果在命令行中没有指定备份文件的文件名
#+那么将默认使用"backup-MM-DD-YYYY.tar.gz".

tar cvf - `find . -mtime -1 -type f -print` > $archive.tar
gzip $archive.tar
echo "Directory $PWD backed up in archive file \"$archive.tar.gz\"."

exit 0


