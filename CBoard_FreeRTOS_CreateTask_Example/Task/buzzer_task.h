#ifndef __BUZZER_TASK_H
#define __BUZZER_TASK_H

#include "FreeRTOS.h"
#include "task.h"
#include "bsp_buzzer.h"

/*����������*/
extern TaskHandle_t buzzer_taskHandle;

/*����������*/
void vBuzzer_Task(void* argument);
#endif
