
// MFCApplication2(2).h : MFCApplication2(2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication22App:
// �йش����ʵ�֣������ MFCApplication2(2).cpp
//

class CMFCApplication22App : public CWinApp
{
public:
	CMFCApplication22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication22App theApp;
