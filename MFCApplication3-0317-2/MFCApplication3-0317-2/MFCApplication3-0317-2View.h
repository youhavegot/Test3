
// MFCApplication3-0317-2View.h : CMFCApplication303172View ��Ľӿ�
//

#pragma once


class CMFCApplication303172View : public CView
{
protected: // �������л�����
	CMFCApplication303172View();
	DECLARE_DYNCREATE(CMFCApplication303172View)

// ����
public:
	CMFCApplication303172Doc* GetDocument() const;
	
// ����
public:
	
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
	virtual ~CMFCApplication303172View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication3-0317-2View.cpp �еĵ��԰汾
inline CMFCApplication303172Doc* CMFCApplication303172View::GetDocument() const
   { return reinterpret_cast<CMFCApplication303172Doc*>(m_pDocument); }
#endif

