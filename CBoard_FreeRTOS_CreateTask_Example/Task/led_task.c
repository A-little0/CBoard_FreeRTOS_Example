#include "led_task.h"


/*����rtos���� led������*/
TaskHandle_t led_taskHandle;


/*����rtos���� led������*/
void vLED_Task(void *argument)
{
    //��ʼ��led���Ӳ��
    aRGB_led_init();
	uint32_t argb = 0xFFFFFFFF;
    for(;;)
    {
        aRGB_led_show(argb);
		argb--;
		vTaskDelay(50);
    }
}
