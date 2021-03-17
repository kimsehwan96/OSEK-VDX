/*  Author      : jukim
 *  ver         : ver0.92
 * supported banked memory
 */

MEMORY
{
	 page0 (rwx)  : ORIGIN = 0x0000, LENGTH = 256   
	 text (rx)    : ORIGIN = 0xc000, LENGTH = 16K -0x100
	 data         : ORIGIN = 0x2000, LENGTH = 8K
	 eeprom       : ORIGIN = 0x0c00, LENGTH = 1K
	 vectors (rx) : ORIGIN = 0xff10, LENGTH = 0xf0

	 bank0 (rx)	  : ORIGIN = 0x390000, LENGTH = 16K 
	 bank1 (rx)	  : ORIGIN = 0x394000, LENGTH = 16K 
	 bank2 (rx)	  : ORIGIN = 0x398000, LENGTH = 16K 
	 bank3 (rx)	  : ORIGIN = 0x39c000, LENGTH = 16K 
	 bank4 (rx)	  : ORIGIN = 0x3a0000, LENGTH = 16K
	 bank5 (rx)	  : ORIGIN = 0x3a4000, LENGTH = 16K
	 bank6 (rx)	  : ORIGIN = 0x3a8000, LENGTH = 16K
	 bank7 (rx)	  : ORIGIN = 0x3ac000, LENGTH = 16K
	 bank8 (rx)	  : ORIGIN = 0x3b0000, LENGTH = 16K
	 bank9 (rx)	  : ORIGIN = 0x3b4000, LENGTH = 16K
	 bank10 (rx)	  : ORIGIN = 0x3b8000, LENGTH = 16K
	 bank11 (rx)	  : ORIGIN = 0x3bc000, LENGTH = 16K
 	 bank12 (rx)	  : ORIGIN = 0x3c0000, LENGTH = 16K
	 bank13 (rx)	  : ORIGIN = 0x3c4000, LENGTH = 16K
	 bank14 (rx)	  : ORIGIN = 0x3c8000, LENGTH = 16K
	 bank15 (rx)	  : ORIGIN = 0x3cc000, LENGTH = 16K
	 
	 
 
}
 

SECTIONS
{

	 .bank0 : { 
		
	
		 "../src/drivers/adc.o"(.text)
		 "../src/drivers/adc.o"(.text.*)
 	
		 "../src/drivers/can.o"(.text)
		 "../src/drivers/can.o"(.text.*)
 		
		 "../src/drivers/core.o"(.text)
		 "../src/drivers/core.o"(.text.*)
 		
		 "../src/drivers/dio.o"(.text) 
		 "../src/drivers/dio.o"(.text.*)
 	
		
		 . = ALIGN(2);
		 		  
	 }>bank0 
	 .bank1 : { 
		 "../src/drivers/pit.o"(.text) 
		 "../src/drivers/pit.o"(.text.*)
 		
		 "../src/drivers/uart.o"(.text)
		 "../src/drivers/uart.o"(.text.*)
 		
		 "../src/os/alarm.o"(.text)
		 "../src/os/alarm.o"(.text.*)  
 		
		
  	
		 
		 . = ALIGN(2); 
		 		 
	 	
	 }>bank1 
	 .bank2 : {
 
 		
		 "../src/os/kernel.o"(.text) 
		 "../src/os/kernel.o"(.text.*) 
  		
		 "../src/os/resource.o"(.text)
		 "../src/os/resource.o"(.text.*)
  	  	
	
		 
		 . = ALIGN(2);
	 }>bank2 
	 .bank3 : { 
	 	 "../src/drivers/fr_1.o"(.text)
		 "../src/drivers/fr_1.o"(.text.*)     
 		
	 	
		. = ALIGN(2);  
		
		
	 }>bank3 
	 
	 .bank4 : { 
	         "../src/drivers/fr_2.o"(.text) 
      	         "../src/drivers/fr_2.o"(.text.*)          
       	
      	         "../src/drivers/fr_cfg.o"(.text)
      	         "../src/drivers/fr_cfg.o"(.text.*)        
      	 
      	         "../src/drivers/fr_handler.o"(.text) 
      	         "../src/drivers/fr_handler.o"(.text.*)    
      	  
		 "../src/drivers/int.o"(.text)
		 "../src/drivers/int.o"(.text.*)
 		  
		 
		  
		  
		 . = ALIGN(2);
	 }>bank4 
	 .bank5 : { 
	         "../src/drivers/lin.o"(.text) 
		 "../src/drivers/lin.o"(.text.*)
 		
		     
		 "../src/drivers/pwm.o"(.text)
		 "../src/drivers/pwm.o"(.text.*)
 		
		 "../src/drivers/rti.o"(.text) 
		 "../src/drivers/rti.o"(.text.*)
 		
		 "../src/drivers/spi.o"(.text)
		 "../src/drivers/spi.o"(.text.*)
 		 
		 
		  
		 . = ALIGN(2);
	 }>bank5 
	 .bank6 : { 
		 "../src/os/are_taskutil.o"(.text) 
		 "../src/os/are_taskutil.o"(.text.*) 
  	
		 "../src/os/common_types.o"(.text) 
		 "../src/os/common_types.o"(.text.*)
  
		 "../src/os/error.o"(.text)
		 "../src/os/error.o"(.text.*)
  	

	 
		  
		 . = ALIGN(2);
	 }>bank6 
	 .bank7 : { 
	         "../src/os/event.o"(.text)
		 "../src/os/event.o"(.text.*)
  		
		 "../src/os/hook.o"(.text)
		 "../src/os/hook.o"(.text.*)
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank7 

	 .bank8 : { 

    	         "../src/drivers/fr_3.o"(.text)
      		 "../src/drivers/fr_3.o"(.text.*) 
		 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank8

	 .bank9 : { 

  
		 "../src/os/initial.o"(.text)
		 "../src/os/initial.o"(.text.*)
 		
		 "../src/os/isr.o"(.text)
		 "../src/os/isr.o"(.text.*) 
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank9


	 .bank10 : { 

		 "../src/os/task.o"(.text)
		 "../src/os/task.o"(.text.*)
  	
		 "../src/os/arch/s12x/s12x.o"(.text) 
		 "../src/os/arch/s12x/s12x.o"(.text.*)
  		
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank10 


	 .bank11 : { 

                 "../src/os/scheduler.o"(.text)
		 "../src/os/scheduler.o"(.text.*) 
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank11 


	 .bank12 : { 
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank12 


	 .bank13 : { 
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank13 


	 .bank14 : { 
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank14 


	 .bank15 : { 
	 
		  
		 . = ALIGN(2);
		 
		 
	 }>bank15 

	 
	  
	  
}

SECTIONS
{
	 .non_bank : { 
		 *(.non_bank) 
		 . = ALIGN(2);
	 }>text 
	 
}

PROVIDE( _stack = 0x3fff );
vectors_addr = 0xff10 ; 
