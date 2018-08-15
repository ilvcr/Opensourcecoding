#!/bin/bash

#*************************************************************************#
# File Name: automate_expect.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: Wed 15 Aug 2018 03:22:22 PM DST
# Description: 
#************************************************************************#

spawn ./interactive.sh
expect "Enter number: "
send "l\n"
expect "Enter name: "
send "hello\n"
expect eof



