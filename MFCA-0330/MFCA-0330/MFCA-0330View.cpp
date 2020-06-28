
// MFCA-0330View.cpp : CMFCA0330View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMFCA0330View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCA0330View 构造/析构

CMFCA0330View::CMFCA0330View()
{
	// TODO: 在此处添加构造代码

}

CMFCA0330View::~CMFCA0330View()
{
}

BOOL CMFCA0330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCA0330View 绘制

void CMFCA0330View::OnDraw(CDC* /*pDC*/)
{
	CMFCA0330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCA0330View 打印

BOOL CMFCA0330View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCA0330View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCA0330View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFCA0330View 诊断

#ifdef _DEBUG
void CMFCA0330View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCA0330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCA0330Doc* CMFCA0330View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCA0330Doc)));
	return (CMFCA0330Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCA0330View 消息处理程序


void CMFCA0330View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
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
