#include "stm32f10x.h"                  // Device header
#include "Delay.h"

void key_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IPD;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_0;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStruct);
}

uint8_t get_key(void)
{
	uint8_t key_num=0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)==1)
	{
		Delay_ms(20);
		if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)==1)
		{
			while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)==SET);
			Delay_ms(20);
			key_num=1;
		}
	}
	return key_num;
}