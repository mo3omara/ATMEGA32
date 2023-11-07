/*
 * main.h
 *
 * Created: 9/10/2023 12:05:35 AM
 *  Author: Omar Wessam
 */ 


#ifndef MAIN_H_
#define MAIN_H_

#undef F_CPU
#define F_CPU 16000000



//#include <avr/io.h>
#include <util/delay.h>
#include "Standard_Types.h"

#include "DIO_interface.h"
#include "INT_interface.h"
#include "GLOB_INT_interface.h"
#include "UART_interface.h"
#include "TIMER0_interface.h"
#include "Ultrasonic_interface.h"










#endif /* MAIN_H_ */