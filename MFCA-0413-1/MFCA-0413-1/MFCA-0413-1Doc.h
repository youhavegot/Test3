
// MFCA-0413-1Doc.h : CMFCA04131Doc ��Ľӿ�
//


#pragma once


class CMFCA04131Doc : public CDocument
{
protected: // �������л�����
	CMFCA04131Doc();
	DECLARE_DYNCREATE(CMFCA04131Doc)

// ����
public:

// ����
public:
	CRect cr; CPoint cp;
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
	virtual ~CMFCA04131Doc();
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
