#include "buzzer_task.h"

/*创建任务句柄*/
TaskHandle_t buzzer_taskHandle;


/*创建任务函数*/
void vBuzzer_Task(void *argument)
{
    for(;;)
    {
        buzzer_on(3, 1000);
        vTaskDelay(1000);
        buzzer_off();
        vTaskDelay(1000);
    }
}