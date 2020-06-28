
// CDlg-0421View.cpp : CCDlg0421View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CDlg-0421.h"
#endif

#include "CDlg-0421Doc.h"
#include "CDlg-0421View.h"
#include<fstream>
#include<iostream>
#include<string>
#include "MyDlg.h"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCDlg0421View

IMPLEMENT_DYNCREATE(CCDlg0421View, CView)

BEGIN_MESSAGE_MAP(CCDlg0421View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CCDlg0421View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CCDlg0421View::OnFileSaveAs)
	ON_COMMAND(ID_32771, &CCDlg0421View::On32771)
END_MESSAGE_MAP()

// CCDlg0421View ����/����

CCDlg0421View::CCDlg0421View()
{
	// TODO: �ڴ˴���ӹ������

}

CCDlg0421View::~CCDlg0421View()
{
}

BOOL CCDlg0421View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCDlg0421View ����

void CCDlg0421View::OnDraw(CDC* /*pDC*/)
{
	CCDlg0421Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCDlg0421View ��ӡ

BOOL CCDlg0421View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CCDlg0421View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CCDlg0421View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CCDlg0421View ���

#ifdef _DEBUG
void CCDlg0421View::AssertValid() const
{
	CView::AssertValid();
}

void CCDlg0421View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCDlg0421Doc* CCDlg0421View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCDlg0421Doc)));
	return (CCDlg0421Doc*)m_pDocument;
}
#endif //_DEBUG


// CCDlg0421View ��Ϣ�������


void CCDlg0421View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CCDlg0421Doc* pd = GetDocument();
	CFileDialog cfd(true);
	if (cfd.DoModal() == IDOK) {
		pd->filename = cfd.GetPathName();
	}
	CClientDC dc(this);

}


void CCDlg0421View::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(false);
	CCDlg0421Doc* pd = GetDocument();
	if (cfd.DoModal() == IDOK) {
		ofstream ofs(cfd.GetPathName());
		ofs << CT2A(pd->filename.GetString());
	}
}


void CCDlg0421View::On32771()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	if (dlg.DoModal() == IDOK) {

	}
}
