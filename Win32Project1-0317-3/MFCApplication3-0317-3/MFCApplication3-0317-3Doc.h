
// MFCApplication3-0317-3Doc.h : CMFCApplication303173Doc ��Ľӿ�
//


#pragma once


class CMFCApplication303173Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication303173Doc();
	DECLARE_DYNCREATE(CMFCApplication303173Doc)

// ����
public:
	CArray<CRect, CRect> ccr; int n = 4;
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
	virtual ~CMFCApplication303173Doc();
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
