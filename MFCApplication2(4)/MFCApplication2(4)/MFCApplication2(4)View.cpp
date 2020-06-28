
// MFCApplication2(4)View.cpp : CMFCApplication24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication2(4).h"
#endif

#include "MFCApplication2(4)Doc.h"
#include "MFCApplication2(4)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication24View

IMPLEMENT_DYNCREATE(CMFCApplication24View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication24View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication24View ����/����

CMFCApplication24View::CMFCApplication24View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication24View::~CMFCApplication24View()
{
}

BOOL CMFCApplication24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication24View ����

void CMFCApplication24View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication24View ��ӡ

BOOL CMFCApplication24View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication24View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication24View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication24View ���

#ifdef _DEBUG
void CMFCApplication24View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication24Doc* CMFCApplication24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication24Doc)));
	return (CMFCApplication24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication24View ��Ϣ�������


void CMFCApplication24View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int C = pDoc->A + pDoc->B;
	CString s;
	s.Format(_T("%d"), C);
	CString s2 = _T("A+B=");
	s = s2 + s;
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);


	CView::OnLButtonDown(nFlags, point);
}
