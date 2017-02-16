#include"sys.h"
#include"delay.h"
#include"led.h"


int main(void)
{
	Stm32_Clock_Init(336,8,2,7);
	delay_init(168);
	LED_Init();
	while(1)
	{
		LED0 = 0;
		LED1 = 1;
		delay_ms(500);
		LED0 = 1;
		LED1 = 0;
		delay_ms(500);		
	}
}
