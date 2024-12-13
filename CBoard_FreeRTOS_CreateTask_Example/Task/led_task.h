#ifndef __LED_TASK_H
#define __LED_TASK_H

#include "FreeRTOS.h"
#include "task.h"
#include "bsp_led.h"

/*创建rtos任务 led任务句柄*/
extern TaskHandle_t led_taskHandle;


/*创建rtos任务 led任务函数*/
void vLED_Task(void *argument);

#endif

