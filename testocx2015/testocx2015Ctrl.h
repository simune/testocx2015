#pragma once
#include "CMainDlg.h"
// testocx2015Ctrl.h : Ctestocx2015Ctrl ActiveX 控件类的声明。


// Ctestocx2015Ctrl : 有关实现的信息，请参阅 testocx2015Ctrl.cpp。

class Ctestocx2015Ctrl : public COleControl
{
	DECLARE_DYNCREATE(Ctestocx2015Ctrl)

// 构造函数
public:
	Ctestocx2015Ctrl();

public:
	CMainDlg m_dlg;

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~Ctestocx2015Ctrl();

	DECLARE_OLECREATE_EX(Ctestocx2015Ctrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(Ctestocx2015Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(Ctestocx2015Ctrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(Ctestocx2015Ctrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		eventidtestevent = 1L,
		dispidSetParameter = 2L,
		dispidAddFun = 1L
	};
protected:
	LONG AddFun(LONG param1, LONG param2);
	LONG SetParameter(LPCTSTR param);
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	void testevent(LONG param1)
	{
		FireEvent(eventidtestevent, EVENT_PARAM(VTS_I4), param1);
	}
};

