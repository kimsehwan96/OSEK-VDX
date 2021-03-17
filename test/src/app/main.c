/***********************************************************************
    Main program for Automobile Application.
*************************************************************************/

#include "Qplus_Auto.h"

main(void){
  Core_InitPll();
  Uart_Init(SCI_0);

  StartOS(OSDEFAULTAPPMODE);

}
