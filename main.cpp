#include "WinApp.h"
#include "Exception.h"


HINSTANCE g_hInstance;
int g_nCmdShow;

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE prevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	g_hInstance = hInstance;
	g_nCmdShow = nCmdShow;


	WinApp theApp(600,600, 1,1);
	theApp.Start();


	return 0;
}