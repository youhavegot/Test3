
// MFCA4-0323-0View.h : CMFCA403230View ��Ľӿ�
//

#pragma once


class CMFCA403230View : public CView
{
protected: // �������л�����
	CMFCA403230View();
	DECLARE_DYNCREATE(CMFCA403230View)

// ����
public:
	CMFCA403230Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCA403230View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowround();
};

#ifndef _DEBUG  // MFCA4-0323-0View.cpp �еĵ��԰汾
inline CMFCA403230Doc* CMFCA403230View::GetDocument() const
   { return reinterpret_cast<CMFCA403230Doc*>(m_pDocument); }
#endif

