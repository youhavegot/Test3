
// MFCSet.cpp : CMFCSet ���ʵ��
//

#include "stdafx.h"
#include "MFC.h"
#include "MFCSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCSet ʵ��

// ���������� 2020��5��24�� ������, 23:45

IMPLEMENT_DYNAMIC(CMFCSet, CRecordset)

CMFCSet::CMFCSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMFCSet::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7efc\x5408\x5b9e\x9a8c\x4e00;DBQ=C:\\Users\\Administrator\\Documents\\Office\x6570\x636e\x5e93\\Test1Data.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;PWD=991015;UID=admin;");
}

CString CMFCSet::GetDefaultSQL()
{
	return _T("[��1]");
}

void CMFCSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);

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

