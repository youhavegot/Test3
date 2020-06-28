
// MFCA4-0323-0View.cpp : CMFCA403230View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA4-0323-0.h"
#endif

#include "MFCA4-0323-0Doc.h"
#include "MFCA4-0323-0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA403230View

IMPLEMENT_DYNCREATE(CMFCA403230View, CView)

BEGIN_MESSAGE_MAP(CMFCA403230View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_SHOWROUND, &CMFCA403230View::OnShowround)
END_MESSAGE_MAP()

// CMFCA403230View ����/����

CMFCA403230View::CMFCA403230View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCA403230View::~CMFCA403230View()
{
}

BOOL CMFCA403230View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA403230View ����

void CMFCA403230View::OnDraw(CDC* /*pDC*/)
{
	CMFCA403230Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA403230View ��ӡ

BOOL CMFCA403230View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA403230View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA403230View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA403230View ���

#ifdef _DEBUG
void CMFCA403230View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA403230View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA403230Doc* CMFCA403230View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA403230Doc)));
	return (CMFCA403230Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA403230View ��Ϣ�������


void CMFCA403230View::OnShowround()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect cr;
	GetClientRect(&cr);
	CPoint point;
	point = cr.CenterPoint();
	int r = 50, g = 0, b = 0;
	int x1 = point.x - 180, y1 = point.y - 180, x2 = point.x + 180, y2 = point.y + 180;
	CRect cr1,cr2;
	for (int i = 0; i < 30; i++) {
		CPen pen(PS_SOLID, 1, RGB(r, g, b));
		CPen *oldPen = dc.SelectObject(&pen);
		cr1=CRect(x1,y1,x2,y2);
		dc.Ellipse(cr1);
		x1 += 4;
		x2 -= 4;
		y1 += 4;
		y2 -= 4;
		r += 6;
		g += 1;
		b += 1;
	}

}
