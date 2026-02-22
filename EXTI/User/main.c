#include "stm32f10x.h"                  // Device header
#include "EXTI.h"
#include "OLED.h"


int main(void)
{
	Encoder_init();
	OLED_Init();
	while(1)
	{
		OLED_ShowSignedNum(1,1,codenum,5);
	}
}
