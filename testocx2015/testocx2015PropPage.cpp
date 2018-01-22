// testocx2015PropPage.cpp : Ctestocx2015PropPage 属性页类的实现。

#include "stdafx.h"
#include "testocx2015.h"
#include "testocx2015PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(Ctestocx2015PropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(Ctestocx2015PropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(Ctestocx2015PropPage, "TESTOCX2015.testocx2015PropPage.1",
	0x6d8cad65, 0x5d8d, 0x4b4f, 0x90, 0x4, 0x1b, 0xe0, 0xdc, 0x55, 0xdd, 0xdd)

// Ctestocx2015PropPage::Ctestocx2015PropPageFactory::UpdateRegistry -
// 添加或移除 Ctestocx2015PropPage 的系统注册表项

BOOL Ctestocx2015PropPage::Ctestocx2015PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_TESTOCX2015_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// Ctestocx2015PropPage::Ctestocx2015PropPage - 构造函数

Ctestocx2015PropPage::Ctestocx2015PropPage() :
	COlePropertyPage(IDD, IDS_TESTOCX2015_PPG_CAPTION)
{
}

// Ctestocx2015PropPage::DoDataExchange - 在页和属性间移动数据

void Ctestocx2015PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// Ctestocx2015PropPage 消息处理程序
