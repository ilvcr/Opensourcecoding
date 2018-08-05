/*************************************************************************
> File Name: srm_puts.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月05日 星期日 15时31分04秒
> Description: 
 ************************************************************************/


#include <linux/string.h>
#include <asm/console.h>

long srm_puts(const char* str, long len){

    long remaining, written;

    if(!callback_init_done){

        return len;
    }

    for(remaining = len; remaining > 0; remaining -= written){

        written = callback_puts(0, str, remaining);
        written &= 0xffffffff;
        str += written;
    }

    return len;
}





