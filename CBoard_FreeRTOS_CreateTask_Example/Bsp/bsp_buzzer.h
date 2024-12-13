#ifndef __BSP_BUZZER_H
#define __BSP_BUZZER_H

#include "main.h"
#include "tim.h"

#define BUZZER_MIN_PSC 0
#define BUZZER_MAX_PSC 1000
#define BUZZER_MIN_PWM 0
#define BUZZER_MAX_PWM 2000

void buzzer_init(void);
void buzzer_on(uint16_t psc, uint16_t pwm);
void buzzer_off(void);
#endif