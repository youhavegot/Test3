
// MFCApplication3-0317-3Doc.h : CMFCApplication303173Doc 类的接口
//


#pragma once


class CMFCApplication303173Doc : public CDocument
{
protected: // 仅从序列化创建
	CMFCApplication303173Doc();
	DECLARE_DYNCREATE(CMFCApplication303173Doc)

// 特性
public:
	CArray<CRect, CRect> ccr; int n = 4;
// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMFCApplication303173Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
