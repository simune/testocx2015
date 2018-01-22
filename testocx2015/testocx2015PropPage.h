#pragma once

// testocx2015PropPage.h : Ctestocx2015PropPage 属性页类的声明。


// Ctestocx2015PropPage : 有关实现的信息，请参阅 testocx2015PropPage.cpp。

class Ctestocx2015PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(Ctestocx2015PropPage)
	DECLARE_OLECREATE_EX(Ctestocx2015PropPage)

// 构造函数
public:
	Ctestocx2015PropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_TESTOCX2015 };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

