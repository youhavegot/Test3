
// MFCA-0413-2.h : MFCA-0413-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA04132App:
// �йش����ʵ�֣������ MFCA-0413-2.cpp
//

class CMFCA04132App : public CWinApp
{
public:
	CMFCA04132App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA04132App theApp;
