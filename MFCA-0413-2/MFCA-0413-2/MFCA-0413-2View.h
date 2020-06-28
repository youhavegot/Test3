
// MFCA-0413-2View.h : CMFCA04132View ��Ľӿ�
//

#pragma once


class CMFCA04132View : public CView
{
protected: // �������л�����
	CMFCA04132View();
	DECLARE_DYNCREATE(CMFCA04132View)

// ����
public:
	CMFCA04132Doc* GetDocument() const;

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
	virtual ~CMFCA04132View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFCA-0413-2View.cpp �еĵ��԰汾
inline CMFCA04132Doc* CMFCA04132View::GetDocument() const
   { return reinterpret_cast<CMFCA04132Doc*>(m_pDocument); }
#endif

