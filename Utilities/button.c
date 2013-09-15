/*
 * button.c
 *
 */
#include "button.h"
void ButtonInit(void)
{
  //EXTI structure to init EXT
  EXTI_InitTypeDef EXTI_InitStructure;
  //NVIC structure to set up NVIC controller
  NVIC_InitTypeDef NVIC_InitStructure;
  //Connect EXTI Line to Button Pin
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource0);
  //Configure Button EXTI line
  EXTI_InitStructure.EXTI_Line = EXTI_Line0;
  //select interrupt mode
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
  //generate interrupt on rising edge
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;
  //enable EXTI line
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  //send values to registers
  EXTI_Init(&EXTI_InitStructure);
  //configure NVIC
  //select NVIC channel to configure
  NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;
  //set priority to lowest
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x0F;
  //set subpriority to lowest
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x0F;
  //enable IRQ channel
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  //update NVIC registers
  NVIC_Init(&NVIC_InitStructure);
}
void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}

