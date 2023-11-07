/*
 * TIMER1_reg.h
 *
 * Created: 9/8/2023 6:23:30 PM
 *  Author: Omar Wessam
 */ 


#ifndef TIMER1_REG_H_
#define TIMER1_REG_H_


#define TCCR1A (*(volatile uin8* )0x4F )
#define TCCR1B (*(volatile uin8* )0x4E )
#define ICR1   (*(volatile uin16*)0x46 )
#define OCR1A  (*(volatile uin16*)0x4A )
#define OCR1B  (*(volatile uin16*)0x48 )


#endif /* TIMER1_REG_H_ */