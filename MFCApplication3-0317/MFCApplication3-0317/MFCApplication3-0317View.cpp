
// MFCApplication3-0317View.cpp : CMFCApplication30317View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication3-0317.h"
#endif

#include "MFCApplication3-0317Doc.h"
#include "MFCApplication3-0317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication30317View

IMPLEMENT_DYNCREATE(CMFCApplication30317View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication30317View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCApplication30317View ����/����

CMFCApplication30317View::CMFCApplication30317View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication30317View::~CMFCApplication30317View()
{
}

BOOL CMFCApplication30317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication30317View ����

void CMFCApplication30317View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication30317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication30317View ��ӡ

BOOL CMFCApplication30317View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCApplication30317View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCApplication30317View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCApplication30317View ���

#ifdef _DEBUG
void CMFCApplication30317View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication30317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication30317Doc* CMFCApplication30317View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication30317Doc)));
	return (CMFCApplication30317Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication30317View ��Ϣ�������


void CMFCApplication30317View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	n = 0;
	p2 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication30317View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	n++;
	sn++;
	CString s;
	s.Format(_T("%d"), sn);
	CClientDC dc(this);
	dc.TextOutW(30, 30, _T("MouseMove������ ") + s + _T(" ��"));
	CView::OnMouseMove(nFlags, point);
}


void CMFCApplication30317View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p2 = point;
	int c = p2.x - p1.x;
	int d = c / n;
	CString s;
	s.Format(_T("%d"), n);
	CClientDC dc(this);
	dc.TextOutW(30, 85, _T("���������̧�������MouseMove���� ")+s+_T(" ��"));
	s.Format(_T("%d"), d);
	dc.TextOutW(30, 140, _T("������������к����ƶ� ")+s+_T(" �����ط���һ��"));
	CView::OnLButtonUp(nFlags, point);
}
