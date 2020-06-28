
// MFCA-0413-1View.cpp : CMFCA04131View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0413-1.h"
#endif

#include "MFCA-0413-1Doc.h"
#include "MFCA-0413-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA04131View

IMPLEMENT_DYNCREATE(CMFCA04131View, CView)

BEGIN_MESSAGE_MAP(CMFCA04131View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCA04131View ����/����

CMFCA04131View::CMFCA04131View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCA04131View::~CMFCA04131View()
{
}

BOOL CMFCA04131View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA04131View ����

void CMFCA04131View::OnDraw(CDC* pDC)
{
	CMFCA04131Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA04131View ��ӡ

BOOL CMFCA04131View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA04131View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA04131View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA04131View ���

#ifdef _DEBUG
void CMFCA04131View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA04131View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA04131Doc* CMFCA04131View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA04131Doc)));
	return (CMFCA04131Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA04131View ��Ϣ�������


void CMFCA04131View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCA04131Doc* pd = GetDocument();
	if (pd->cr.left < point.x&&point.x < pd->cr.right&&pd->cr.top < point.y&&point.y < pd->cr.bottom) {
		set = true;
		pd->cp = point;
	}
	CView::OnLButtonDown(nFlags, point);
}


void CMFCA04131View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCA04131Doc* pd = GetDocument();
	CClientDC dc(this);
	if (set == true) {
		int xd = point.x - pd->cp.x;
		int yd = point.y - pd->cp.y;
		pd->cr.left = pd->cr.left + xd;
		pd->cr.right = pd->cr.right + xd;
		pd->cr.top = pd->cr.top + yd;
		pd->cr.bottom = pd->cr.bottom + yd;
		pd->cp = point;
		InvalidateRect(NULL, TRUE);
	}
	CView::OnMouseMove(nFlags, point);
}


void CMFCA04131View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFCA04131View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CMFCA04131Doc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(cr);
	CPoint cp = cr.CenterPoint();
	pDoc->cr = CRect(cp.x - 100, cp.y - 75, cp.x + 100, cp.y + 75);
	dc.Rectangle(pDoc->cr);
	CView::OnRButtonDown(nFlags, point);
}
