
// MFCApplication3-0316.h : MFCApplication3-0316 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication30316App:
// �йش����ʵ�֣������ MFCApplication3-0316.cpp
//

class CMFCApplication30316App : public CWinApp
{
public:
	CMFCApplication30316App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication30316App theApp;
