#pragma once


// PHOTO �Ի���

class PHOTO : public CDialogEx
{
	DECLARE_DYNAMIC(PHOTO)

public:
	PHOTO(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~PHOTO();
	CString pname;
	void draw(CString file);

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};


