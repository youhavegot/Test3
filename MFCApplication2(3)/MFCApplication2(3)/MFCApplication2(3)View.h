
// MFCApplication2(3)View.h : CMFCApplication23View ��Ľӿ�
//

#pragma once


class CMFCApplication23View : public CView
{
protected: // �������л�����
	CMFCApplication23View();
	DECLARE_DYNCREATE(CMFCApplication23View)

// ����
public:
	CMFCApplication23Doc* GetDocument() const;

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
	virtual ~CMFCApplication23View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication2(3)View.cpp �еĵ��԰汾
inline CMFCApplication23Doc* CMFCApplication23View::GetDocument() const
   { return reinterpret_cast<CMFCApplication23Doc*>(m_pDocument); }
#endif

