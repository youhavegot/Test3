
// MFCA-0331-1View.cpp : CMFCA03311View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0331-1.h"
#endif

#include "MFCA-0331-1Doc.h"
#include "MFCA-0331-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA03311View

IMPLEMENT_DYNCREATE(CMFCA03311View, CView)

BEGIN_MESSAGE_MAP(CMFCA03311View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_CHAR()
ON_WM_CHAR()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCA03311View ����/����

CMFCA03311View::CMFCA03311View()
{
	// TODO: �ڴ˴���ӹ������
}

CMFCA03311View::~CMFCA03311View()
{
}

BOOL CMFCA03311View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA03311View ����

void CMFCA03311View::OnDraw(CDC* pDC)
{
	CMFCA03311Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	GetClientRect(&pDoc->cr);
	CPoint po = pDoc->cr.CenterPoint();
	pDoc->cr = CRect(po.x - 200, po.y - 150, po.x + 200, po.y + 150);
	pDC->Rectangle(pDoc->cr);
	//pDC->TextOutW(30, 30, s);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA03311View ��ӡ

BOOL CMFCA03311View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA03311View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA03311View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA03311View ���

#ifdef _DEBUG
void CMFCA03311View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA03311View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA03311Doc* CMFCA03311View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA03311Doc)));
	return (CMFCA03311Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA03311View ��Ϣ�������


//void CMFCA03311View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	CMFCA03311Doc* pdoc = GetDocument();
//	CCHAR c = nChar;
//	pdoc->s += c;
//
//	CView::OnChar(nChar, nRepCnt, nFlags);
//}


void CMFCA03311View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCA03311Doc* pd = GetDocument();
	CCHAR c = nChar;
	s += c;
	CString sc; sc += c;
	CClientDC dc(this);
	CSize size=dc.GetTextExtent(sc);
	int i=0, bx = pd->cr.left + 1, by = pd->cr.top + 1;
	int dx = size.cx, dy = size.cy;
	while (i < s.GetLength()) {
		CString ss; ss += s[i];
		if (bx < pd->cr.Width()) {
			dc.TextOutW(bx, by, ss);
			bx =pd->cr.left+1;
			by += dy;
		}
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFCA03311View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	px = point.x;
	py = point.y;
	btod = true;
	CView::OnLButtonDown(nFlags, point);
}
