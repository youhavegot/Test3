
// CDlg-0421View.h : CCDlg0421View ��Ľӿ�
//

#pragma once


class CCDlg0421View : public CView
{
protected: // �������л�����
	CCDlg0421View();
	DECLARE_DYNCREATE(CCDlg0421View)

// ����
public:
	CCDlg0421Doc* GetDocument() const;

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
	virtual ~CCDlg0421View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
	afx_msg void On32771();
};

#ifndef _DEBUG  // CDlg-0421View.cpp �еĵ��԰汾
inline CCDlg0421Doc* CCDlg0421View::GetDocument() const
   { return reinterpret_cast<CCDlg0421Doc*>(m_pDocument); }
#endif

