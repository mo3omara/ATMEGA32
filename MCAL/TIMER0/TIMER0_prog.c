/*
 * TIMER0_prog.c
 *
 * Created: 9/8/2023 6:19:35 PM
 *  Author: Omar Wessam
 */ 
#include "Standard_Types.h"
#include "BIT_MATH.h"

#include "TIMER0_interface.h"
#include "TIMER0_private.h"
#include "TIMER0_reg.h"

void TIMER0_Intialize()
{
	/*set as ctc*/
	SET_BIT(TCCR0,TCCR0_WGM01);
	CLR_BIT(TCCR0,TCCR0_WGM00);
	/*normal pin operation*/
	CLR_BIT(TCCR0,TCCR0_COM00);
	CLR_BIT(TCCR0,TCCR0_COM01);
	/*prescalar 64*/
	CLR_BIT(TCCR0,TCCR0_CS02);
	SET_BIT(TCCR0,TCCR0_CS01);
	SET_BIT(TCCR0,TCCR0_CS00);
	/*timer interrupt enable*/
	SET_BIT(TIMSK,TIMSK_OCIE0);
    /*OVF every 1ms*/
	OCR0 = 250;
}

