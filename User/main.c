#include "stm32f10x.h"                  // Device header
#include "GPIO.h"

int main(void)
{
	gpio_init();
	while(1)
	{
		buzzer_control(50,1000);
	}
}
