
// DB-0505Set.cpp : CDB0505Set 类的实现
//

#include "stdafx.h"
#include "DB-0505.h"
#include "DB-0505Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB0505Set 实现

// 代码生成在 2020年5月9日 星期六, 16:37

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CDB0505Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=C:\\Users\\Administrator\\Documents\\Office\x6570\x636e\x5e93\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;PWD=991015;UID=admin;");
}

CString CDB0505Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void CDB0505Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[学号1]"), m_1);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Long(pFX, _T("[年龄]"), column2);
	RFX_Text(pFX, _T("[手机号码]"), column3);

}
/////////////////////////////////////////////////////////////////////////////
// CDB0505Set 诊断

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

