
// MFCA-0330View.h : CMFCA0330View 类的接口
//

#pragma once


class CMFCA0330View : public CView
{
protected: // 仅从序列化创建
	CMFCA0330View();
	DECLARE_DYNCREATE(CMFCA0330View)

// 特性
public:
	CMFCA0330Doc* GetDocument() const;

// 操作
public:

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
	virtual ~CMFCA0330View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCA-0330View.cpp 中的调试版本
inline CMFCA0330Doc* CMFCA0330View::GetDocument() const
   { return reinterpret_cast<CMFCA0330Doc*>(m_pDocument); }
#endif

