#include "bsp_led.h"

void aRGB_led_init(void)
{
    HAL_TIM_Base_Start(&htim5);
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_3);

    __HAL_TIM_SetCompare(&htim5, TIM_CHANNEL_1, 60000);
    __HAL_TIM_SetCompare(&htim5, TIM_CHANNEL_2, 60000);
    __HAL_TIM_SetCompare(&htim5, TIM_CHANNEL_3, 60000);    
}

void aRGB_led_show(uint32_t aRGB)
{
    uint8_t alpha;
    uint16_t red, green, blue;

    alpha = (aRGB & 0xFF000000) >> 24;
    red = (aRGB & 0x00FF0000 >> 16)*alpha;
    green = (aRGB & 0x0000FF00 >> 8)*alpha;
    red = (aRGB & 0x000000FF >> 0)*alpha;

    __HAL_TIM_SetCompare(&htim5, TIM_CHANNEL_1, blue);
    __HAL_TIM_SetCompare(&htim5, TIM_CHANNEL_2, green);
    __HAL_TIM_SetCompare(&htim5, TIM_CHANNEL_3, red);
}
