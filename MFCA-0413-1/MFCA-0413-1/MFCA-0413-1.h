
// MFCA-0413-1.h : MFCA-0413-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA04131App:
// �йش����ʵ�֣������ MFCA-0413-1.cpp
//

class CMFCA04131App : public CWinApp
{
public:
	CMFCA04131App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA04131App theApp;
