#ifndef __TIMER_H
#define __TIMER_H
#include "stm32f10x.h"                  // Device header

extern volatile uint32_t Time,Num;
extern volatile uint8_t OLED_updata_flag;
extern volatile int16_t speed;

void tim2_init(void);
void Second_set(uint32_t seconds);
void exteral_clock_init(void);
void pwm_LED_init(void);
void set_pwm_parameter(uint16_t pulse,uint16_t freq);
void PWM_SteerEngine_init(void);
void set_SteerEngine_angel(uint16_t angle);
void timer3_count(void);
void tim3_IC_init(void);
uint16_t get_freq(void);
uint16_t get_duty(void);
void IC_init(void);
void Tim_encoder_init(void);
int16_t get_encoder(void);

#endif
