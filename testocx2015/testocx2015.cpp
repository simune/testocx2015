// testocx2015.cpp : Ctestocx2015App �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "testocx2015.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


Ctestocx2015App theApp;

const GUID CDECL _tlid = { 0xEEE32163, 0x5EC6, 0x465E, { 0x97, 0xB6, 0x4, 0x8A, 0xF4, 0x1F, 0x8B, 0x34 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// Ctestocx2015App::InitInstance - DLL ��ʼ��

BOOL Ctestocx2015App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// Ctestocx2015App::ExitInstance - DLL ��ֹ

int Ctestocx2015App::ExitInstance()
{
	// TODO:  �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
