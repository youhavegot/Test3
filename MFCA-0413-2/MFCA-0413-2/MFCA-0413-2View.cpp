
// MFCA-0413-2View.cpp : CMFCA04132View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0413-2.h"
#endif

#include "MFCA-0413-2Doc.h"
#include "MFCA-0413-2View.h"
#include "ADD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA04132View

IMPLEMENT_DYNCREATE(CMFCA04132View, CView)

BEGIN_MESSAGE_MAP(CMFCA04132View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMFCA04132View::OnPopout)
END_MESSAGE_MAP()

// CMFCA04132View ����/����

CMFCA04132View::CMFCA04132View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCA04132View::~CMFCA04132View()
{
}

BOOL CMFCA04132View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA04132View ����

void CMFCA04132View::OnDraw(CDC* /*pDC*/)
{
	CMFCA04132Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA04132View ��ӡ

BOOL CMFCA04132View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA04132View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA04132View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA04132View ���

#ifdef _DEBUG
void CMFCA04132View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA04132View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA04132Doc* CMFCA04132View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA04132Doc)));
	return (CMFCA04132Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA04132View ��Ϣ�������


void CMFCA04132View::OnPopout()
{
	// TODO: �ڴ���������������
	ADD dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {

	}
}
