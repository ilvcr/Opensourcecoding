#!/bin/bash

#*************************************************************************#
# File Name: password.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Tue 14 Aug 2018 03:34:27 PM DST
# Description: 
#************************************************************************#

echo -e "Enter password: "
stty -echo
read password
stty echo
echo
echo Password read.


