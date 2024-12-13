#ifndef __BUZZER_TASK_H
#define __BUZZER_TASK_H

#include "FreeRTOS.h"
#include "task.h"
#include "bsp_buzzer.h"

/*创建任务句柄*/
extern TaskHandle_t buzzer_taskHandle;

/*创建任务函数*/
void vBuzzer_Task(void* argument);
#endif
