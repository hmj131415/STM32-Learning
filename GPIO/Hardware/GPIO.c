#include "stm32f10x.h"                  // Device header
#include "Delay.h"

void gpio_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	GPIO_InitTypeDef  GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_All;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStruct);
}

void LED_control(uint16_t ms)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	Delay_ms(ms);
	GPIO_SetBits(GPIOA,GPIO_Pin_0);
	Delay_ms(ms);
}

void gpio_writelow8(uint16_t data)
{
	uint16_t temp = GPIO_ReadOutputData(GPIOA);
	temp = (temp&0xFF00)|data;
	GPIO_Write(GPIOA,temp);
	
}

void waterfall_LED(uint16_t ms)
{
	uint16_t num = 0b00000001;
	for(uint8_t i;i<8;i++)
		{
			gpio_writelow8(~(num<<i));
			Delay_ms(ms);
		}
}

void buzzer_control(uint16_t ring_ms,uint16_t quiet_ms)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_0);
	Delay_ms(ring_ms);
	GPIO_SetBits(GPIOA,GPIO_Pin_0);
	Delay_ms(quiet_ms);
}
