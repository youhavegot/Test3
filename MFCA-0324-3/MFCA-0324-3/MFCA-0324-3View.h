
// MFCA-0324-3View.h : CMFCA03243View ��Ľӿ�
//

#pragma once


class CMFCA03243View : public CView
{
protected: // �������л�����
	CMFCA03243View();
	DECLARE_DYNCREATE(CMFCA03243View)

// ����
public:
	CMFCA03243Doc* GetDocument() const;

// ����
public:
	BOOL set[3]; int n = 3;
	CPoint point1, point2;
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
	virtual ~CMFCA03243View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawli();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDrawre();
	afx_msg void OnDrawro();
};

#ifndef _DEBUG  // MFCA-0324-3View.cpp �еĵ��԰汾
inline CMFCA03243Doc* CMFCA03243View::GetDocument() const
   { return reinterpret_cast<CMFCA03243Doc*>(m_pDocument); }
#endif

