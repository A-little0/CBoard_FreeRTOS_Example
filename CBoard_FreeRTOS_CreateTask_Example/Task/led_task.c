#include "led_task.h"


/*创建rtos任务 led任务句柄*/
TaskHandle_t led_taskHandle;


/*创建rtos任务 led任务函数*/
void vLED_Task(void *argument)
{
    //初始化led相关硬件
    aRGB_led_init();
	uint32_t argb = 0xFFFFFFFF;
    for(;;)
    {
        aRGB_led_show(argb);
		argb--;
		vTaskDelay(50);
    }
}
