
// JarredBrowserView.cpp : implementation of the CJarredBrowserView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "JarredBrowser.h"
#endif

#include "JarredBrowserDoc.h"
#include "JarredBrowserView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJarredBrowserView

IMPLEMENT_DYNCREATE(CJarredBrowserView, CHtmlView)

BEGIN_MESSAGE_MAP(CJarredBrowserView, CHtmlView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_BUTTON_BACK, &CJarredBrowserView::OnButtonBack)
	ON_COMMAND(ID_BUTTON_FORWARD, &CJarredBrowserView::OnButtonForward)
	ON_COMMAND(ID_BUTTON32773, &CJarredBrowserView::OnButton32773)
	ON_COMMAND(ID_BUTTON_SEARCH, &CJarredBrowserView::OnButtonSearch)
END_MESSAGE_MAP()

// CJarredBrowserView construction/destruction

CJarredBrowserView::CJarredBrowserView()
{
	// TODO: add construction code here

}

CJarredBrowserView::~CJarredBrowserView()
{
}

BOOL CJarredBrowserView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

void CJarredBrowserView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("https://www.google.com/"),NULL,NULL);
}


// CJarredBrowserView printing


void CJarredBrowserView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}


void CJarredBrowserView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CJarredBrowserView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CJarredBrowserView diagnostics

#ifdef _DEBUG
void CJarredBrowserView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CJarredBrowserView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CJarredBrowserDoc* CJarredBrowserView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJarredBrowserDoc)));
	return (CJarredBrowserDoc*)m_pDocument;
}
#endif //_DEBUG


// CJarredBrowserView message handlers


void CJarredBrowserView::OnButtonBack()
{
	// TODO: Add your command handler code here
	GoBack();
}


void CJarredBrowserView::OnButtonForward()
{
	// TODO: Add your command handler code here
	GoForward();
}


void CJarredBrowserView::OnButton32773()
{
	// TODO: Add your command handler code here
	GoBack();
}


void CJarredBrowserView::OnButtonSearch()
{
	// TODO: Add your command handler code here
	GoSearch();
}
