
// MFCApplication2(2)View.h : CMFCApplication22View ��Ľӿ�
//

#pragma once


class CMFCApplication22View : public CView
{
protected: // �������л�����
	CMFCApplication22View();
	DECLARE_DYNCREATE(CMFCApplication22View)

// ����
public:
	CMFCApplication22Doc* GetDocument() const;

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
	virtual ~CMFCApplication22View();
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
};

#ifndef _DEBUG  // MFCApplication2(2)View.cpp �еĵ��԰汾
inline CMFCApplication22Doc* CMFCApplication22View::GetDocument() const
   { return reinterpret_cast<CMFCApplication22Doc*>(m_pDocument); }
#endif

