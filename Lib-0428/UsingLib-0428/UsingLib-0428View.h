
// UsingLib-0428View.h : CUsingLib0428View ��Ľӿ�
//

#pragma once


class CUsingLib0428View : public CView
{
protected: // �������л�����
	CUsingLib0428View();
	DECLARE_DYNCREATE(CUsingLib0428View)

// ����
public:
	CUsingLib0428Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingLib0428View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLib-0428View.cpp �еĵ��԰汾
inline CUsingLib0428Doc* CUsingLib0428View::GetDocument() const
   { return reinterpret_cast<CUsingLib0428Doc*>(m_pDocument); }
#endif

