#include <windows.h>
#include <objbase.h>
#include <stdio.h>
#include "guid.h"
#include "CFunction.h"

//extern ULONG g_cObj;
//extern ULONG g_cLock;

IClassFactory* g_pClassFactory;
DWORD g_dwRegister = 0;
HWND g_hWnd;

LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM) ;
BOOL Init();
void UnInit();

int APIENTRY WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    LPSTR lpszCmdLine, int nCmdShow)
{
    HWND     hwnd ;
    MSG      msg ;
    WNDCLASS wndclass ;
	Init();
   
	if (!hPrevInstance) 
	{
		wndclass.style         = CS_HREDRAW | CS_VREDRAW ;
		wndclass.lpfnWndProc   = WndProc ;
		wndclass.cbClsExtra    = 0 ;
		wndclass.cbWndExtra    = 0 ;
		wndclass.hInstance     = hInstance ;
		wndclass.hIcon         = LoadIcon (NULL, IDI_APPLICATION) ;
		wndclass.hCursor       = LoadCursor (NULL, IDC_ARROW) ;
		wndclass.hbrBackground = (HBRUSH) GetStockObject (WHITE_BRUSH) ;
		wndclass.lpszMenuName  = NULL;
		wndclass.lpszClassName = "Class CFunction" ;
		RegisterClass (&wndclass) ;
	}

	hwnd = CreateWindow ("Class CFunction", "Exe COM CFunction",
   						 WS_OVERLAPPEDWINDOW,
						 CW_USEDEFAULT, 0,
						 CW_USEDEFAULT, 0,
						 NULL, NULL, hInstance, NULL) ;
	g_hWnd = hwnd;
	
	ShowWindow (hwnd, nCmdShow) ;
	UpdateWindow (hwnd) ;

	while (GetMessage (&msg, NULL, 0, 0))
	{
		TranslateMessage (&msg) ;
		DispatchMessage (&msg) ;
	}
	return msg.wParam ;
}

LRESULT CALLBACK WndProc (HWND hwnd, UINT message, 
						  WPARAM wParam, LPARAM lParam)
{
    static char str[80] = "It is an Exe Server";
    HDC hDC;                               
    PAINTSTRUCT ps;
    switch (message)
    {
    case WM_PAINT:
        hDC = BeginPaint (hwnd, &ps);
        TextOut (hDC, 0, 0, str, lstrlen (str));
        EndPaint (hwnd, &ps);
		return 0;
    case WM_DESTROY :
        PostQuitMessage (0) ;
		return 0;
    default:
        break;
    }
    return DefWindowProc (hwnd, message, wParam, lParam) ;
}

BOOL Init()
{
	HRESULT hr;
	hr = CoInitialize(NULL);
	if (FAILED(hr))
	{
		MessageBox(NULL, "CoInitialize failed", "CFunction", MB_OK);
		return FALSE;
	}

    g_pClassFactory = new CFunctionClassFactory;

    if (g_pClassFactory == NULL)
						return FALSE;

    g_pClassFactory->AddRef();

    hr = CoRegisterClassObject(CLSID_Function, 
    		g_pClassFactory,
			CLSCTX_LOCAL_SERVER, 
			REGCLS_MULTIPLEUSE, 
			&g_dwRegister);

    if (FAILED(hr))
        return FALSE;

	return TRUE;
}

void UnInit()
{
   if (g_dwRegister != 0)
        CoRevokeClassObject(g_dwRegister);

   if (g_pClassFactory != NULL){
	   g_pClassFactory->Release();
	   g_pClassFactory->LockServer(false);
   }

	CoUninitialize();
}
