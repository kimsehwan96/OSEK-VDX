#include "gpio.h"
#include "lcd.h"


void LCD_Port_Init(void)
{
  DDR_RW=1; 
  DDR_EN=1;
  DDR_RS=1;

  DDR_DB5_0=0x3F;   
  DDR_DB6  =1;
  DDR_DB7  =1;
}

void LCD_Init(void) 
{
    LCD_Port_Init();
    
    //Function set
    LCD_Data_Write(0x38);
    LCD_Command_Pulse();
    LCD_Enable_Pulse();
    us_delay_about(40);
       
    //Display ON/OFF
    LCD_Data_Write(0x0C);
    LCD_Command_Pulse();
    LCD_Enable_Pulse();
    us_delay_about(40);
      
    //Display CLEAR    
    LCD_Data_Write(0x01);
    LCD_Command_Pulse();
    LCD_Enable_Pulse();
    us_delay_about(2000);
    
    //Entry Mode Set 
    LCD_Data_Write(0x06);
    LCD_Command_Pulse();
    LCD_Enable_Pulse();
    us_delay_about(100);  
}


