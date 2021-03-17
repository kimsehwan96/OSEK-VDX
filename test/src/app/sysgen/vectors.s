/* Interrupt vectors table */

	.sect .text
	.globl _start

;; Default interrupt handler.
	.sect .text
def:
	rti


;;
;; Interrupt vectors are in a specific section that is
;; mapped at 0xff88. For the example program, the reset handler
;; points to the generic crt0 entry point.
;;
	.sect .vectors
	.globl vectors
vectors:
	.word def ;FF10	Spurious interrupt
	.word def ;FF12	System Call Interrupt (SYS)
	.word def ;FF14	MPU Access Error
	.word def ;FF16	XGATE software error interrupt
	.word def ;FF18	Reserved
	.word def ;FF1A	Reserved
	.word def ;FF1C	Reserved
	.word def ;FF1E	Reserved
	.word def ;FF20	Reserved
	.word def ;FF22	Reserved
	.word def ;FF24	Reserved
	.word def ;FF26	Reserved
	.word def ;FF28	Reserved
	.word def ;FF2A	Reserved
	.word def ;FF2C	Reserved
	.word def ;FF2E	Reserved
	.word def ;FF30	Reserved
	.word def ;FF32	Reserved
	.word def ;FF34	Reserved
	.word def ;FF36	Reserved
	.word def	;FF38	Reserved
	.word def  ;FF3A	Reserved
	.word def  ;FF3C ATD Compare Interrupt
	.word def  ;FF3E Reserved
	.word def  ;FF40 Reserved
	.word def  ;FF42 Reserved
	.word def  ;FF44 Reserved
	.word def  ;FF46 Reserved
	.word def  ;FF48 Reserved
	.word def  ;FF4A Reserved
	.word def  ;FF4C Reserved
	.word def  ;FF4E Reserved
	.word def  ;FF50 Reserved
	.word def  ;FF52 Reserved
	.word def  ;FF54 Reserved
	.word def  ;FF56 Input Trigger Interrupt
	.word PIT_Interrupt_7	;FF58	Periodic interrupt timer channel 7
	.word PIT_Interrupt_6	;FF5A	Periodic interrupt timer channel 6
	.word PIT_Interrupt_5	;FF5C	Periodic interrupt timer channel 5
	.word PIT_Interrupt_4	;FF5E	Periodic interrupt timer channel 4
	.word def	;FF60	Reserved
	.word def  ;FF62	Reserved
	.word def  ;FF64	XGATE software trigger 7
	.word def  ;FF66	XGATE software trigger 6
	.word def  ;FF68	XGATE software trigger 5
	.word def  ;FF6A	XGATE software trigger 4
	.word def  ;FF6C	XGATE software trigger 3
	.word def  ;FF6E	XGATE software trigger 2
	.word def  ;FF70	XGATE software trigger 1
	.word def  ;FF72	XGATE software trigger 0
	.word PIT_Interrupt_3  ;FF74	Periodic interrupt timer channel 3
	.word PIT_Interrupt_2	;FF76	Periodic interrupt timer channel 2
	.word PIT_Interrupt_1	;FF78	Periodic interrupt timer channel 1
	.word PIT_Interrupt_0	;FF7A	Periodic interrupt timer channel 0
	.word def  ;FF7C   Reserved
	.word def	;FF7E	Autonomous periodical interrupt (API)
	.word def	;FF80	Low-voltage interrupt (LVI)
	.word def  ;FF82   Reserved
	.word def  ;FF84   Reserved
	.word def  ;FF86   Reserved
	.word def  ;FF88   Reserved
	.word def  ;FF8A   Reserved
	.word def  ;FF8C   PMF Fault 3
	.word def  ;FF8E   PMF Fault 2
	.word def  ;FF90   PMF Fault 1	
	.word def  ;FF92   PMF Fault 0
	.word def  ;FF94   PMF Generator C Reload
	.word def  ;FF96   PMF Generator B Reload
	.word def  ;FF98   PMF Generator A Reload
	.word FR_Interrupt  ;FF9A   FlexRay Protocol Interrupt
	.word FR_Interrupt  ;FF9C   FlexRay CHI Interrupt
	.word FR_Interrupt  ;FF9E   FlexRay Wakeup Interrupt
	.word FR_Interrupt  ;FFA0   FlexRay Receive FIFO channel B Not Empty Interrupt
	.word FR_Interrupt  ;FFA2   FlexRay Receive FIFO channel A Not Empty Interrupt
	.word FR_Interrupt  ;FFA4   FlexRay Receive Message Buffer Interrupt
	.word FR_Interrupt  ;FFA6   FlexRay Transmit Message Buffer Interrupt
	.word def  ;FFA8   Reserved
	.word def  ;FFAA   Reserved
	.word def  ;FFAC   Reserved
	.word def  ;FFAE   Reserved
	.word def  ;FFB0   CAN transmit
	.word CAN_Rx_Interrupt  ;FFB2   CAN receive
	.word def  ;FFB4   CAN errors
	.word def  ;FFB6   CAN wake-up
	.word def	;FFB8	FLASH
	.word def	;FFBA	FLASH Fault Detect
	.word def  ;FFBC   Reserved
	.word SPI_Interrupt_1	;FFBE	SPI1
	.word def  ;FFC0   Reserved
	.word def  ;FFC2   CGM IPLL change of lock
	.word def	;FFC4	CRG self-clock mode
	.word def	;FFC6	CRG PLL lock
	.word def	;FFC8	Pulse accumulator B overflow
	.word def	;FFCA	Modulus down counter underflow
	.word def  ;FFCC   Reserved
	.word def  ;FFCE   Reserved
	.word ADC_Interrupt  ;FFD0   ATD
	.word def  ;FFD2   Reserved
	.word SCI_Interrupt_1	;FFD4	SCI1
	.word UART_Interrupt_0	;FFD6	SCI0
	.word SPI_Interrupt_0	;FFD8	SPI0
	.word def	;FFDA	Pulse accumulator input edge
	.word def	;FFDC	Pulse accumulator A overflow
	.word def	;FFDE	Enhanced capture timer overflow
	.word def	;FFE0	Enhanced capture timer channel 7
	.word def	;FFE2	Enhanced capture timer channel 6
	.word def	;FFE4	Enhanced capture timer channel 5
	.word def	;FFE6	Enhanced capture timer channel 4
	.word def	;FFE8	Enhanced capture timer channel 3
	.word def	;FFEA	Enhanced capture timer channel 2
	.word def		;FFEC	Enhanced capture timer channel 1
	.word def		;FFEE	Enhanced capture timer channel 0
	.word RTI_Interrupt		;FFF0	Real time interrupt
	.word def		;FFF2	/IRQ
	.word def		;FFF4	/XIRQ
	.word def		;FFF6	SWI
	.word def		;FFF8	Unimplemented instruction trap
	.word def		;FFFA	COP watchdog reset
	.word def		;FFFC	Clock monitor reset
	.word _start ;FFFE	System reset or illegal access reset
