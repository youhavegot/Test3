
// MFCA-0324-3.h : MFCA-0324-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA03243App:
// �йش����ʵ�֣������ MFCA-0324-3.cpp
//

class CMFCA03243App : public CWinApp
{
public:
	CMFCA03243App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA03243App theApp;
