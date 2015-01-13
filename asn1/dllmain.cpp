
#include "windows.h"

HINSTANCE PDllInstance;

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD ul_reason_for_call, LPVOID)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		PDllInstance = hinstDLL;
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		PDllInstance = NULL;
		break;
	}
	return TRUE;
}

