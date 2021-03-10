#include <hidef.h>      
#include <mc9s12xf512.h>     
#pragma LINK_INFO DERIVATIVE "mc9s12xf512"
#include "lcd.h" 

#define US_DELAY 40 

unsigned char temp_array[8];

void us_delay_about(unsigned int us) 
{
    unsigned int i,j;
    for(i=0;i<us;i++) for(j=0;j<US_DELAY;j++);  
}
