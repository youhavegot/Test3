
// DB-0505Doc.h : CDB0505Doc ��Ľӿ�
//


#pragma once
#include "DB-0505Set.h"


class CDB0505Doc : public CDocument
{
protected: // �������л�����
	CDB0505Doc();
	DECLARE_DYNCREATE(CDB0505Doc)

// ����
public:
	CDB0505Set m_DB0505Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CDB0505Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
