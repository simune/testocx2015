#pragma once

// testocx2015PropPage.h : Ctestocx2015PropPage ����ҳ���������


// Ctestocx2015PropPage : �й�ʵ�ֵ���Ϣ������� testocx2015PropPage.cpp��

class Ctestocx2015PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(Ctestocx2015PropPage)
	DECLARE_OLECREATE_EX(Ctestocx2015PropPage)

// ���캯��
public:
	Ctestocx2015PropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_TESTOCX2015 };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

