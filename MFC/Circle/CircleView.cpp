// CircleView.cpp : implementation of the CCircleView class
//

#include "stdafx.h"
#include "Circle.h"

#include "CircleDoc.h"
#include "CircleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCircleView

IMPLEMENT_DYNCREATE(CCircleView, CView)

BEGIN_MESSAGE_MAP(CCircleView, CView)
	//{{AFX_MSG_MAP(CCircleView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCircleView construction/destruction

CCircleView::CCircleView()
{
	// TODO: add construction code here

}

CCircleView::~CCircleView()
{
}

BOOL CCircleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCircleView drawing

void CCircleView::OnDraw(CDC* pDC)
{
	CCircleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	RECT rect;
	rect.left=m_PosX-20;
	rect.top=m_PosY-20;
	rect.bottom=m_PosY+20;
	rect.right=m_PosX+20;
	pDC->Ellipse(&rect);
}

/////////////////////////////////////////////////////////////////////////////
// CCircleView printing

BOOL CCircleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCircleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCircleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCircleView diagnostics

#ifdef _DEBUG
void CCircleView::AssertValid() const
{
	CView::AssertValid();
}

void CCircleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCircleDoc* CCircleView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCircleDoc)));
	return (CCircleDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCircleView message handlers

void CCircleView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	CCircleDoc*pDoc=GetDocument();
	m_PosX=pDoc->m_PosX;
	m_PosY=pDoc->m_PosY;
}

void CCircleView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_PosX=point.x;
	m_PosY=point.y;
	Invalidate();
	CCircleDoc*pDoc=GetDocument();
	pDoc->m_PosX=m_PosX;
	pDoc->m_PosY=m_PosY;
	pDoc->SetModifiedFlag(true);
	CView::OnLButtonDown(nFlags, point);
}
