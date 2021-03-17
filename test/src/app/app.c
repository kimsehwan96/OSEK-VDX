#include "Qplus_Auto.h"

#define END TerminateTask()

DeclareTask(task1);
DeclareTask(task2);
DeclareTask(task3);


TASK(task1)
{
  Uart_String(SCI_0, "\n Task1 Start \n");
  ActivateTask(task2);
  ActivateTask(task3);

  Schedule();

  Uart_String(SCI_0, "\n Task1 End \n");

  END;
}

TASK(task2)
{
  Uart_String(SCI_0, "\n Task2 Start \n");
  Schedule();
  Uart_String(SCI_0, "\n Task2 End \n");
  END;
  }

TASK(task3)
{
  Uart_String(SCI_0, "\n Task3 Start \n");
  Schedule();
  Uart_String(SCI_0, "\n Task3 End \n");
  END;
  }

void ShutdownHook( StatusType error)
{
  Uart_String(SCI_0, "++Shutdown Hook start++\n");
}

void StartupHook(void)
{
  Uart_String(SCI_0, "++Startup Hook start++\n");
}

