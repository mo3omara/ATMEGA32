/*
 * TIMER0_reg.h
 *
 * Created: 9/8/2023 6:20:06 PM
 *  Author: Omar Wessam
 */ 


#ifndef TIMER0_REG_H_
#define TIMER0_REG_H_

#define TCNT0  (*(volatile uint8*)0x52)
#define TCCR0  (*(volatile uint8*)0x53)
#define TIMSK  (*(volatile uint8*)0x59)
#define OCR0   (*(volatile uint8*)0x5C)



#endif /* TIMER0_REG_H_ */