
// MFCView.cpp : CMFCView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC.h"
#endif
#include "W32D.h"

#include "MFCDoc.h"
#include "MFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCView

IMPLEMENT_DYNCREATE(CMFCView, CView)

BEGIN_MESSAGE_MAP(CMFCView, CView)
END_MESSAGE_MAP()

// CMFCView ����/����

CMFCView::CMFCView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCView::~CMFCView()
{
}

BOOL CMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCView ����

void CMFCView::OnDraw(CDC* pDC)
{
	CMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	FAC fac;
	CString s1, s2, s3, st;
	s1.Format(_T("%d"), factorial(5));
	st = "����factorial(5)��������:";
	s1 = st + s1;
	pDC->TextOutW(100, 100, s1);

	s2.Format(_T("%d"), factorial(18));
	st = "����factorial(18)��������:";
	s2 = st + s2;
	pDC->TextOutW(100, 150, s2);

	s3.Format(_T("%f"), fac.convert(30.0));
	st = "����convert(30.0)��������:";
	s3 = st + s3;
	pDC->TextOutW(100, 200, s3);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCView ���

#ifdef _DEBUG
void CMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCDoc* CMFCView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDoc)));
	return (CMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCView ��Ϣ�������
