
// Dlg-0407-1View.h : CDlg04071View ��Ľӿ�
//

#pragma once


class CDlg04071View : public CView
{
protected: // �������л�����
	CDlg04071View();
	DECLARE_DYNCREATE(CDlg04071View)

// ����
public:
	CDlg04071Doc* GetDocument() const;

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
	virtual ~CDlg04071View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // Dlg-0407-1View.cpp �еĵ��԰汾
inline CDlg04071Doc* CDlg04071View::GetDocument() const
   { return reinterpret_cast<CDlg04071Doc*>(m_pDocument); }
#endif

