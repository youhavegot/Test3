// RECORDSET.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC.h"
#include "RECORDSET.h"
#include "afxdialogex.h"


// RECORDSET �Ի���

IMPLEMENT_DYNAMIC(RECORDSET, CDialogEx)

RECORDSET::RECORDSET(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
{

}

RECORDSET::~RECORDSET()
{
}

void RECORDSET::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, lbox);
}


BEGIN_MESSAGE_MAP(RECORDSET, CDialogEx)
END_MESSAGE_MAP()


// RECORDSET ��Ϣ�������


BOOL RECORDSET::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	for (int i = 0; i < k; i++) {
		lbox.InsertString(-1, ss[i]);
	}
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
