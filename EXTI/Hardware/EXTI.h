#ifndef __DELAY_H
#define __DELAY_H

#include "stm32f10x.h"                  // Device header

extern volatile uint16_t num;
extern volatile int16_t codenum;

void exti_init(void);
void Encoder_init(void);

#endif
