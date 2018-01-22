// testocx2015Ctrl.cpp : Ctestocx2015Ctrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "testocx2015.h"
#include "testocx2015Ctrl.h"
#include "testocx2015PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(Ctestocx2015Ctrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(Ctestocx2015Ctrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_EDIT, OnEdit)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(Ctestocx2015Ctrl, COleControl)
	DISP_FUNCTION_ID(Ctestocx2015Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(Ctestocx2015Ctrl, "AddFun", dispidAddFun, AddFun, VT_I4, VTS_I4 VTS_I4)
	DISP_FUNCTION_ID(Ctestocx2015Ctrl, "SetParameter", dispidSetParameter, SetParameter, VT_I4, VTS_BSTR)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(Ctestocx2015Ctrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ������Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(Ctestocx2015Ctrl, 1)
	PROPPAGEID(Ctestocx2015PropPage::guid)
END_PROPPAGEIDS(Ctestocx2015Ctrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(Ctestocx2015Ctrl, "TESTOCX2015.testocx2015Ctrl.1",
	0xd1280fba, 0x3804, 0x4d7c, 0xb9, 0x1f, 0x99, 0xa6, 0x3c, 0x23, 0x5, 0x97)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(Ctestocx2015Ctrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_Dtestocx2015 = { 0x6D6025A9, 0x2A7D, 0x4DD2, { 0x9C, 0xB4, 0xB6, 0xF2, 0x78, 0xF, 0x83, 0x57 } };
const IID IID_Dtestocx2015Events = { 0x6185002C, 0xAE47, 0x4BCB, { 0xA2, 0xD8, 0x5E, 0xB4, 0x8, 0x69, 0xFD, 0xA7 } };

// �ؼ�������Ϣ

static const DWORD _dwtestocx2015OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(Ctestocx2015Ctrl, IDS_TESTOCX2015, _dwtestocx2015OleMisc)

// Ctestocx2015Ctrl::Ctestocx2015CtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� Ctestocx2015Ctrl ��ϵͳע�����

BOOL Ctestocx2015Ctrl::Ctestocx2015CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegInsertable | afxRegApartmentThreading ��Ϊ afxRegInsertable��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_TESTOCX2015,
			IDB_TESTOCX2015,
			afxRegInsertable | afxRegApartmentThreading,
			_dwtestocx2015OleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// Ctestocx2015Ctrl::Ctestocx2015Ctrl - ���캯��

Ctestocx2015Ctrl::Ctestocx2015Ctrl()
{
	InitializeIIDs(&IID_Dtestocx2015, &IID_Dtestocx2015Events);
	// TODO:  �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// Ctestocx2015Ctrl::~Ctestocx2015Ctrl - ��������

Ctestocx2015Ctrl::~Ctestocx2015Ctrl()
{
	// TODO:  �ڴ�����ؼ���ʵ�����ݡ�
}

// Ctestocx2015Ctrl::OnDraw - ��ͼ����

void Ctestocx2015Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	/*pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);*/
	m_dlg.MoveWindow(rcBounds, TRUE);
}

// Ctestocx2015Ctrl::DoPropExchange - �־���֧��

void Ctestocx2015Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// Ctestocx2015Ctrl::OnResetState - ���ؼ�����ΪĬ��״̬

void Ctestocx2015Ctrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO:  �ڴ��������������ؼ�״̬��
}


// Ctestocx2015Ctrl::AboutBox - ���û���ʾ�����ڡ���

void Ctestocx2015Ctrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_TESTOCX2015);
	dlgAbout.DoModal();
}


// Ctestocx2015Ctrl ��Ϣ�������


LONG Ctestocx2015Ctrl::AddFun(LONG param1, LONG param2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: �ڴ���ӵ��ȴ���������

	return 0;
}


LONG Ctestocx2015Ctrl::SetParameter(LPCTSTR param)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_dlg.SetParameter(param, false);
	return 0;
}


int Ctestocx2015Ctrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_dlg.Create(IDD_MAIN_DIALOG, this);
	return 0;
}
