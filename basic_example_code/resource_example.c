#include "Qplus_Auto.h"

int i = 0;
int k = 0;

DeclareTask(task1);

TASK(task1)
{
    k = 1;
    Uart_string(SCI_0, "\n [======Active Task1=======] \n");

    GetResource(resource1);
    ActivateTask(task3);

    while(k)
    {
        Uart_String(SCI_0, ".");
    }

    Uart_string(SCI_0, "\n[ReleaseResource From Task1]\n");
    ReleaseResource(resource1);

    if(i > 5)
        shutdownOS(E_OK);
    Uart_string(SCI_0, "\n[Terminate Task1]\n");

    TerminateTask();
}