
// MFCApplication3-0317-3View.h : CMFCApplication303173View ��Ľӿ�
//

#pragma once


class CMFCApplication303173View : public CView
{
protected: // �������л�����
	CMFCApplication303173View();
	DECLARE_DYNCREATE(CMFCApplication303173View)

// ����
public:
	CMFCApplication303173Doc* GetDocument() const;
	BOOL con[99];
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
	virtual ~CMFCApplication303173View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
//	afx_msg void OnDestroy();
};

#ifndef _DEBUG  // MFCApplication3-0317-3View.cpp �еĵ��԰汾
inline CMFCApplication303173Doc* CMFCApplication303173View::GetDocument() const
   { return reinterpret_cast<CMFCApplication303173Doc*>(m_pDocument); }
#endif

