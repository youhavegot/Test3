
// MFCApplication3-0317.h : MFCApplication3-0317 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication30317App:
// �йش����ʵ�֣������ MFCApplication3-0317.cpp
//

class CMFCApplication30317App : public CWinApp
{
public:
	CMFCApplication30317App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication30317App theApp;
