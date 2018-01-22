// testocx2015.cpp : Ctestocx2015App 和 DLL 注册的实现。

#include "stdafx.h"
#include "testocx2015.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


Ctestocx2015App theApp;

const GUID CDECL _tlid = { 0xEEE32163, 0x5EC6, 0x465E, { 0x97, 0xB6, 0x4, 0x8A, 0xF4, 0x1F, 0x8B, 0x34 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// Ctestocx2015App::InitInstance - DLL 初始化

BOOL Ctestocx2015App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// Ctestocx2015App::ExitInstance - DLL 终止

int Ctestocx2015App::ExitInstance()
{
	// TODO:  在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
