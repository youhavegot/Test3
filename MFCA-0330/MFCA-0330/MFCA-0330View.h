
// MFCA-0330View.h : CMFCA0330View ��Ľӿ�
//

#pragma once


class CMFCA0330View : public CView
{
protected: // �������л�����
	CMFCA0330View();
	DECLARE_DYNCREATE(CMFCA0330View)

// ����
public:
	CMFCA0330Doc* GetDocument() const;

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
	virtual ~CMFCA0330View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCA-0330View.cpp �еĵ��԰汾
inline CMFCA0330Doc* CMFCA0330View::GetDocument() const
   { return reinterpret_cast<CMFCA0330Doc*>(m_pDocument); }
#endif

