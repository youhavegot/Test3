#pragma once


// ALTER �Ի���

class ALTER : public CDialogEx
{
	DECLARE_DYNAMIC(ALTER)

public:
	ALTER(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ALTER();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long id;
	long num;
	CString name;
	long age;
	CString sex;
	CString pos;
};
