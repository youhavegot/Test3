#pragma once
#include "afxwin.h"


// RECORDSET �Ի���

class RECORDSET : public CDialogEx
{
	DECLARE_DYNAMIC(RECORDSET)

public:
	RECORDSET(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RECORDSET();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox lbox;
	virtual BOOL OnInitDialog();
	CString ss[999];
	int k;
};
