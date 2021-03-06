
// MFCA-0331-1View.cpp : CMFCA03311View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCA-0331-1.h"
#endif

#include "MFCA-0331-1Doc.h"
#include "MFCA-0331-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCA03311View

IMPLEMENT_DYNCREATE(CMFCA03311View, CView)

BEGIN_MESSAGE_MAP(CMFCA03311View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_CHAR()
ON_WM_CHAR()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCA03311View 构造/析构

CMFCA03311View::CMFCA03311View()
{
	// TODO: 在此处添加构造代码
}

CMFCA03311View::~CMFCA03311View()
{
}

BOOL CMFCA03311View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCA03311View 绘制

void CMFCA03311View::OnDraw(CDC* pDC)
{
	CMFCA03311Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	GetClientRect(&pDoc->cr);
	CPoint po = pDoc->cr.CenterPoint();
	pDoc->cr = CRect(po.x - 200, po.y - 150, po.x + 200, po.y + 150);
	pDC->Rectangle(pDoc->cr);
	//pDC->TextOutW(30, 30, s);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCA03311View 打印

BOOL CMFCA03311View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCA03311View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCA03311View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFCA03311View 诊断

#ifdef _DEBUG
void CMFCA03311View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA03311View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA03311Doc* CMFCA03311View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA03311Doc)));
	return (CMFCA03311Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA03311View 消息处理程序


//void CMFCA03311View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	CMFCA03311Doc* pdoc = GetDocument();
//	CCHAR c = nChar;
//	pdoc->s += c;
//
//	CView::OnChar(nChar, nRepCnt, nFlags);
//}


void CMFCA03311View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCA03311Doc* pd = GetDocument();
	CCHAR c = nChar;
	s += c;
	CString sc; sc += c;
	CClientDC dc(this);
	CSize size=dc.GetTextExtent(sc);
	int i=0, bx = pd->cr.left + 1, by = pd->cr.top + 1;
	int dx = size.cx, dy = size.cy;
	while (i < s.GetLength()) {
		CString ss; ss += s[i];
		if (bx < pd->cr.Width()) {
			dc.TextOutW(bx, by, ss);
			bx =pd->cr.left+1;
			by += dy;
		}
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFCA03311View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	px = point.x;
	py = point.y;
	btod = true;
	CView::OnLButtonDown(nFlags, point);
}
