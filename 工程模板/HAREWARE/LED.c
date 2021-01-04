#include "LED.H"
#include "stm32f10x.h"

void led_Init(void)
{
GPIO_InitTypeDef GPIO_InitStruct;//����һ���ṹ��
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD,ENABLE);//GPIOA/GPIOD����ʹ��
//����GPIOA_8 �������/�ٶ�50MHZ
GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
GPIO_InitStruct.GPIO_Pin=GPIO_Pin_8;
GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
GPIO_Init(GPIOA,&GPIO_InitStruct);
GPIO_SetBits(GPIOA,GPIO_Pin_8);//����ߵ�ƽ

//����GPIOD_2 �������/�ٶ�50MHZ	
GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
GPIO_InitStruct.GPIO_Pin=GPIO_Pin_2;
GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
GPIO_Init(GPIOD,&GPIO_InitStruct);
GPIO_SetBits(GPIOD,GPIO_Pin_2);//����ߵ�ƽ


}


