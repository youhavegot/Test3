
// MFCA-0324-3View.cpp : CMFCA03243View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0324-3.h"
#endif

#include "MFCA-0324-3Doc.h"
#include "MFCA-0324-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA03243View

IMPLEMENT_DYNCREATE(CMFCA03243View, CView)

BEGIN_MESSAGE_MAP(CMFCA03243View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DRAWLI, &CMFCA03243View::OnDrawli)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_DRAWRE, &CMFCA03243View::OnDrawre)
	ON_COMMAND(ID_DRAWRO, &CMFCA03243View::OnDrawro)
END_MESSAGE_MAP()

// CMFCA03243View ����/����

CMFCA03243View::CMFCA03243View()
{
	// TODO: �ڴ˴���ӹ������
	for (int i = 0; i < n; i++) {
		set[i] = false;
	}
}

CMFCA03243View::~CMFCA03243View()
{
}

BOOL CMFCA03243View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA03243View ����

void CMFCA03243View::OnDraw(CDC* /*pDC*/)
{
	CMFCA03243Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA03243View ��ӡ

BOOL CMFCA03243View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA03243View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA03243View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA03243View ���

#ifdef _DEBUG
void CMFCA03243View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA03243View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA03243Doc* CMFCA03243View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA03243Doc)));
	return (CMFCA03243Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA03243View ��Ϣ�������


void CMFCA03243View::OnDrawli()
{
	// TODO: �ڴ���������������
	set[0] = true;
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			set[i] = false;
		}
	}
	Invalidate();
}


void CMFCA03243View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	point1 = point;
	//Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CMFCA03243View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	for (int i = 0; i < n; i++) {
		if (set[0] == true) {
			dc.MoveTo(point1);
			dc.LineTo(point);
		}
		else if (set[1] == true) {
			CRect cr1 = CRect(point1.x, point1.y, point.x, point.y);
			dc.Rectangle(cr1);
		}
		else if (set[2] == true) {
			CRect cr2 = CRect(point1.x, point1.y, point.x, point.y);
			dc.Ellipse(cr2);
		}
	}
	CView::OnLButtonUp(nFlags, point);
}


void CMFCA03243View::OnDrawre()
{
	// TODO: �ڴ���������������
	set[1] = true;
	for (int i = 0; i < n; i++) {
		if (i != 1) {
			set[i] = false;
		}
	}
	Invalidate();
}


void CMFCA03243View::OnDrawro()
{
	// TODO: �ڴ���������������
	set[2] = true;
	for (int i = 0; i < n; i++) {
		if (i != 2) {
			set[i] = false;
		}
	}
	Invalidate();
}
