
// MFCApplication2(2)View.cpp : CMFCApplication22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication2(2).h"
#endif

#include "MFCApplication2(2)Doc.h"
#include "MFCApplication2(2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication22View

IMPLEMENT_DYNCREATE(CMFCApplication22View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication22View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication22View ����/����

CMFCApplication22View::CMFCApplication22View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication22View::~CMFCApplication22View()
{
}

BOOL CMFCApplication22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication22View ����

void CMFCApplication22View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication22View ��ӡ

BOOL CMFCApplication22View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication22View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication22View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication22View ���

#ifdef _DEBUG
void CMFCApplication22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication22Doc* CMFCApplication22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication22Doc)));
	return (CMFCApplication22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication22View ��Ϣ�������


void CMFCApplication22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	int a = rand() % 50 + 5;
	int b = rand() % 30 + 3;
	dc.Ellipse(point.x - a, point.y - b, point.x + a, point.y + b);
	CView::OnLButtonDown(nFlags, point);
}
