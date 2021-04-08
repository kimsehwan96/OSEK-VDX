/***********************************************************************
    Main program for Automobile Application.
*************************************************************************/

#include "Qplus_Auto.h"


main(void){

	Core_InitPll();
	Uart_Init(SCI_0);
	Pit_Init();

	Uart_String(SCI_0,"\nHello World! \n");
	StartOS(OSDEFAULTAPPMODE);
}
