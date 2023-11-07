/*
 * INT_prog.c
 *
 * Created: 9/8/2023 12:06:09 PM
 *  Author: Omar Wessam
 */ 
#include "Standard_Types.h"
#include "BIT_MATH.h"

#include "INT_config.h"
#include "INT_interface.h"
#include "INT_private.h"
#include "INT_reg.h"

void INT_Intialize()
{
	
	/*falling edge of int1*/
	CLR_BIT(MCUCSR,MCUCR_ISC10);
	SET_BIT(MCUCSR,MCUCR_ISC11);
	
	/*falling edge of int0*/
	CLR_BIT(MCUCSR,MCUCR_ISC00);
	SET_BIT(MCUCSR,MCUCR_ISC01);
	
	/*int1 , int0 enable*/
	SET_BIT(GICR,GICR_INT0);
	SET_BIT(GICR,GICR_INT1);
	
	
}