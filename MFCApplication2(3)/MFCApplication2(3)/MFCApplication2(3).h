
// MFCApplication2(3).h : MFCApplication2(3) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication23App:
// �йش����ʵ�֣������ MFCApplication2(3).cpp
//

class CMFCApplication23App : public CWinApp
{
public:
	CMFCApplication23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication23App theApp;
