// ADD.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCA-0413-2.h"
#include "ADD.h"
#include "afxdialogex.h"


// ADD �Ի���

IMPLEMENT_DYNAMIC(ADD, CDialogEx)

ADD::ADD(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

ADD::~ADD()
{
}

void ADD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(ADD, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ADD::OnBnClickedButton1)
END_MESSAGE_MAP()


// ADD ��Ϣ�������


void ADD::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	z = x+y;
	UpdateData(false);
}
