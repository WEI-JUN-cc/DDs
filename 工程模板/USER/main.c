#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "delay.h"
int main(void)
{
	
delay_init();
led_Init();

while(1)
{

GPIO_ResetBits(GPIOA,GPIO_Pin_8);//输出低电平
GPIO_SetBits(GPIOD,GPIO_Pin_2);//输出高电平
delay_ms(500);
GPIO_SetBits(GPIOA,GPIO_Pin_8);//输出高电平
GPIO_ResetBits(GPIOD,GPIO_Pin_2);//输出低电平
delay_ms(500);
	
	
}



}


