
// MFCView.cpp : CMFCView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC.h"
#endif

#include "MFCSet.h"
#include "MFCDoc.h"
#include "MFCView.h"
#include "ADD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCView

IMPLEMENT_DYNCREATE(CMFCView, CRecordView)

BEGIN_MESSAGE_MAP(CMFCView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCView::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCView::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCView::OnBnClickedButton3)
END_MESSAGE_MAP()

// CMFCView ����/����

CMFCView::CMFCView()
	: CRecordView(IDD_MFC_FORM)
	, id(0)
	, name(_T(""))
	, number(_T(""))
	, c(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, pnumber(_T(""))
	, address(_T(""))
	, ppos(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFCView::~CMFCView()
{
}

void CMFCView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->column8);
}

BOOL CMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFCView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFCSet;
	CRecordView::OnInitialUpdate();

}


// CMFCView ���

#ifdef _DEBUG
void CMFCView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFCView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFCDoc* CMFCView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDoc)));
	return (CMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCView ���ݿ�֧��
CRecordset* CMFCView::OnGetRecordset()
{
	return m_pSet;
}



// CMFCView ��Ϣ�������


void CMFCView::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CMFCView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD adlg;
	if (adlg.DoModal() == IDOK) {
		m_pSet->AddNew();
		m_pSet->m_ID = adlg.id;
		m_pSet->column1 = adlg.name;
		m_pSet->column2 = adlg.number;
		m_pSet->column3 = adlg.c;
		m_pSet->column4 = adlg.sex;
		m_pSet->column5 = adlg.birth;
		m_pSet->column6 = adlg.pnumber;
		m_pSet->column7 = adlg.address;
		m_pSet->column8 = adlg.ppos;
		m_pSet->Update();
		UpdateData(false);

	}
}


void CMFCView::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD adlg;
	if (adlg.DoModal() == IDOK) {
		m_pSet->Edit();
		if(adlg.id!=0)
			m_pSet->m_ID = adlg.id;
		if(adlg.name!= _T(""))
			m_pSet->column1 = adlg.name;
		if (adlg.number != _T(""))
			m_pSet->column2 = adlg.number;
		if (adlg.c != _T(""))
			m_pSet->column3 = adlg.c;
		if (adlg.sex != _T(""))
			m_pSet->column4 = adlg.sex;
		if (adlg.birth != _T(""))
			m_pSet->column5 = adlg.birth;
		if (adlg.pnumber != _T(""))
			m_pSet->column6 = adlg.pnumber;
		if (adlg.address != _T(""))
			m_pSet->column7 = adlg.address;
		if (adlg.ppos != _T(""))
			m_pSet->column8 = adlg.ppos;
		m_pSet->Update();
		UpdateData(false);
	}
}
