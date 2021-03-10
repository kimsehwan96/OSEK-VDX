/** S12X derivative information */ 
#include <mc9s12xf512.h> 
#include "Isr_Vectors.h"   

/* Dummy interrupt service routine */
#pragma CODE_SEG __NEAR_SEG NON_BANKED

void interrupt Dummy_D_Isr()
{
    for (;;)
        ;
}

/*******************************************************************************/

/** Interrupt vectors table */
void (* near const vectors[])(void) @ 0xFF10 =  {
    
  Dummy_D_Isr,        /* 0x08  0xFF10 ivVsi           */
  Dummy_D_Isr,        /* 0x09  0xFF12 ivReserved119   */
  Dummy_D_Isr,        /* 0x0A  0xFF14 ivReserved118   */
  Dummy_D_Isr,        /* 0x0B  0xFF16 ivReserved117   */
  Dummy_D_Isr,        /* 0x0C  0xFF18 ivReserved116   */
  Dummy_D_Isr,        /* 0x0D  0xFF1A ivReserved115   */
  Dummy_D_Isr,        /* 0x0E  0xFF1C ivReserved114   */
  Dummy_D_Isr,        /* 0x0F  0xFF1E ivReserved113   */
  Dummy_D_Isr,        /* 0x10  0xFF20 ivReserved112   */
  Dummy_D_Isr,        /* 0x11  0xFF22 ivReserved111   */
  Dummy_D_Isr,        /* 0x12  0xFF24 ivReserved110   */
  Dummy_D_Isr,        /* 0x13  0xFF26 ivReserved109   */
  Dummy_D_Isr,        /* 0x14  0xFF28 ivReserved108   */
  Dummy_D_Isr,        /* 0x15  0xFF2A ivReserved107   */
  Dummy_D_Isr,        /* 0x16  0xFF2C ivReserved106   */
  Dummy_D_Isr,        /* 0x17  0xFF2E ivReserved105   */
  Dummy_D_Isr,        /* 0x18  0xFF30 ivReserved104   */
  Dummy_D_Isr,        /* 0x19  0xFF32 ivReserved103   */
  Dummy_D_Isr,        /* 0x1A  0xFF34 ivReserved102   */
  Dummy_D_Isr,        /* 0x1B  0xFF36 ivReserved101   */
  Dummy_D_Isr,        /* 0x1C  0xFF38 ivReserved100   */
  Dummy_D_Isr,        /* 0x1D  0xFF3A ivReserved99    */
  Dummy_D_Isr,        /* 0x1E  0xFF3C ivReserved98    */
  Dummy_D_Isr,        /* 0x1F  0xFF3E ivReserved97    */
  Dummy_D_Isr,        /* 0x20  0xFF40 ivReserved96    */
  Dummy_D_Isr,        /* 0x21  0xFF42 ivReserved95    */
  Dummy_D_Isr,        /* 0x22  0xFF44 ivReserved94    */
  Dummy_D_Isr,        /* 0x23  0xFF46 ivReserved93    */
  Dummy_D_Isr,        /* 0x24  0xFF48 ivReserved92    */
  Dummy_D_Isr,        /* 0x25  0xFF4A ivReserved91    */
  Dummy_D_Isr,        /* 0x26  0xFF4C ivReserved90    */
  Dummy_D_Isr,        /* 0x27  0xFF4E ivReserved89    */
  Dummy_D_Isr,        /* 0x28  0xFF50 ivReserved88    */
  Dummy_D_Isr,        /* 0x29  0xFF52 ivReserved87    */
  Dummy_D_Isr,        /* 0x2A  0xFF54 ivReserved86    */
  Dummy_D_Isr,        /* 0x2B  0xFF56 ivReserved85    */
  Dummy_D_Isr,        /* 0x2C  0xFF58 ivReserved84    */
  Dummy_D_Isr,        /* 0x2D  0xFF5A ivReserved83    */
  Dummy_D_Isr,        /* 0x2E  0xFF5C ivReserved82    */
  Dummy_D_Isr,        /* 0x2F  0xFF5E ivReserved81    */
  Dummy_D_Isr,        /* 0x30  0xFF60 ivVxsramav      */
  Dummy_D_Isr,        /* 0x31  0xFF62 ivVxsei         */
  Dummy_D_Isr,        /* 0x32  0xFF64 ivVxst7         */
  Dummy_D_Isr,        /* 0x33  0xFF66 ivVxst6         */
  Dummy_D_Isr,        /* 0x34  0xFF68 ivVxst5         */
  Dummy_D_Isr,        /* 0x35  0xFF6A ivVxst4         */
  Dummy_D_Isr,        /* 0x36  0xFF6C ivVxst3         */
  Dummy_D_Isr,        /* 0x37  0xFF6E ivVxst2         */
  Dummy_D_Isr,        /* 0x38  0xFF70 ivVxst1         */
  Dummy_D_Isr,        /* 0x39  0xFF72 ivVxst0         */
  Dummy_D_Isr,        /* 0x3A  0xFF74 ivVpit3         */
  Dummy_D_Isr,        /* 0x3B  0xFF76 ivVpit2         */
  Dummy_D_Isr,        /* 0x3C  0xFF78 ivVpit1         */
  PIT0_ISR,           /* 0x3D  0xFF7A ivVpit0         */
  Dummy_D_Isr,        /* 0x3E  0xFF7C ivVReserved65   */
  Dummy_D_Isr,        /* 0x3F  0xFF7E ivVapi          */
  Dummy_D_Isr,        /* 0x40  0xFF80 ivVlvi          */
  Dummy_D_Isr,        /* 0x41  0xFF82 ivVReserved62   */
  Dummy_D_Isr,        /* 0x42  0xFF84 ivVReserved61   */
  Dummy_D_Isr,        /* 0x43  0xFF86 ivVReserved60   */
  Dummy_D_Isr,        /* 0x44  0xFF88 ivVReserved59   */
  Dummy_D_Isr,        /* 0x45  0xFF8A ivVReserved58   */
  Dummy_D_Isr,        /* 0x46  0xFF8C ivVpmffault3    */
  Dummy_D_Isr,        /* 0x47  0xFF8E ivVpmffault2    */
  Dummy_D_Isr,        /* 0x48  0xFF90 ivVpmffault1    */
  Dummy_D_Isr,        /* 0x49  0xFF92 ivVpmffault0    */
  Dummy_D_Isr,        /* 0x4A  0xFF94 ivVpmfgcr       */
  Dummy_D_Isr,        /* 0x4B  0xFF96 ivVpmfgbr       */
  Dummy_D_Isr,        /* 0x4C  0xFF98 ivVpmfgar       */
  Dummy_D_Isr,        /* 0x4D  0xFF9A ivVfrprot       */
  Dummy_D_Isr,        /* 0x4E  0xFF9C ivVfrchi        */
  Dummy_D_Isr,        /* 0x4F  0xFF9E ivVfrwakeup     */
  Dummy_D_Isr,        /* 0x50  0xFFA0 ivVfrrxfifob    */
  Dummy_D_Isr,        /* 0x51  0xFFA2 ivVfrrxfifoa    */
  Dummy_D_Isr,        /* 0x52  0xFFA4 ivVfrrxmessbuff */
  Dummy_D_Isr,        /* 0x53  0xFFA6 ivVfrtxmessbuff */
  Dummy_D_Isr,        /* 0x54  0xFFA8 ivVReserved43   */
  Dummy_D_Isr,        /* 0x55  0xFFAA ivVReserved42   */
  Dummy_D_Isr,        /* 0x56  0xFFAC ivVReserved41   */
  Dummy_D_Isr,        /* 0x57  0xFFAE ivVReserved40   */
  Dummy_D_Isr,        /* 0x58  0xFFB0 ivVcan0tx       */
  Dummy_D_Isr,        /* 0x59  0xFFB2 ivVcan0rx       */
  Dummy_D_Isr,        /* 0x5A  0xFFB4 ivVcan0err      */
  Dummy_D_Isr,        /* 0x5B  0xFFB6 ivVcan0wkup     */
  Dummy_D_Isr,        /* 0x5C  0xFFB8 ivVflash        */
  Dummy_D_Isr,        /* 0x5D  0xFFBA ivVeeprom       */
  Dummy_D_Isr,        /* 0x5E  0xFFBC ivVReserved33   */
  Dummy_D_Isr,        /* 0x5F  0xFFBE ivVspi1         */
  Dummy_D_Isr,        /* 0x60  0xFFC0 ivVReserved31   */
  Dummy_D_Isr,        /* 0x61  0xFFC2 ivVReserved30   */
  Dummy_D_Isr,        /* 0x62  0xFFC4 ivVcrgscm       */
  Dummy_D_Isr,        /* 0x63  0xFFC6 ivVcrgplllck    */
  Dummy_D_Isr,        /* 0x64  0xFFC8 ivVtimpabovf    */
  Dummy_D_Isr,        /* 0x65  0xFFCA ivVtimmdcu      */
  Dummy_D_Isr,        /* 0x66  0xFFCC ivVReserved25   */
  Dummy_D_Isr,        /* 0x67  0xFFCE ivVReserved24   */
  Dummy_D_Isr,        /* 0x68  0xFFD0 ivVatd          */
  Dummy_D_Isr,        /* 0x69  0xFFD2 ivVReserved22   */
  Dummy_D_Isr,        /* 0x6A  0xFFD4 ivVsci1         */
  Dummy_D_Isr,        /* 0x6B  0xFFD6 ivVsci0         */
  Dummy_D_Isr,        /* 0x6C  0xFFD8 ivVspi0         */
  Dummy_D_Isr,        /* 0x6D  0xFFDA ivVtimpaie      */
  Dummy_D_Isr,        /* 0x6E  0xFFDC ivVtimpaaovf    */
  Dummy_D_Isr,        /* 0x6F  0xFFDE ivVtimovf       */
  Dummy_D_Isr,        /* 0x70  0xFFE0 ivVtimch7       */
  Dummy_D_Isr,        /* 0x71  0xFFE2 ivVtimch6       */
  Dummy_D_Isr,        /* 0x72  0xFFE4 ivVtimch5       */
  Dummy_D_Isr,        /* 0x73  0xFFE6 ivVtimch4       */
  Dummy_D_Isr,        /* 0x74  0xFFE8 ivVtimch3       */
  Dummy_D_Isr,        /* 0x75  0xFFEA ivVtimch2       */
  Dummy_D_Isr,        /* 0x76  0xFFEC ivVtimch1       */
  Dummy_D_Isr,        /* 0x77  0xFFEE ivVtimch0       */
  Dummy_D_Isr,        /* 0x78  0xFFF0 ivVrti          */
  Dummy_D_Isr,        /* 0x79  0xFFF2 ivVirq          */
  Dummy_D_Isr,        /* 0x7A  0xFFF4 ivVxirq         */
  Dummy_D_Isr,        /* 0x7B  0xFFF6 ivVswi          */
  Dummy_D_Isr,        /* 0x7C  0xFFF8 ivVtrap         */
  _Startup,           /* 0xFFFA  ivVcop               */
  _Startup            /* 0xFFFC  ivVclkmon            */
  /*_Startup               0xFFFE  ivVreset           */
};

/*******************************************************************************/
