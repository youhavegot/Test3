
// DLG-0427-1-1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CDLG042711Dlg �Ի���
class CDLG042711Dlg : public CDialogEx
{
// ����
public:
	CDLG042711Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG042711_DIALOG };
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
public:
	CString s;
	CListBox Lbox;
	afx_msg void OnEnChangeEdit2();
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnSettingChange(UINT uFlags, LPCTSTR lpszSection);
	afx_msg void OnLbnSelchangeList1();
};
