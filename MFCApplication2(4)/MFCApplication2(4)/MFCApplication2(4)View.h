
// MFCApplication2(4)View.h : CMFCApplication24View ��Ľӿ�
//

#pragma once


class CMFCApplication24View : public CView
{
protected: // �������л�����
	CMFCApplication24View();
	DECLARE_DYNCREATE(CMFCApplication24View)

// ����
public:
	CMFCApplication24Doc* GetDocument() const;

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
	virtual ~CMFCApplication24View();
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

#ifndef _DEBUG  // MFCApplication2(4)View.cpp �еĵ��԰汾
inline CMFCApplication24Doc* CMFCApplication24View::GetDocument() const
   { return reinterpret_cast<CMFCApplication24Doc*>(m_pDocument); }
#endif

