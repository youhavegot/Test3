
// MFCApplication2(5)View.h : CMFCApplication25View ��Ľӿ�
//

#pragma once


class CMFCApplication25View : public CView
{
protected: // �������л�����
	CMFCApplication25View();
	DECLARE_DYNCREATE(CMFCApplication25View)

// ����
public:
	CMFCApplication25Doc* GetDocument() const;

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
	virtual ~CMFCApplication25View();
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

#ifndef _DEBUG  // MFCApplication2(5)View.cpp �еĵ��԰汾
inline CMFCApplication25Doc* CMFCApplication25View::GetDocument() const
   { return reinterpret_cast<CMFCApplication25Doc*>(m_pDocument); }
#endif

