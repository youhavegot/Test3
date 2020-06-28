
// MFCA-0420-2View.cpp : CMFCA04202View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0420-2.h"
#endif

#include "MFCA-0420-2Doc.h"
#include "MFCA-0420-2View.h"
#include "MyDlg.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA04202View

IMPLEMENT_DYNCREATE(CMFCA04202View, CView)

BEGIN_MESSAGE_MAP(CMFCA04202View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_MBUTTONDOWN()
ON_WM_LBUTTONDOWN()
//ON_WM_LBUTTONUP()
ON_WM_MOUSEMOVE()
ON_WM_LBUTTONUP()
ON_COMMAND(ID_DE, &CMFCA04202View::OnDe)
ON_WM_RBUTTONDOWN()
ON_COMMAND(ID_32773, &CMFCA04202View::On32773)
END_MESSAGE_MAP()

// CMFCA04202View ����/����

CMFCA04202View::CMFCA04202View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCA04202View::~CMFCA04202View()
{
}

BOOL CMFCA04202View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA04202View ����

void CMFCA04202View::OnDraw(CDC* pDC)
{
	CMFCA04202Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Ellipse(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA04202View ��ӡ

BOOL CMFCA04202View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA04202View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA04202View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA04202View ���

#ifdef _DEBUG
void CMFCA04202View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA04202View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA04202Doc* CMFCA04202View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA04202Doc)));
	return (CMFCA04202Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA04202View ��Ϣ�������





void CMFCA04202View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFCA04202Doc* pd = GetDocument();
	pd->cr.left = point.x;
	pd->cr.top = point.y;
	set = true;
	CView::OnLButtonDown(nFlags, point);
}





void CMFCA04202View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCA04202Doc* pd = GetDocument();
	if (set == true) {
		pd->cr.right = point.x;
		pd->cr.bottom = point.y;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CMFCA04202View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFCA04202View::OnDe()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	CMFCA04202Doc* pd = GetDocument();
	if (IDOK == dlg.DoModal()) {
		this->UpdateData(true);
		pd->cr = CRect(dlg.x, dlg.y, dlg.x + 2 * dlg.a, dlg.y + 2 * dlg.b);
		GetDC()->Ellipse(pd->cr);
		Invalidate();
	}
	
}


void CMFCA04202View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCA04202Doc* pd = GetDocument();
	CDC* dc = GetDC();

	if (pd->cr.left <= point.x&&point.x <= pd->cr.right&&pd->cr.top <= point.y&&point.y <= pd->cr.bottom) {
		dc->Ellipse(pd->cr);
		CPen * pOldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		pOldPen = dc->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
		pOldBrush = dc->SelectObject(pBrush);
		cr = pd->cr;
		dc->Rectangle(cr);
		dc->SelectObject(pOldPen);
	}
	CView::OnRButtonDown(nFlags, point);
}


void CMFCA04202View::On32773()
{
	// TODO: �ڴ���������������
	MyDlg2 dlg;
	if (dlg.DoModal() == IDOK) {

	}
	
}
