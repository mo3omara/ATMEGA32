/*
 * TIMER0_private.h
 *
 * Created: 9/8/2023 6:20:18 PM
 *  Author: Omar Wessam
 */ 


#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#define TCCR0_WGM01 3
#define TCCR0_WGM00 6

#define TCCR0_COM01 4
#define TCCR0_COM00 5

#define TCCR0_CS00 0
#define TCCR0_CS01 1
#define TCCR0_CS02 2

#define TIMSK_OCIE0 1
#define TIMSK_TOIE0 0 //timer interrupt enable




#endif /* TIMER0_PRIVATE_H_ */