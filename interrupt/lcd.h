
#include <hidef.h> 
#include <mc9s12xf512.h>     

#define EXT_CON1 1
#define EXT_CON2 2


// LCD모듈 빙행 결정 
#define CON_LCD EXT_CON1 // 확장 컨넥터1 선택
//#define CON_LCD EXT_CON2   // 확장 컨넥터2 선택

// LCD모듈 포트 방향핀 정의  
#if (CON_LCD == EXT_CON2)
  #define DDR_RW     DDR1AD_DDR1AD0
  #define DDR_EN     DDR1AD_DDR1AD1
  #define DDR_RS     DDR1AD_DDR1AD2
  #define DDR_DB5_0  DDRA
  #define DDR_DB6    DDRA_DDRA6  
  #define DDR_DB7    DDRA_DDRA7
  #define RW         PT1AD_PT1AD0
  #define EN         PT1AD_PT1AD1
  #define RS         PT1AD_PT1AD2 
  #define PORT_DB5_0   PORTA
  #define PORT_DB6     PORTA_PA6
  #define PORT_DB7     PORTA_PA7
#elif (CON_LCD == EXT_CON1)
  #define DDR_RW     DDR0AD_DDR0AD8
  #define DDR_EN     DDR0AD_DDR0AD9
  #define DDR_RS     DDR0AD_DDR0AD10
  #define DDR_DB5_0  DDRD
  #define DDR_DB6    DDRM_DDRM2  
  #define DDR_DB7    DDRM_DDRM3
  #define RW         PT0AD_PT0AD8
  #define EN         PT0AD_PT0AD9
  #define RS         PT0AD_PT0AD10
  #define PORT_DB5_0   PORTD
  #define PORT_DB6     PTM_PTM2
  #define PORT_DB7     PTM_PTM3  
#endif                                                     

void LCD_Enable_Pulse(void);
void LCD_Command_Pulse(void);
void LCD_Write_Pulse(void);
void LCD_Data_Write(unsigned char data);
void LCD_Wrire_Char(unsigned char buf);
void LCD_Move_To(unsigned char x, unsigned char y);
void LCD_Wrire_Array(unsigned char x, unsigned char y,unsigned char *str);
