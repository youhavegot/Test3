#pragma once


// SEARCH �Ի���

class SEARCH : public CDialogEx
{
	DECLARE_DYNAMIC(SEARCH)

public:
	SEARCH(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SEARCH();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString comd;
};
