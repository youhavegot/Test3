
// MFCView.h : CMFCView ��Ľӿ�
//

#pragma once

class CMFCSet;

class CMFCView : public CRecordView
{
protected: // �������л�����
	CMFCView();
	DECLARE_DYNCREATE(CMFCView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_FORM };
#endif
	CMFCSet* m_pSet;

// ����
public:
	CMFCDoc* GetDocument() const;

// ����
public:
	void draw(CString file,int idc);
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	long num;
	CString name;
	long age;
	CString sex;
	CString pos;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnPaint();
	afx_msg void On32771();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnSort();
	afx_msg void OnAlter();
	afx_msg void On32775();
	afx_msg void On32774();
	afx_msg void OnRecord();
};

#ifndef _DEBUG  // MFCView.cpp �еĵ��԰汾
inline CMFCDoc* CMFCView::GetDocument() const
   { return reinterpret_cast<CMFCDoc*>(m_pDocument); }
#endif

