
// DB-0505.h : DB-0505 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDB0505App:
// �йش����ʵ�֣������ DB-0505.cpp
//

class CDB0505App : public CWinAppEx
{
public:
	CDB0505App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDB0505App theApp;
