#include "Qplus_Auto.h"

int i = 0;
int k = 0;

DeclareTask(task1);
TASK(task1)
{
	k = 1;
	Uart_String(SCI_0, "\n[======Active Task 1 ===== ] \n");
	Uart_String(SCI_0, "\n[Get Resource From Task 1 ] \n");

	GetResource(resource1);
	ActivateTask(task3);

	while(k)
	{
		Uart_String(SCI_0, ".");
	}
	Uart_String(SCI_0, "\n[Release Resource from Task 1 ]\n");
	ReleaseResource(resource1);

	if (i > 5)
		ShutdownOS(E_OK);
	Uart_String(SCI_0, "\n[Terminate Task 1 ]\n");
	TerminateTask();
}

DeclareTask(task2);
TASK(task2)
{
	k = 1;
	Uart_String(SCI_0, "\n[======Active Task 2 ===== ] \n");
	Uart_String(SCI_0, "\n[Get Resource From Task 2 ] \n");

	GetResource(resource1);
	ActivateTask(task3);

	while(k)
	{
		Uart_String(SCI_0, ".");
	}
	Uart_String(SCI_0, "\n[Release Resource from Task 2 ]\n");
	ReleaseResource(resource1);

	if (i > 5)
		ShutdownOS(E_OK);
	Uart_String(SCI_0, '\n[Terminate Task 2 ]\n');
	TerminateTask();
}


DeclareTask(task3);
TASK(task3)
{
	Uart_String(SCI_0, "\n[GetResource from Task 3 ] \n");
	GetResource(resource1);
	Uart_String(SCI_0, "\n[ReleaseResource from Task 3 ] \n");
	ReleaseResource(resource1);

	Uart_String(SCI_0, "\n[Terminate Task 3 ]\n");
}

DeclareIsr(isr1);
ISR(isr1)
{
	Uart_String(SCI_0, "\n[ISR OCCURED]\n");
	k = 0;
	i++;
	PITTF.Bits.PTF2 = 1; // clear interrupt flag
	_CLI;
}
void ShutdownHook( StatusType error )
{
	Uart_String(SCI_0,"++ShutdownHook Start++\n");
}

void StartupHook( void )
{

	Pit_Program(PIT_2, 100); // every 100ms interrupt will be executed
	Pit_Enable(PIT_2);
	Uart_String(SCI_0,"++StartupHook Start++\n");
}

void PreTaskHook( void )
{
	Uart_String(SCI_0,"++PreTaskHook Start++\n");
}

void PostTaskHook( void )
{
	Uart_String(SCI_0,"++PostTaskHook Start++\n");
}
/***********************************************************************
    Task Template for Qplus-Auto.
*************************************************************************/

/***********************************************************************
    ISR Template for Qplus-Auto.
*************************************************************************/

/***********************************************************************
    ALARMCALLBACK Template for Qplus-Auto.
*************************************************************************/

