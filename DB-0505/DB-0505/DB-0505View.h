
// DB-0505View.h : CDB0505View ��Ľӿ�
//

#pragma once

class CDB0505Set;

class CDB0505View : public CRecordView
{
protected: // �������л�����
	CDB0505View();
	DECLARE_DYNCREATE(CDB0505View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB0505_FORM };
#endif
	CDB0505Set* m_pSet;

// ����
public:
	CDB0505Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CDB0505View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString number;
	CString name;
	CString age;
	CString pnumber;
};

#ifndef _DEBUG  // DB-0505View.cpp �еĵ��԰汾
inline CDB0505Doc* CDB0505View::GetDocument() const
   { return reinterpret_cast<CDB0505Doc*>(m_pDocument); }
#endif

