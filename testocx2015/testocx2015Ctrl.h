#pragma once
#include "CMainDlg.h"
// testocx2015Ctrl.h : Ctestocx2015Ctrl ActiveX �ؼ����������


// Ctestocx2015Ctrl : �й�ʵ�ֵ���Ϣ������� testocx2015Ctrl.cpp��

class Ctestocx2015Ctrl : public COleControl
{
	DECLARE_DYNCREATE(Ctestocx2015Ctrl)

// ���캯��
public:
	Ctestocx2015Ctrl();

public:
	CMainDlg m_dlg;

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~Ctestocx2015Ctrl();

	DECLARE_OLECREATE_EX(Ctestocx2015Ctrl)    // �๤���� guid
	DECLARE_OLETYPELIB(Ctestocx2015Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(Ctestocx2015Ctrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(Ctestocx2015Ctrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
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

