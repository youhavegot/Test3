
// MFCSet.cpp : CMFCSet ���ʵ��
//

#include "stdafx.h"
#include "MFC.h"
#include "MFCSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCSet ʵ��

// ���������� 2020��5��26�� ���ڶ�, 16:20

IMPLEMENT_DYNAMIC(CMFCSet, CRecordset)

CMFCSet::CMFCSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = L"";
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFCSet::GetDefaultConnect()
{
	return _T("DSN=\x7efc\x5408\x5b9e\x9a8c;DBQ=C:\\USERS\\Administrator\\Documents\\Office\x6570\x636e\x5e93\\\x7efc\x5408\x5b9e\x9a8c\x6570\x636e\x5e93.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;PWD=991015;UID=admin;");
}

CString CMFCSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CMFCSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[��������]"), column5);
	RFX_Text(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭ�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CMFCSet ���

#ifdef _DEBUG
void CMFCSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMFCSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

