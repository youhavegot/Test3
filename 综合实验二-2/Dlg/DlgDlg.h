
// DlgDlg.h : ͷ�ļ�
//

#pragma once


// CDlgDlg �Ի���
class CDlgDlg : public CDialogEx
{
// ����
public:
	CDlgDlg(CWnd* pParent = NULL);	// ��׼���캯��
	void CDlgDlg::draw(CString file);

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
