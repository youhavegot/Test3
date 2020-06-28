
// DLG-0427-1-1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DLG-0427-1-1.h"
#include "DLG-0427-1-1Dlg.h"
#include "afxdialogex.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CDLG042711Dlg �Ի���



CDLG042711Dlg::CDLG042711Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG042711_DIALOG, pParent)
	, s(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDLG042711Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, s);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}

BEGIN_MESSAGE_MAP(CDLG042711Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT2, &CDLG042711Dlg::OnEnChangeEdit2)
//	ON_WM_LBUTTONDOWN()
ON_BN_CLICKED(IDC_BUTTON1, &CDLG042711Dlg::OnBnClickedButton1)
ON_BN_CLICKED(IDOK, &CDLG042711Dlg::OnBnClickedOk)
//ON_WM_LBUTTONDOWN()
//ON_WM_SETTINGCHANGE()
ON_LBN_SELCHANGE(IDC_LIST1, &CDLG042711Dlg::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// CDLG042711Dlg ��Ϣ�������

BOOL CDLG042711Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	string s1;
	CString filename = _T("C:\\Users\\Administrator\\Documents\\Visual Studio 2015\\Projects\\DLG-0427-1-1\\ѧ������.txt");
	ifstream ifs(filename);
	while (ifs >> s1) {
		Lbox.AddString(CString(s1.c_str()));
	}

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CDLG042711Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CDLG042711Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
	
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CDLG042711Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDLG042711Dlg::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}





void CDLG042711Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	int r = Lbox.GetCurSel();
	Lbox.DeleteString(r);
	Lbox.InsertString(-1, s);
	UpdateData(false);
}


void CDLG042711Dlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString filename = _T("C:\\Users\\Administrator\\Documents\\Visual Studio 2015\\Projects\\DLG-0427-1-1\\ѧ������.txt");
	ofstream ofs(filename);
	for (int i = 0; i < Lbox.GetCount(); i++) {
		CString cs;
		Lbox.GetText(i, cs);
		ofs << CT2A(cs.GetString())<<endl;
	}
	CDialogEx::OnOK();
}






void CDLG042711Dlg::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int r = Lbox.GetCurSel();
	Lbox.GetText(r, s);
	UpdateData(false);
}
