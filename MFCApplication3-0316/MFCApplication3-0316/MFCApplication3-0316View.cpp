
// MFCApplication3-0316View.cpp : CMFCApplication30316View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication3-0316.h"
#endif

#include "MFCApplication3-0316Doc.h"
#include "MFCApplication3-0316View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication30316View

IMPLEMENT_DYNCREATE(CMFCApplication30316View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication30316View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_NCMOUSEMOVE()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCApplication30316View ����/����

CMFCApplication30316View::CMFCApplication30316View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication30316View::~CMFCApplication30316View()
{
}

BOOL CMFCApplication30316View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication30316View ����

void CMFCApplication30316View::OnDraw(CDC* pDC)
{
	CMFCApplication30316Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication30316View ��ӡ

BOOL CMFCApplication30316View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication30316View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication30316View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication30316View ���

#ifdef _DEBUG
void CMFCApplication30316View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication30316View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication30316Doc* CMFCApplication30316View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication30316Doc)));
	return (CMFCApplication30316Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication30316View ��Ϣ�������


void CMFCApplication30316View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC clientDC(this);
	CMFCApplication30316Doc* pd = GetDocument();
	pd->D_rect.left = point.x;
	pd->D_rect.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication30316View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC clientDC(this);
	CMFCApplication30316Doc* pd = GetDocument();
	pd->D_rect.right = point.x;
	pd->D_rect.bottom = point.y;
	clientDC.Rectangle(pd->D_rect);
	CView::OnLButtonUp(nFlags, point);
}


void CMFCApplication30316View::OnNcMouseMove(UINT nHitTest, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CView::OnNcMouseMove(nHitTest, point);
}


void CMFCApplication30316View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC clientDC(this);
	CString s1, s2, s11, s22;
	s1 = _T("X=");
	s11.Format(_T("%d"), point.x);
	s1 = s1 + s11;
	s2 = _T("Y=");
	s22.Format(_T("%d"), point.y);
	s2 = s2 + s22;
	s1 = s1 + s2;
	clientDC.TextOutW(30, 30, s1);
	CView::OnMouseMove(nFlags, point);
}
