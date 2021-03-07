#include "Qplus_Auto.h"

DeclareTask(task1);
DeclareTask(task2);
DeclareTask(task3);

TASK(task1)
{
    sci_tx_string("\nTask1 Start");
    ActivateTask(task2);
    ActivateTask(task3);

    Schedule();

    sci_tx_string("\nTask1 End\n");
    TerminateTask();
}

TASK(task2)
{
    sci_tx_string("\nTask2 start\n");
    Schedule();
    sci_tx_string("\nTask2 End");
    TerminateTask();
}

