
// MFCA-0324-1View.cpp : CMFCA03241View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0324-1.h"
#endif

#include "MFCA-0324-1Doc.h"
#include "MFCA-0324-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA03241View

IMPLEMENT_DYNCREATE(CMFCA03241View, CView)

BEGIN_MESSAGE_MAP(CMFCA03241View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_SHOW_01, &CMFCA03241View::OnShow01)
END_MESSAGE_MAP()

// CMFCA03241View ����/����

CMFCA03241View::CMFCA03241View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCA03241View::~CMFCA03241View()
{
}

BOOL CMFCA03241View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA03241View ����

void CMFCA03241View::OnDraw(CDC* /*pDC*/)
{
	CMFCA03241Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA03241View ��ӡ

BOOL CMFCA03241View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA03241View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA03241View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA03241View ���

#ifdef _DEBUG
void CMFCA03241View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA03241View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA03241Doc* CMFCA03241View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA03241Doc)));
	return (CMFCA03241Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA03241View ��Ϣ�������


void CMFCA03241View::OnShow01()
{
	// TODO: �ڴ���������������
	CString s = CString(_T("�����"));
	CClientDC dc(this);
	dc.TextOutW(30, 30, s);
}
