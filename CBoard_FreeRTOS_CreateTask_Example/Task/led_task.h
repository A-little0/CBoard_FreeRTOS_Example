#ifndef __LED_TASK_H
#define __LED_TASK_H

#include "FreeRTOS.h"
#include "task.h"
#include "bsp_led.h"

/*����rtos���� led������*/
extern TaskHandle_t led_taskHandle;


/*����rtos���� led������*/
void vLED_Task(void *argument);

#endif

