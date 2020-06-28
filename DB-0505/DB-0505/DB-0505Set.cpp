
// DB-0505Set.cpp : CDB0505Set ���ʵ��
//

#include "stdafx.h"
#include "DB-0505.h"
#include "DB-0505Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0505Set ʵ��

// ���������� 2020��5��9�� ������, 16:37

IMPLEMENT_DYNAMIC(CDB0505Set, CRecordset)

CDB0505Set::CDB0505Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	column1 = L"";
	column2 = 0;
	column3 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CDB0505Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=C:\\Users\\Administrator\\Documents\\Office\x6570\x636e\x5e93\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;PWD=991015;UID=admin;");
}

CString CDB0505Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CDB0505Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[ѧ��1]"), m_1);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Long(pFX, _T("[����]"), column2);
	RFX_Text(pFX, _T("[�ֻ�����]"), column3);

}
/////////////////////////////////////////////////////////////////////////////
// CDB0505Set ���

#ifdef _DEBUG
void CDB0505Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CDB0505Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

