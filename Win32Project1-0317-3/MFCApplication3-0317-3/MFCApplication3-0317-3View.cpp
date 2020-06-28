
// MFCApplication3-0317-3View.cpp : CMFCApplication303173View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication3-0317-3.h"
#endif

#include "MFCApplication3-0317-3Doc.h"
#include "MFCApplication3-0317-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication303173View

IMPLEMENT_DYNCREATE(CMFCApplication303173View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication303173View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_TIMER()
//	ON_WM_DESTROY()
END_MESSAGE_MAP()

// CMFCApplication303173View ����/����

CMFCApplication303173View::CMFCApplication303173View()
{
	// TODO: �ڴ˴���ӹ������
	for (int i = 0; i < 99; i++)
		con[i] = false;
}

CMFCApplication303173View::~CMFCApplication303173View()
{
}

BOOL CMFCApplication303173View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication303173View ����

void CMFCApplication303173View::OnDraw(CDC* pDC)
{
	CMFCApplication303173Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < pDoc->n; i++)
		pDC->Ellipse(pDoc->ccr[i]);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication303173View ��ӡ

BOOL CMFCApplication303173View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication303173View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication303173View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication303173View ���

#ifdef _DEBUG
void CMFCApplication303173View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication303173View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication303173Doc* CMFCApplication303173View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication303173Doc)));
	return (CMFCApplication303173Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication303173View ��Ϣ�������


int CMFCApplication303173View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	for (int i = 0; i < 4; i++) {
		int t = rand() % 50;
		SetTimer(i, t, NULL);
		SetTimer(i + 4, t + 50, NULL);
	}
	// TODO:  �ڴ������ר�õĴ�������

	return 0;
}


void CMFCApplication303173View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	CMFCApplication303173Doc* pdoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);
	if ( con[i]==false &&i >= 0 && i <= 3) {
		pdoc->ccr[i].bottom += 5;
		pdoc->ccr[i].top +=5;
		if (pdoc->ccr[i].bottom >= cr.bottom) {
			KillTimer(i);
			con[i] = true;
		}
	}
	if (i>=4&&i<=7&&con[i-4] == true && pdoc->ccr[i - 4].top >= cr.top + 100) {
		pdoc->ccr[i - 4].bottom -= 5;
		pdoc->ccr[i - 4].top -= 5;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnTimer(nIDEvent);
}

