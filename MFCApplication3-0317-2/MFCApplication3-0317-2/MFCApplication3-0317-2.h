
// MFCApplication3-0317-2.h : MFCApplication3-0317-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication303172App:
// �йش����ʵ�֣������ MFCApplication3-0317-2.cpp
//

class CMFCApplication303172App : public CWinApp
{
public:
	CMFCApplication303172App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication303172App theApp;
