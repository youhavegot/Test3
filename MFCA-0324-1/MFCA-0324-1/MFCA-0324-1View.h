
// MFCA-0324-1View.h : CMFCA03241View ��Ľӿ�
//

#pragma once


class CMFCA03241View : public CView
{
protected: // �������л�����
	CMFCA03241View();
	DECLARE_DYNCREATE(CMFCA03241View)

// ����
public:
	CMFCA03241Doc* GetDocument() const;

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
	virtual ~CMFCA03241View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow01();
};

#ifndef _DEBUG  // MFCA-0324-1View.cpp �еĵ��԰汾
inline CMFCA03241Doc* CMFCA03241View::GetDocument() const
   { return reinterpret_cast<CMFCA03241Doc*>(m_pDocument); }
#endif

