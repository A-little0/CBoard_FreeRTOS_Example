#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "main.h"
#include "tim.h"


void aRGB_led_init(void);
void aRGB_led_show(uint32_t aRGB);
#endif
