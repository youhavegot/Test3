
// Dlg-0407-1View.cpp : CDlg04071View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg-0407-1.h"
#endif

#include "Dlg-0407-1Doc.h"
#include "Dlg-0407-1View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg04071View

IMPLEMENT_DYNCREATE(CDlg04071View, CView)

BEGIN_MESSAGE_MAP(CDlg04071View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CDlg04071View::OnPopout)
END_MESSAGE_MAP()

// CDlg04071View ����/����

CDlg04071View::CDlg04071View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg04071View::~CDlg04071View()
{
}

BOOL CDlg04071View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg04071View ����

void CDlg04071View::OnDraw(CDC* /*pDC*/)
{
	CDlg04071Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg04071View ��ӡ

BOOL CDlg04071View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CDlg04071View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CDlg04071View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CDlg04071View ���

#ifdef _DEBUG
void CDlg04071View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg04071View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg04071Doc* CDlg04071View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg04071Doc)));
	return (CDlg04071Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg04071View ��Ϣ�������


void CDlg04071View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		GetDC()->TextOutW(400, 300, _T("�����˳��Ի���"));
	}
}
