#pragma once


// SORT �Ի���

class SORT : public CDialogEx
{
	DECLARE_DYNAMIC(SORT)

public:
	SORT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SORT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString comd;
};
