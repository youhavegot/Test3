
// MFCA-0324-2View.cpp : CMFCA03242View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0324-2.h"
#endif

#include "MFCA-0324-2Doc.h"
#include "MFCA-0324-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA03242View

IMPLEMENT_DYNCREATE(CMFCA03242View, CView)

BEGIN_MESSAGE_MAP(CMFCA03242View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCA03242View ����/����

CMFCA03242View::CMFCA03242View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP bm;
	BM1.LoadBitmap(IDB_BM1);
	BM1.GetBitmap(&bm);
	BM1_Width = bm.bmWidth;
	BM1_Height = bm.bmHeight;
}

CMFCA03242View::~CMFCA03242View()
{
}

BOOL CMFCA03242View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA03242View ����

void CMFCA03242View::OnDraw(CDC* pDC)
{
	CMFCA03242Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(BM1);
	pDC->BitBlt(0, 0, BM1_Width, BM1_Height, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA03242View ��ӡ

BOOL CMFCA03242View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA03242View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA03242View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA03242View ���

#ifdef _DEBUG
void CMFCA03242View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA03242View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA03242Doc* CMFCA03242View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA03242Doc)));
	return (CMFCA03242Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA03242View ��Ϣ�������
