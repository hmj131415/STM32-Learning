#include "stm32f10x.h"                  // Device header
#include "Timer.h"
#include "OLED.h"
#include "Delay.h"
#include "Key.h"

uint16_t angle=0;
uint8_t OLED_flag;

int main(void)
{
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
//	OLED_Init();
//	OLED_ShowString(1,1,"Time:");
//	while(1)
//	{
//		Second_set(1);
//		if(OLED_updata_flag==1)
//		{
//			OLED_ShowNum(1,6,Time,3);
//			OLED_updata_flag=0;
//		}
//		
//		
//	}
	
//	OLED_Init();
//	exteral_clock_init();
//	OLED_ShowString(1,1,"count:");
//	while(1)
//	{
//		OLED_ShowNum(1,7,TIM_GetCounter(TIM2),3);
//	}
//	pwm_LED_init();
//	while(1)
//	{
//		for(uint16_t i=0;i<=100;i++)
//		{
//			set_pwm_parameter(i,10000);
//			Delay_ms(10);
//		}
//		for(uint16_t i=0;i<=100;i++)
//		{
//			set_pwm_parameter(100-i,10000);
//			Delay_ms(10);
//		}
//	}

//	key_init();
//	PWM_SteerEngine_init();
//	OLED_Init();
//	OLED_ShowString(1,1,"Angle:");
//	while(1)
//	{
//		if(get_key()==1)
//		{
//			angle+=30;
//			OLED_flag=1;
//			if(angle>180)
//			{
//				angle=0;
//			}
//		}
//		set_SteerEngine_angel(angle);
//		if(OLED_flag==1)
//		{
//			OLED_ShowNum(1,7,angle,3);
//			OLED_flag=0;
//		}
//	}

//	OLED_Init();
//	pwm_LED_init();
//	set_pwm_parameter(70,4695);
//	tim3_IC_init();
//	OLED_ShowString(1,1,"Freq:");
//	OLED_ShowString(2,1,"Duty:");
//	while(1)
//	{
//		OLED_ShowNum(1,6,get_freq(),5);
//		OLED_ShowNum(2,6,get_duty(),5);
//	}
	tim2_init();
	Tim_encoder_init();
	OLED_Init();
	OLED_ShowString(1,1,"Speed:");
	while(1)
	{
		OLED_ShowSignedNum(1,7,speed,5);
	}
}
