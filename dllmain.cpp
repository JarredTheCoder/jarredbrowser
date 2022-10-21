// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "JarredBrowserHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CJarredBrowserHandlersModule _AtlModule;

class CJarredBrowserHandlersApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CJarredBrowserHandlersApp, CWinApp)
END_MESSAGE_MAP()

CJarredBrowserHandlersApp theApp;

BOOL CJarredBrowserHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
	return CWinApp::InitInstance();
}

int CJarredBrowserHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
