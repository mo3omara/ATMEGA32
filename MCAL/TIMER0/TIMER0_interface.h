/*
 * TIMER0_interface.h
 *
 * Created: 9/8/2023 6:19:51 PM
 *  Author: Omar Wessam
 */ 


#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_
//working with CTC , prescalar 64 , OCR=250 "compare match" == overflow every 1 ms. 
//timer for buzzer
//no need for configuration now


#include "TIMER0_reg.h"
void TIMER0_Intialize();


#endif /* TIMER0_INTERFACE_H_ */