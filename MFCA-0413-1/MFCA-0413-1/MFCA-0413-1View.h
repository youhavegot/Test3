
// MFCA-0413-1View.h : CMFCA04131View ��Ľӿ�
//

#pragma once


class CMFCA04131View : public CView
{
protected: // �������л�����
	CMFCA04131View();
	DECLARE_DYNCREATE(CMFCA04131View)

// ����
public:
	CMFCA04131Doc* GetDocument() const;

// ����
public:
	BOOL set = false;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCA04131View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCA-0413-1View.cpp �еĵ��԰汾
inline CMFCA04131Doc* CMFCA04131View::GetDocument() const
   { return reinterpret_cast<CMFCA04131Doc*>(m_pDocument); }
#endif

