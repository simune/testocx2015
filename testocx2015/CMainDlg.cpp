// CMainDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "testocx2015.h"
#include "CMainDlg.h"
#include "afxdialogex.h"


// CMainDlg �Ի���

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


// CMainDlg ��Ϣ�������


long CMainDlg::SetParameter(LPCTSTR param, bool fromButton)
{
	CString strparam(param);
	if (fromButton) {
		SetDlgItemText(IDC_MAIN_EDIT, _T("��ť�ַ�������Ϊ��") + strparam);
	}
	else
	{
		SetDlgItemText(IDC_MAIN_EDIT, _T("���������ַ���Ϊ��") + strparam);
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
