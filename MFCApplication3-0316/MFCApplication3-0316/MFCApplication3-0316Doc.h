
// MFCApplication3-0316Doc.h : CMFCApplication30316Doc ��Ľӿ�
//


#pragma once


class CMFCApplication30316Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication30316Doc();
	DECLARE_DYNCREATE(CMFCApplication30316Doc)

// ����
public:
	CRect D_rect; 
	CString D_str;
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
	virtual ~CMFCApplication30316Doc();
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
