
// MFCA-0413-1View.h : CMFCA04131View 类的接口
//

#pragma once


class CMFCA04131View : public CView
{
protected: // 仅从序列化创建
	CMFCA04131View();
	DECLARE_DYNCREATE(CMFCA04131View)

// 特性
public:
	CMFCA04131Doc* GetDocument() const;

// 操作
public:
	BOOL set = false;
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
	virtual ~CMFCA04131View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCA-0413-1View.cpp 中的调试版本
inline CMFCA04131Doc* CMFCA04131View::GetDocument() const
   { return reinterpret_cast<CMFCA04131Doc*>(m_pDocument); }
#endif

