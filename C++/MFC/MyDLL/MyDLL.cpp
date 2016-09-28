#include<windows.h>

int MyBeep(void);
int MyDelay(long wait);

BOOL WINAPI DllEntryPoint(HINSTANCE hDLL,DWORD dwReason,LPVOID Reserved)
{
	switch(dwReason)
	{
	case DLL_PROCESS_ATTACH:
		{
			break;
		}
	case DLL_PROCESS_DETACH:
		{
			break;
		}
	}
	return true;
}

int MyBeep(void)
{
	MessageBeep((WORD)-1);
	return 1;
}

int MyDelay(long wait)
{
	Sleep(wait);
	return 1;
}