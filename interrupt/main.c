// PIT INTERRUPT Example
// Three LED Right Circular Shift

#include <hidef.h>      
#include <mc9s12xf512.h>     
#pragma LINK_INFO DERIVATIVE "mc9s12xf512"
#include "lcd.h" 

#define US_DELAY 40 

unsigned char temp_array[8];
unsigned int count = 0;
unsigned int hour =0;
unsigned int min =0;
unsigned int sec =0;
void us_delay_about(unsigned int us) 
{
    unsigned int i,j;
    for(i=0;i<us;i++) for(j=0;j<US_DELAY;j++);  
}


word led_count=0; 
byte led_data=0b00000100;

void Clock_Init(void)
{    
    // Bus Clock = 2 * OSCCLK * (SYNR+1) / ((REFDV+1)(2*POSTDIV)) / 2    
    //     40MHz =  2 * 4MHz  * (9+1) / (1) /2                         
    PLLCTL_PLLON = 0;        // Disable the PLL 
    SYNR_SYNDIV = 0x09;      // Set PLL synthesizer register to 9 
    REFDV_REFDIV = 0x00;     // Set PLL divider register to 0  => decimal 1
    //POSTDIV = 0x01;     // POSTDIV divider register to 1 => divided by 2
    
    
    // Fvco = 2*OSCCLK*(SYNR+1)/(REFDV+1) = 8MHz* 10/1 = 80MHz   
    //                                    -> VCOFRQ = 01b                
    SYNR_VCOFRQ1 = 0;
    SYNR_VCOFRQ0 = 1;
        
    // Fref = OSCCLK/(REFDV+1) = 4MHz/1 = 4MHz -> REFRQ= 01b        
    REFDV_REFFRQ1 = 0;
    REFDV_REFFRQ0 = 1;    
    PLLCTL_PLLON = 1;   // PLL enabled 
    
    // Wait until the PLL is within the desired frequency 
    while(!CRGFLG_LOCK);  
    
    // Select system clock source from PLL             
    CLKSEL_PLLSEL = 1;          
}
/* IPLL Initialization for FlexRay Communication Controller
void IPLL_Init(void)
{
    // Fvco = 2*OSCCLK*(SYNR+1)/(REFDV+1) = 8MHz*(9+1)/1 = 80MHz -> VCOFRQ = 01b 
    CGMSYNR_SYNDIV = 0x09;     
    CGMREFDV_REFDIV = 0x00;    
    CGMSYNR_VCOFRQ = 0x01;
    
    // Fref = OSCCLK/(REFDIV+1) = 4MHz/1 = 4MHz -> REFFRQ = 01b   
    CGMREFDV_REFFRQ = 0x01;
    
    CGMCTL_DIV2 = 0;  // DIV2=0 -> IPLL = Fvco  

    CGMCTL_PLLON=1;   // IPLL enabled 

    // Wait until the PLL is within the desired frequency 
    while(!CGMFLG_LOCK);       
}

*/

void S12X_SetInterruptPriority(byte index_num, byte Priority) {
  INT_CFADDR = (index_num << 1) & 0xf0;
  switch (index_num & 0x07) {
    case 0:
      INT_CFDATA0_PRIOLVL = Priority;
      break;
    case 1:
      INT_CFDATA1_PRIOLVL = Priority;
      break;
    case 2:
      INT_CFDATA2_PRIOLVL = Priority;
      break;
    case 3:
      INT_CFDATA3_PRIOLVL = Priority;
      break;
    case 4:
      INT_CFDATA4_PRIOLVL = Priority;
      break;
    case 5:
      INT_CFDATA5_PRIOLVL = Priority;
      break;
    case 6:
      INT_CFDATA6_PRIOLVL = Priority;
      break;
    case 7:
      INT_CFDATA7_PRIOLVL = Priority;
  } 
}
     
void main(void) 
{
  LCD_Init();
  Clock_Init(); /* call Clock Initialization */
  //IPLL_Init(); /* call IPLL Initialization for Flexray */
  /*Interrupt Module Setup*/
  // IVBR = 0xFF;		/* interrupt vector base address at $ff00. It can be omitted because default value is 0xFF  */
 
 /* Interrupt Priority Setup */
  
  S12X_SetInterruptPriority(0x3D, 0x07); //PIT Channel 0(vector address: 0xFF7A, vector index number: 0x3D), interrupt priority 7, handled by CPU
 
  
  ECLKCTL_NECLK=1; // Disable external clock for LED#3 connected by PE4
  
  
  // PIT Interrupt configuration
  // time out period = (PITMTLD +1) * (PITLD+1) / bus clock
  // for exampe, for 40Mhz bus clock, the maximum time-out period equals --> 256*65536 * 25ns = 419.43ms
  // time out interrupt period = 200 * 200 * 25ns = 1000000ns = 1ms
  PITCE = 0x01;               //PIT Channel Enable Register                      
  PITINTE = 0x01;            //PIT Interrupt Enable Register  
  PITMTLD0 = 199;             //PIT Micro timer load register 0                  
  PITLD0 = 199;               //PIT Load Register 0                   
  PITCFLMT = 0xA0; 
  
  /*DDR for Port E (LED)*/
  DDRE_DDRE2 = 1; //LED #3
  DDRE_DDRE3 = 1; //LED #2
  DDRE_DDRE4 = 1; //LED #1  
  
  /*DDR for PORT J, B (Switch)*/
  DDRJ_DDRJ7= 0; //Switch 1
  DDRB_DDRB0= 0; //Switch 2
  DDRB_DDRB1= 0; //Switch 3 
    
  
  PORTE_PE2=1; //LED #1 OFF
  PORTE_PE3=1; //LED #2 OFF
  PORTE_PE4=1; //LED #3 OFF 
    
  EnableInterrupts;
  
  for(;;) 
  {

  } 
}

// PIT0_ISR
// PIT0 Interrupt Service Routine 

#pragma CODE_SEG __NEAR_SEG NON_BANKED
// Timer Interrupt
interrupt void PIT0_ISR(void)
{
  PITTF = 0x01;  
    
  led_count++;
  if(led_count>=1000) 
  { 

    if(led_data==0b00000000) led_data=0b00000100; 
    sec++;
    if(sec>60){
      min++;
      sec=0;
      if(min>60){
        hour++;
        min=0;
        if(hour>24){
          hour=0;
        }
      }
    }
    PORTE = ~(0x1c & (led_data<<2));
    temp_array[0]= '0'+(hour/10); 
    temp_array[1]= '0'+(hour%10);
    temp_array[2]= ':';
    temp_array[3]= '0'+(min/10);  
    temp_array[4]= '0'+(min%10);
    temp_array[5]= ':';
    temp_array[6]= '0'+(sec/10);
    temp_array[7]= '0'+(sec%10);            
    LCD_Wrire_Array(0, 0, temp_array);
  
    led_data >>=1; // LED#3 -> LED#2 -> LED#1 -> LED#3 -> LED#2 -> LED#1 ...
    
    led_count=0; 
  }
}

#pragma CODE_SEG DEFAULT














