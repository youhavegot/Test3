
// MFCA-0330.h : MFCA-0330 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA0330App:
// �йش����ʵ�֣������ MFCA-0330.cpp
//

class CMFCA0330App : public CWinApp
{
public:
	CMFCA0330App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA0330App theApp;
