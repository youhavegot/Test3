
// Dlg-0407-1.h : Dlg-0407-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg04071App:
// �йش����ʵ�֣������ Dlg-0407-1.cpp
//

class CDlg04071App : public CWinApp
{
public:
	CDlg04071App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg04071App theApp;
