
// MFCA-0331-1Doc.h : CMFCA03311Doc ��Ľӿ�
//


#pragma once


class CMFCA03311Doc : public CDocument
{
protected: // �������л�����
	CMFCA03311Doc();
	DECLARE_DYNCREATE(CMFCA03311Doc)

// ����
public:

// ����
public:
	CRect cr; CString s;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCA03311Doc();
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
