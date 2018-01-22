// testocx2015Ctrl.cpp : Ctestocx2015Ctrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "testocx2015.h"
#include "testocx2015Ctrl.h"
#include "testocx2015PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(Ctestocx2015Ctrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(Ctestocx2015Ctrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_EDIT, OnEdit)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(Ctestocx2015Ctrl, COleControl)
	DISP_FUNCTION_ID(Ctestocx2015Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(Ctestocx2015Ctrl, "AddFun", dispidAddFun, AddFun, VT_I4, VTS_I4 VTS_I4)
	DISP_FUNCTION_ID(Ctestocx2015Ctrl, "SetParameter", dispidSetParameter, SetParameter, VT_I4, VTS_BSTR)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(Ctestocx2015Ctrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 根据需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(Ctestocx2015Ctrl, 1)
	PROPPAGEID(Ctestocx2015PropPage::guid)
END_PROPPAGEIDS(Ctestocx2015Ctrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(Ctestocx2015Ctrl, "TESTOCX2015.testocx2015Ctrl.1",
	0xd1280fba, 0x3804, 0x4d7c, 0xb9, 0x1f, 0x99, 0xa6, 0x3c, 0x23, 0x5, 0x97)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(Ctestocx2015Ctrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_Dtestocx2015 = { 0x6D6025A9, 0x2A7D, 0x4DD2, { 0x9C, 0xB4, 0xB6, 0xF2, 0x78, 0xF, 0x83, 0x57 } };
const IID IID_Dtestocx2015Events = { 0x6185002C, 0xAE47, 0x4BCB, { 0xA2, 0xD8, 0x5E, 0xB4, 0x8, 0x69, 0xFD, 0xA7 } };

// 控件类型信息

static const DWORD _dwtestocx2015OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(Ctestocx2015Ctrl, IDS_TESTOCX2015, _dwtestocx2015OleMisc)

// Ctestocx2015Ctrl::Ctestocx2015CtrlFactory::UpdateRegistry -
// 添加或移除 Ctestocx2015Ctrl 的系统注册表项

BOOL Ctestocx2015Ctrl::Ctestocx2015CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegInsertable | afxRegApartmentThreading 改为 afxRegInsertable。

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


// Ctestocx2015Ctrl::Ctestocx2015Ctrl - 构造函数

Ctestocx2015Ctrl::Ctestocx2015Ctrl()
{
	InitializeIIDs(&IID_Dtestocx2015, &IID_Dtestocx2015Events);
	// TODO:  在此初始化控件的实例数据。
}

// Ctestocx2015Ctrl::~Ctestocx2015Ctrl - 析构函数

Ctestocx2015Ctrl::~Ctestocx2015Ctrl()
{
	// TODO:  在此清理控件的实例数据。
}

// Ctestocx2015Ctrl::OnDraw - 绘图函数

void Ctestocx2015Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  用您自己的绘图代码替换下面的代码。
	/*pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);*/
	m_dlg.MoveWindow(rcBounds, TRUE);
}

// Ctestocx2015Ctrl::DoPropExchange - 持久性支持

void Ctestocx2015Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// Ctestocx2015Ctrl::OnResetState - 将控件重置为默认状态

void Ctestocx2015Ctrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO:  在此重置任意其他控件状态。
}


// Ctestocx2015Ctrl::AboutBox - 向用户显示“关于”框

void Ctestocx2015Ctrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_TESTOCX2015);
	dlgAbout.DoModal();
}


// Ctestocx2015Ctrl 消息处理程序


LONG Ctestocx2015Ctrl::AddFun(LONG param1, LONG param2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此添加调度处理程序代码

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
