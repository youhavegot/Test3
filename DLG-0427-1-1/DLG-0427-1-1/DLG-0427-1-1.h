
// DLG-0427-1-1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDLG042711App: 
// �йش����ʵ�֣������ DLG-0427-1-1.cpp
//

class CDLG042711App : public CWinApp
{
public:
	CDLG042711App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDLG042711App theApp;