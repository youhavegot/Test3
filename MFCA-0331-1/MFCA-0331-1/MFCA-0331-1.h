
// MFCA-0331-1.h : MFCA-0331-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCA03311App:
// �йش����ʵ�֣������ MFCA-0331-1.cpp
//

class CMFCA03311App : public CWinApp
{
public:
	CMFCA03311App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCA03311App theApp;