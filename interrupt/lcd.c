#include "lcd.h"


// EN, RS, RW 신호 정의  
#define LCD_EN_HIGH      (EN=1)
#define LCD_EN_LOW       (EN=0)

#define LCD_RS_HIGH      (RS=1)
#define LCD_RS_LOW       (RS=0)

#define LCD_RW_HIGH      (RW=1)
#define LCD_RW_LOW       (RW=0) 
                        
#if (CON_LCD != 0)

void LCD_Enable_Pulse(void)
{
    LCD_EN_HIGH;
    us_delay_about(100);
    LCD_EN_LOW;        
}

void LCD_Command_Pulse(void)
{
    LCD_RS_LOW;  
    LCD_RW_LOW;  
}

void LCD_Write_Pulse(void)
{
    LCD_RS_HIGH;  
    LCD_RW_LOW;
}

void LCD_Data_Write(unsigned char data)
{
  PORT_DB5_0= (data & 0x3F);
  PORT_DB6 =  ((data & 0x40)>>6);
  PORT_DB7 =  ((data & 0x80)>>7);
}

void LCD_Wrire_Char(unsigned char buf)
{
    LCD_Write_Pulse();
    LCD_Data_Write(buf);
    LCD_Enable_Pulse();        
}

void LCD_Move_To(unsigned char x, unsigned char y)
{
    LCD_Command_Pulse();
    if(y==0) 
        LCD_Data_Write(x+0x80);
    else if(y==1) 
        LCD_Data_Write(x+0xC0); 
    LCD_Enable_Pulse(); 
}

void LCD_Wrire_Array(unsigned char x, unsigned char y,unsigned char *str)
{    
    LCD_Move_To(x,y);     
    while(*str) LCD_Wrire_Char(*str++);      
}
#endif