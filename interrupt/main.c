#include "main.h"

void main(void) 
{
  LCD_Init();
  
  for(;;) 
  {
    temp_array[0]= '1'; 
    temp_array[1]= 's';
    temp_array[2]= 't';
    temp_array[3]= ' ';  
    temp_array[4]= 'T';
    temp_array[5]= 'E';
    temp_array[6]= 'S';
    temp_array[7]= 'T';            
    LCD_Wrire_Array(0, 0, temp_array);
  
   
    temp_array[0]= '2'; 
    temp_array[1]= 'n';
    temp_array[2]= 'd';
    temp_array[3]= ' ';  
    temp_array[4]= 'T';
    temp_array[5]= 'E';
    temp_array[6]= 'S';
    temp_array[7]= 'T';            
    LCD_Wrire_Array(0, 1, temp_array); 
    
   
  }
}

