#include "buzzer_task.h"

/*����������*/
TaskHandle_t buzzer_taskHandle;


/*����������*/
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