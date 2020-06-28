
// MFCA-0420-2View.h : CMFCA04202View ��Ľӿ�
//

#pragma once


class CMFCA04202View : public CView
{
protected: // �������л�����
	CMFCA04202View();
	DECLARE_DYNCREATE(CMFCA04202View)

// ����
public:
	CMFCA04202Doc* GetDocument() const;

// ����
public:
	BOOL set = false; CRect cr; 
	BOOL rset = false; CPoint rp;
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
	virtual ~CMFCA04202View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDe();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void On32773();
};

#ifndef _DEBUG  // MFCA-0420-2View.cpp �еĵ��԰汾
inline CMFCA04202Doc* CMFCA04202View::GetDocument() const
   { return reinterpret_cast<CMFCA04202Doc*>(m_pDocument); }
#endif

