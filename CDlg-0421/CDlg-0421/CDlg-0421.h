
// CDlg-0421.h : CDlg-0421 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCDlg0421App:
// �йش����ʵ�֣������ CDlg-0421.cpp
//

class CCDlg0421App : public CWinApp
{
public:
	CCDlg0421App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCDlg0421App theApp;
