/*************************************************************************
> File Name: srm_printk.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月05日 星期日 15时25分19秒
> Description: 
 ************************************************************************/


#include<linux/kernel.h>
#include<asm/comsole.h>

long srm_printk(const, char* fmt, ...){

    static char buf[1024];
    va_list args;
    long len, num_lf;
    char* src;
    char* dst;

    va_start(args, fmt);
    len = vsprintf(buf, fmt, args);
    va_end(args);

    /* count number of linefeeds in string: */
    num_lf = 0;
    for(src = buf; *src; ++src){

        if(*src == '\n'){

            ++num_lf;
        }
    }


    if(num_lf){

        /* expand each linefeed into carriage-return/linefeed: */
        for(dst = src + num_lf; src >= buf;){

            if(*src == '\n'){

                *dst-- = '\r';
            }
            *dst-- = *src--;
        }
    }

    srm_puts(buf, num_lf + len);

    return len;
}





