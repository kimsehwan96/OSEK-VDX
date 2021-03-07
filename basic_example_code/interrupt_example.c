DeclareIsr(isr1);

ISR(isr1)
{
    Uart_string(SCI_0, "\n[ISR Occured]\n");
    k = 0;
    i++;
    PITTF.Bits.PTF2 = 1;
    _CLI;
}

