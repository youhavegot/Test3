
// UsingLib-0428.h : UsingLib-0428 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingLib0428App:
// �йش����ʵ�֣������ UsingLib-0428.cpp
//

class CUsingLib0428App : public CWinApp
{
public:
	CUsingLib0428App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingLib0428App theApp;
