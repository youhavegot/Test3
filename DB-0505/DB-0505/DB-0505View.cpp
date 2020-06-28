
// DB-0505View.cpp : CDB0505View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "DB-0505.h"
#endif

#include "DB-0505Set.h"
#include "DB-0505Doc.h"
#include "DB-0505View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0505View

IMPLEMENT_DYNCREATE(CDB0505View, CRecordView)

BEGIN_MESSAGE_MAP(CDB0505View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDB0505View ����/����

CDB0505View::CDB0505View()
	: CRecordView(IDD_DB0505_FORM)
	, ID(0)
	, number(_T(""))
	, name(_T(""))
	, age(_T(""))
	, pnumber(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CDB0505View::~CDB0505View()
{
}

void CDB0505View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column3);
}

BOOL CDB0505View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CDB0505View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_DB0505Set;
	CRecordView::OnInitialUpdate();

}


// CDB0505View ��ӡ

BOOL CDB0505View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CDB0505View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CDB0505View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CDB0505View ���

#ifdef _DEBUG
void CDB0505View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDB0505View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDB0505Doc* CDB0505View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDB0505Doc)));
	return (CDB0505Doc*)m_pDocument;
}
#endif //_DEBUG


// CDB0505View ���ݿ�֧��
CRecordset* CDB0505View::OnGetRecordset()
{
	return m_pSet;
}



// CDB0505View ��Ϣ�������
