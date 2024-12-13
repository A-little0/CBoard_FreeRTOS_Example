#include "bsp_buzzer.h"



void buzzer_init(void)
{
    HAL_TIM_Base_Start(&htim4);
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_3);
}

void buzzer_on(uint16_t psc, uint16_t pwm)
{
	psc = (psc > BUZZER_MAX_PSC ? BUZZER_MAX_PSC : psc);
	psc = (psc < BUZZER_MIN_PSC ? BUZZER_MIN_PSC : psc);
	pwm = (pwm > BUZZER_MAX_PWM ? BUZZER_MAX_PWM : pwm);
	pwm = (pwm < BUZZER_MIN_PWM ? BUZZER_MIN_PWM : pwm);	
    __HAL_TIM_SET_PRESCALER(&htim4, psc);
	__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_3, pwm);
}

void buzzer_off(void)
{
	buzzer_on(0, 0);
}