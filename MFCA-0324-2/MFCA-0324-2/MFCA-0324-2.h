
// MFCA-0324-2.h : MFCA-0324-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA03242App:
// �йش����ʵ�֣������ MFCA-0324-2.cpp
//

class CMFCA03242App : public CWinApp
{
public:
	CMFCA03242App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA03242App theApp;
