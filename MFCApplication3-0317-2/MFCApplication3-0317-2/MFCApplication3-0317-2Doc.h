
// MFCApplication3-0317-2Doc.h : CMFCApplication303172Doc ��Ľӿ�
//


#pragma once


class CMFCApplication303172Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication303172Doc();
	DECLARE_DYNCREATE(CMFCApplication303172Doc)

// ����
public:
	CRect rect; int x,y;
// ����
public:

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
	virtual ~CMFCApplication303172Doc();
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
