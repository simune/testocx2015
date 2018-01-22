// CMainDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "testocx2015.h"
#include "CMainDlg.h"
#include "afxdialogex.h"


// CMainDlg 对话框

IMPLEMENT_DYNAMIC(CMainDlg, CDialog)

CMainDlg::CMainDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

CMainDlg::~CMainDlg()
{
}

void CMainDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMainDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CMainDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMainDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CMainDlg 消息处理程序


long CMainDlg::SetParameter(LPCTSTR param, bool fromButton)
{
	CString strparam(param);
	if (fromButton) {
		SetDlgItemText(IDC_MAIN_EDIT, _T("按钮字符串设置为：") + strparam);
	}
	else
	{
		SetDlgItemText(IDC_MAIN_EDIT, _T("参数设置字符串为：") + strparam);
	}
	return 0;
}


void CMainDlg::OnBnClickedButton1()
{
	SetParameter(_T("Button1"), true);
}


void CMainDlg::OnBnClickedButton2()
{
	SetParameter(_T("Button2"), true);

}
