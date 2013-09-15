/*
 * button.h
 *
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include "stm32f10x.h"
#define BUTTON				GPIO_Pin_0
#define BUTTONPINSOURCE 	GPIO_PinSource0
#define BUTTONPORTSOURCE    GPIO_PortSourceGPIOA
#define BUTTONPORT			GPIOA
#define BUTTONPORTCLK		RCC_APB2Periph_GPIOA

void ButtonInit(void);
void Delay(__IO uint32_t nCount);
#endif /* BUTTON_H_ */
