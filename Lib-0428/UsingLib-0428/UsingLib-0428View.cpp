
// UsingLib-0428View.cpp : CUsingLib0428View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingLib-0428.h"
#endif

#include "UsingLib-0428Doc.h"
#include "UsingLib-0428View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"W32D.h"


// CUsingLib0428View

IMPLEMENT_DYNCREATE(CUsingLib0428View, CView)

BEGIN_MESSAGE_MAP(CUsingLib0428View, CView)
END_MESSAGE_MAP()

// CUsingLib0428View ����/����

CUsingLib0428View::CUsingLib0428View()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingLib0428View::~CUsingLib0428View()
{
}

BOOL CUsingLib0428View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingLib0428View ����

void CUsingLib0428View::OnDraw(CDC* pDC)
{
	CUsingLib0428Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//��̬���ӿ�ʵ��
	CString s1, s2; int a;
	s2 = CString(pchar());
	F1 f1;
	a = f1.GetA();
	s1.Format(_T("%d"), a);
	s1 = s1 +","+ s2;
	s2 = "��̬���ӿⷵ�ص���ֵ���ַ���Ϊ:";
	s1 = s2+s1;
	pDC->TextOutW(200, 200, s1);

	//��̬���ӿ�ʵ��
	CString s3;
	s3.Format(_T("��̬���ӿⷵ�ص�ֵΪ:%d"),GetInt());
	pDC->TextOutW(200, 250, s3);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUsingLib0428View ���

#ifdef _DEBUG
void CUsingLib0428View::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLib0428View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLib0428Doc* CUsingLib0428View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLib0428Doc)));
	return (CUsingLib0428Doc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLib0428View ��Ϣ�������
