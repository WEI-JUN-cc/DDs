#include "LED.H"
#include "stm32f10x.h"

void led_Init(void)
{
GPIO_InitTypeDef GPIO_InitStruct;//定义一个结构体
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD,ENABLE);//GPIOA/GPIOD进行使能
//配置GPIOA_8 推挽输出/速度50MHZ
GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
GPIO_InitStruct.GPIO_Pin=GPIO_Pin_8;
GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
GPIO_Init(GPIOA,&GPIO_InitStruct);
GPIO_SetBits(GPIOA,GPIO_Pin_8);//输出高电平

//配置GPIOD_2 推挽输出/速度50MHZ	
GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
GPIO_InitStruct.GPIO_Pin=GPIO_Pin_2;
GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
GPIO_Init(GPIOD,&GPIO_InitStruct);
GPIO_SetBits(GPIOD,GPIO_Pin_2);//输出高电平


}


