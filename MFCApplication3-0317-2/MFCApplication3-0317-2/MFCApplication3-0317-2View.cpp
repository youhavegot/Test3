
// MFCApplication3-0317-2View.cpp : CMFCApplication303172View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication3-0317-2.h"
#endif

#include "MFCApplication3-0317-2Doc.h"
#include "MFCApplication3-0317-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication303172View

IMPLEMENT_DYNCREATE(CMFCApplication303172View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication303172View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication303172View ����/����

CMFCApplication303172View::CMFCApplication303172View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFCApplication303172View::~CMFCApplication303172View()
{
}

BOOL CMFCApplication303172View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	return CView::PreCreateWindow(cs);
}

// CMFCApplication303172View ����

void CMFCApplication303172View::OnDraw(CDC* pDC)
{
	CMFCApplication303172Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Rectangle(pDoc->rect);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication303172View ��ӡ

BOOL CMFCApplication303172View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication303172View::OnBeginPrinting(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication303172View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication303172View ���

#ifdef _DEBUG
void CMFCApplication303172View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication303172View::Dump(CDumpContext& dc) const
{
	
	CView::Dump(dc);
}

CMFCApplication303172Doc* CMFCApplication303172View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication303172Doc)));
	return (CMFCApplication303172Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication303172View ��Ϣ�������


void CMFCApplication303172View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication303172Doc* p = GetDocument();
	CRect Crect;
	GetClientRect(&Crect);
	switch (nChar)
	{
	case VK_LEFT:
		if (p->rect.left > 0) {
			p->rect.left -= 8;
			p->rect.right -= 8;
			}
		break;
	case VK_RIGHT:
		if (p->rect.right <= (Crect.right - Crect.left)) {
			p->rect.right += 8;
			p->rect.left += 8;
		}
		break;
	case VK_UP:
		if (p->rect.top > 0) {
			p->rect.top -= 6;
			p->rect.bottom -= 6;
		}
		break;
	case VK_DOWN:
		if (p->rect.bottom <= (Crect.bottom - Crect.top)) {
			p->rect.top += 6;
			p->rect.bottom += 6;
		}
		break;
	case VK_HOME:
		if (p->rect.left>0&& p->rect.top>0) {
			p->rect.left -= 8;
			p->rect.top -= 6;
		}
		break;
	case VK_END:
		if (p->rect.right > p->rect.left&&p->rect.bottom > p->rect.top) {
			p->rect.left += 8;
			p->rect.top += 6;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCApplication303172View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication303172Doc* pdoc = GetDocument();
	pdoc->rect.left = pdoc->rect.right - pdoc->x;
	pdoc->rect.top = pdoc->rect.bottom - pdoc->y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication303172View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication303172Doc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);
	CPoint p;
	p = cr.CenterPoint();
	pDoc->rect = CRect(p.x - 100, p.y - 75, p.x + 100, p.y + 75);

	pDoc->x = pDoc->rect.right-pDoc->rect.left;
	pDoc->y = pDoc->rect.bottom-pDoc->rect.top;

	CClientDC dc(this);
	dc.Rectangle(pDoc->rect);

	CView::OnRButtonDown(nFlags, point);
}
