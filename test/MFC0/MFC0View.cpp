
// MFC0View.cpp : CMFC0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0.h"
#endif

#include "MFC0Doc.h"
#include "MFC0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0View

IMPLEMENT_DYNCREATE(CMFC0View, CView)

BEGIN_MESSAGE_MAP(CMFC0View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_CREATE()
ON_WM_CREATE()
ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC0View ����/����

CMFC0View::CMFC0View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0View::~CMFC0View()
{
}

BOOL CMFC0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0View ����

void CMFC0View::OnDraw(CDC* /*pDC*/)
{
	CMFC0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC0View ��ӡ

BOOL CMFC0View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC0View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC0View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC0View ���

#ifdef _DEBUG
void CMFC0View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0Doc* CMFC0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0Doc)));
	return (CMFC0Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0View ��Ϣ�������





int CMFC0View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	SetTimer(0, 1400, NULL);
	// TODO:  �ڴ������ר�õĴ�������

	return 0;
}


void CMFC0View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if(nIDEvent==0)
		dc.TextOutW(30,30,_T("wow"));
	CView::OnTimer(nIDEvent);
}
