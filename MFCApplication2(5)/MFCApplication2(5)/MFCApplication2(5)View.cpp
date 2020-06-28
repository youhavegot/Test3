
// MFCApplication2(5)View.cpp : CMFCApplication25View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication2(5).h"
#endif

#include "MFCApplication2(5)Doc.h"
#include "MFCApplication2(5)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication25View

IMPLEMENT_DYNCREATE(CMFCApplication25View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication25View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication25View ����/����

CMFCApplication25View::CMFCApplication25View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication25View::~CMFCApplication25View()
{
}

BOOL CMFCApplication25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication25View ����

void CMFCApplication25View::OnDraw(CDC* pDC)
{
	CMFCApplication25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush brush(RGB(0, 0, 255));
	CPoint p;
	pDC->TextOutW(150, 80, _T("A"));
	pDC->TextOutW(450, 80, _T("B"));
	pDC->TextOutW(650, 280, _T("C"));
	pDoc->A=CRect(100, 100, 260, 260);
	pDoc->B=CRect(400, 100, 500, 500);
	pDoc->C=CRect(600, 300, 800, 500);
	pDC->FillRect(&pDoc->A, &brush);
	pDC->FillRect(&pDoc->B, &brush);
	pDC->FillRect(&pDoc->C, &brush);


	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication25View ��ӡ

BOOL CMFCApplication25View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication25View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication25View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication25View ���

#ifdef _DEBUG
void CMFCApplication25View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication25Doc* CMFCApplication25View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication25Doc)));
	return (CMFCApplication25Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication25View ��Ϣ�������


void CMFCApplication25View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CString s;
	CMFCApplication25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (point.x > pDoc->A.left&&point.x<pDoc->A.right&&point.y>pDoc->A.top&&point.y < pDoc->A.bottom) {
		pDoc->a = rand()%40;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(150, 150, s);
	}
	else if (point.x > pDoc->B.left&&point.x<pDoc->B.right&&point.y>pDoc->B.top&&point.y <pDoc->B.bottom) {
		pDoc->b = rand()%40;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(450, 250, s);
	}
	else if (point.x > pDoc->C.left&&point.x<pDoc->C.right&&point.y>pDoc->C.top&&point.y < pDoc->C.bottom) {
		int c = pDoc->a + pDoc->b;
		if (pDoc->a != -1 && pDoc->b != -1) {
			s.Format(_T("%d"), c);
			dc.TextOutW(700, 400, s);
		}
		else
			dc.TextOutW(800, 100, _T("a��b��ֵδȷ��"));
	}
	else
		dc.TextOutW(600, 100, _T("�����Ч"));

	CView::OnLButtonDown(nFlags, point);
}
