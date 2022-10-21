// JarredBrowserView.h : interface of the CJarredBrowserView class
//

#pragma once


class CJarredBrowserView : public CHtmlView
{
protected: // create from serialization only
	CJarredBrowserView();
	DECLARE_DYNCREATE(CJarredBrowserView)

// Attributes
public:
	CJarredBrowserDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CJarredBrowserView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnButtonBack();
	afx_msg void OnButtonForward();
	afx_msg void OnButton32773();
	afx_msg void OnButtonSearch();
};

#ifndef _DEBUG  // debug version in JarredBrowserView.cpp
inline CJarredBrowserDoc* CJarredBrowserView::GetDocument() const
   { return reinterpret_cast<CJarredBrowserDoc*>(m_pDocument); }
#endif

