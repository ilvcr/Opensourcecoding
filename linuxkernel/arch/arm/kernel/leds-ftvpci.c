/*************************************************************************
> File Name: leds-ftvpci.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月20日 星期一 20时51分38秒
> Description: 
 ************************************************************************/


#include <linux/module.h>

#include <asm/hardware.h>
#include <asm/leds.h>
#include <asm/system.h>
#include <asm/io.h>

static void ftvpci_leds_event(led_event_t ledevt){

    static int led_state = 0;

    switch(ledevt){

    case led_timer:
        led_state ^= 1;
        raw_writeb(0x1a | led_state, INTCONT_BASE);
        break;

    default:
        break;
    }
}


void (*leds_event)(led_event_t) = ftvpci_leds_event;

EXPORT_SYMBOL(leds_event);


