#ifndef __GPIO_H
#define __GPIO_H

#include "stm32f10x.h"                  // Device header
#include "Delay.h"

void gpio_init(void);
void LED_control(uint16_t ms);
void gpio_writelow8(uint16_t data);
void waterfall_LED(uint16_t ms);
void buzzer_control(uint16_t ring_ms,uint16_t quiet_ms);

#endif
