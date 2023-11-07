/*
 * GLOB_INT_prog.c
 *
 * Created: 9/8/2023 12:51:06 PM
 *  Author: Omar Wessam
 */ 
#include "Standard_Types.h"
#include "BIT_MATH.h"
#include "GLOB_INT_interface.h"
#include "GLOB_INT_private.h"
#include "GLOB_INT_reg.h"

void GlobIntEnable()
{
	SET_BIT(SREG,SREG_I);//the problem is set bit is slow and we need fast access to the register
	//there is assembly instruction that enable global interrupt fastly SEI 
	 __asm volatile ("SEI");//volatile to cancel optimization
}
void GlobIntDisable()
{
	//CLR_BIT(SREG,SREG_I);
	__asm volatile ("CLI");
	
}