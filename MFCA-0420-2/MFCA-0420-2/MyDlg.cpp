// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCA-0420-2.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, 0, 1980);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, 0, 1260);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDV_MinMaxInt(pDX, a, 0, 999);
	DDX_Text(pDX, IDC_EDIT4, b);
	DDV_MinMaxInt(pDX, b, 0, 700);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CRect cr = CRect(x, y, x + 2 * a, y + 2 * b);
	GetDC()->Ellipse(cr);
}
