
// MFCA4-0323-0.h : MFCA4-0323-0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA403230App:
// �йش����ʵ�֣������ MFCA4-0323-0.cpp
//

class CMFCA403230App : public CWinApp
{
public:
	CMFCA403230App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA403230App theApp;
