// MemoryView.cpp : implementation of the CMemoryView class
//

#include "stdafx.h"
#include "Memory.h"

#include "MemoryDoc.h"
#include "MemoryView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMemoryView

IMPLEMENT_DYNCREATE(CMemoryView, CView)

BEGIN_MESSAGE_MAP(CMemoryView, CView)
	//{{AFX_MSG_MAP(CMemoryView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMemoryView construction/destruction

CMemoryView::CMemoryView()
{
	// TODO: add construction code here

}

CMemoryView::~CMemoryView()
{
}

BOOL CMemoryView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMemoryView drawing

void CMemoryView::OnDraw(CDC* pDC)
{
	CMemoryDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CString str;
	int x,y;
	double dFree,dUse;
	CRect rect;
	CPen pen;
	CBrush Brush;
	Brush.CreateSolidBrush(RGB(255,0,0));
	pen.CreatePen(PS_SOLID,100,RGB(255,0,0));
	pDC->SelectObject(&pen);
	pDC->SelectObject(&Brush);
	::GlobalMemoryStatus(&mem);
	memTotal=mem.dwTotalPhys;
	Menfree=mem.dwAvailPhys;
	GetClientRect(&rect);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(RADIUS+100,RADIUS+100);
	pDC->SetViewportExt(rect.right/2,-rect.bottom/2);
	pDC->SetViewportOrg(rect.right/2,rect.bottom/2);
	dFree=(double)(PI*2*Menfree/memTotal);
	dUse=(double)PI*2-dFree;
	x=-(int)(sin(dUse)*RADIUS);
	y=(int)(cos(dUse)*RADIUS);
	pDC->Pie(-RADIUS,RADIUS,RADIUS,-RADIUS,0,RADIUS,x,y);
	GetMemoryStr(&str,memTotal,"total");
	pDC->TextOut(300,300,str);
	GetMemoryStr(&str,Menfree,"Left");
	pDC->TextOut(100,200,str);
}

/////////////////////////////////////////////////////////////////////////////
// CMemoryView printing

BOOL CMemoryView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMemoryView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMemoryView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMemoryView diagnostics

#ifdef _DEBUG
void CMemoryView::AssertValid() const
{
	CView::AssertValid();
}

void CMemoryView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMemoryDoc* CMemoryView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMemoryDoc)));
	return (CMemoryDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMemoryView message handlers
void CMemoryView::GetMemoryStr(CString*str,double m_mem,PCSTR strTail)
{
	char m_ch='k';
	m_mem/=1024;
	if(m_mem>1024)
	{
		m_mem/=1024;
		m_ch='M';
	}
	str->Format("%.3f%c%s%s",m_mem,m_ch,"b",strTail);
}