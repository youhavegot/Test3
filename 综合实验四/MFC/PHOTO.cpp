// PHOTO.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC.h"
#include "PHOTO.h"
#include "afxdialogex.h"


// PHOTO �Ի���

IMPLEMENT_DYNAMIC(PHOTO, CDialogEx)

PHOTO::PHOTO(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

PHOTO::~PHOTO()
{
}

void PHOTO::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PHOTO, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// PHOTO ��Ϣ�������
void PHOTO::draw(CString file) {
	CRect rect;
	CImage img;
	img.Load(file);
	GetClientRect(&rect);
	int sx, sy, h, w;
	CDC *pDC = GetDlgItem(IDC_STATIC10)->GetDC();
	GetDlgItem(IDC_STATIC10)->GetClientRect(&rect);
	float rect_radio = 1.0 * rect.Width() / rect.Height();
	float image_radio = 1.0 * img.GetWidth() / img.GetHeight();
	if (rect_radio > image_radio)
	{
		h = rect.Height();
		w = image_radio * h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / image_radio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}

void PHOTO::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	draw(pname);
}
