
// MFCA-0331-1View.h : CMFCA03311View ��Ľӿ�
//

#pragma once


class CMFCA03311View : public CView
{
protected: // �������л�����
	CMFCA03311View();
	DECLARE_DYNCREATE(CMFCA03311View)

// ����
public:
	CMFCA03311Doc* GetDocument() const;

// ����
public:
	CString s; BOOL set = false, btod = false; int px, py;
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
	virtual ~CMFCA03311View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCA-0331-1View.cpp �еĵ��԰汾
inline CMFCA03311Doc* CMFCA03311View::GetDocument() const
   { return reinterpret_cast<CMFCA03311Doc*>(m_pDocument); }
#endif

