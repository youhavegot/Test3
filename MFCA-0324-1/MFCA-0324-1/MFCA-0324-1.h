
// MFCA-0324-1.h : MFCA-0324-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA03241App:
// �йش����ʵ�֣������ MFCA-0324-1.cpp
//

class CMFCA03241App : public CWinApp
{
public:
	CMFCA03241App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA03241App theApp;
