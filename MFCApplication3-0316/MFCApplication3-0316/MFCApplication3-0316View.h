
// MFCApplication3-0316View.h : CMFCApplication30316View ��Ľӿ�
//

#pragma once


class CMFCApplication30316View : public CView
{
protected: // �������л�����
	CMFCApplication30316View();
	DECLARE_DYNCREATE(CMFCApplication30316View)

// ����
public:
	CMFCApplication30316Doc* GetDocument() const;

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
	virtual ~CMFCApplication30316View();
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
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication3-0316View.cpp �еĵ��԰汾
inline CMFCApplication30316Doc* CMFCApplication30316View::GetDocument() const
   { return reinterpret_cast<CMFCApplication30316Doc*>(m_pDocument); }
#endif

