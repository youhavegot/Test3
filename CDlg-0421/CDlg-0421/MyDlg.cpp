// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CDlg-0421.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include<fstream>
#include<string>
using namespace std;


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CFileDialog cfd(true);
	CImage img;
	if (cfd.DoModal()==IDOK) {
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;
		ifs >> s;

		img.Load(CString(s.c_str()));
		int sx, sy, w, h;
		foo(img, sx, sy, w, h);
		CDC* pdc = GetDlgItem(IDC_STATIC)->GetDC();
		pdc->SetStretchBltMode(HALFTONE);
		img.Draw(pdc->m_hDC, sx,sy,w,h);
		ReleaseDC(pdc);
	}
}

void MyDlg::foo(CImage & img, int & sx, int & sy, int & w, int & h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;

	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
}
