
// MFCApplication3-0317-3.h : MFCApplication3-0317-3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication303173App:
// �йش����ʵ�֣������ MFCApplication3-0317-3.cpp
//

class CMFCApplication303173App : public CWinApp
{
public:
	CMFCApplication303173App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication303173App theApp;
