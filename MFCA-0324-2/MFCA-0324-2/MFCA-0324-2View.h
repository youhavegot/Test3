
// MFCA-0324-2View.h : CMFCA03242View ��Ľӿ�
//

#pragma once


class CMFCA03242View : public CView
{
protected: // �������л�����
	CMFCA03242View();
	DECLARE_DYNCREATE(CMFCA03242View)

// ����
public:
	CMFCA03242Doc* GetDocument() const;
	
// ����
public:
	CBitmap BM1;
	int BM1_Width, BM1_Height;
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
	virtual ~CMFCA03242View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCA-0324-2View.cpp �еĵ��԰汾
inline CMFCA03242Doc* CMFCA03242View::GetDocument() const
   { return reinterpret_cast<CMFCA03242Doc*>(m_pDocument); }
#endif

