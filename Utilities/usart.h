/*
 * usart.h
 */

#ifndef USART_H_
#define USART_H_
#include "STM32f10x.h"
#include "buffer.h"
#define BUFFERED
#ifdef BUFFERED
extern volatile FIFO_TypeDef U1Rx, U1Tx;
#endif
void Usart1Init(void);
void Usart1Put(uint8_t ch);
uint8_t Usart1Get(void);


#endif /* USART_H_ */
