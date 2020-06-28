
// MFCA-0331-1View.h : CMFCA03311View 类的接口
//

#pragma once


class CMFCA03311View : public CView
{
protected: // 仅从序列化创建
	CMFCA03311View();
	DECLARE_DYNCREATE(CMFCA03311View)

// 特性
public:
	CMFCA03311Doc* GetDocument() const;

// 操作
public:
	CString s; BOOL set = false, btod = false; int px, py;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFCA03311View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCA-0331-1View.cpp 中的调试版本
inline CMFCA03311Doc* CMFCA03311View::GetDocument() const
   { return reinterpret_cast<CMFCA03311Doc*>(m_pDocument); }
#endif

