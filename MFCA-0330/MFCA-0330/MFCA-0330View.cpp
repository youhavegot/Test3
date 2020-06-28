
// MFCA-0330View.cpp : CMFCA0330View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCA-0330.h"
#endif

#include "MFCA-0330Doc.h"
#include "MFCA-0330View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA0330View

IMPLEMENT_DYNCREATE(CMFCA0330View, CView)

BEGIN_MESSAGE_MAP(CMFCA0330View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMFCA0330View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCA0330View ����/����

CMFCA0330View::CMFCA0330View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCA0330View::~CMFCA0330View()
{
}

BOOL CMFCA0330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCA0330View ����

void CMFCA0330View::OnDraw(CDC* /*pDC*/)
{
	CMFCA0330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCA0330View ��ӡ

BOOL CMFCA0330View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCA0330View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCA0330View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCA0330View ���

#ifdef _DEBUG
void CMFCA0330View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA0330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA0330Doc* CMFCA0330View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA0330Doc)));
	return (CMFCA0330Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA0330View ��Ϣ�������


void CMFCA0330View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();
	CString filename = cfd.GetPathName();
	CImage ima;
	CRect cr;
	GetClientRect(cr);
	int x = cr.right, y = cr.bottom;
	if (IDOK == r) {
		ima.Load(filename);
		ima.Draw(dc.m_hDC, x-(ima.GetWidth()/2), y-(ima.GetHeight()/2), ima.GetWidth(),ima.GetHeight() );
	}
}
