#pragma once


// ADD �Ի���

class ADD : public CDialogEx
{
	DECLARE_DYNAMIC(ADD)

public:
	ADD(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long id;
	CString name;
	CString number;
	CString c;
	CString sex;
	CString birth;
	CString pnumber;
	CString address;
	CString ppos;
};
