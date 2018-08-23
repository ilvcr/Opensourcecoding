#!/bin/bash
#*************************************************************************#
# File Name: gcd.sh
# Author: yoghourt->ilvcr 
# Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
# Created Time: 2018年08月24日 星期五 01时23分50秒
# Description: 使用Euclid算法计算最大公约数
#************************************************************************#

# 两个整数的"最大公约数" (gcd),
#+ 就是两个整数所能够同时整除的最大的数.
#Euclid算法采用连续除法.
#在每一次循环中,
#被除数 <--- 除数
#除数 <--- 余数
#直到 余数 = 0.
#在最后一次循环中, gcd = 被除数.
#关于Euclid算法的更精彩的讨论, 可以到
#Jim Loy的站点, http://www.jimloy.com/number/euclids.htm.
# ------------------------------------------------------
# 参数检查

ARGS=2
E_BADARGS=65

if [ $# -ne "$ARGS" ]
then
    echo "Usage: `basename $0` first number second-number"
    exit $E_BADARGS
fi

# ------------------------------------------------------

gcd()
{
    dividend=$1
    divisor=$2

    remainder=1

    until [ "$remainder" -eq 0 ]
    do
        let "remainder = $dividend % $divisor"
        dividend=$divisor
        divisor=$remainder
    done
}


gcd $1 $2

echo; echo "GCD of $1 and $2 = $dividend"; echo

exit 0

