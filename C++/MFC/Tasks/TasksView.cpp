// TasksView.cpp : implementation of the CTasksView class
//

#include "stdafx.h"
#include "Tasks.h"

#include "TasksDoc.h"
#include "TasksView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTasksView

IMPLEMENT_DYNCREATE(CTasksView, CFormView)

BEGIN_MESSAGE_MAP(CTasksView, CFormView)
	//{{AFX_MSG_MAP(CTasksView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTasksView construction/destruction

CTasksView::CTasksView()
	: CFormView(CTasksView::IDD)
{
	//{{AFX_DATA_INIT(CTasksView)
	m_Task1Check = FALSE;
	m_Task2Check = FALSE;
	m_Task1Edit = 0;
	m_Task2Edit = 0;
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CTasksView::~CTasksView()
{
}

void CTasksView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTasksView)
	DDX_Check(pDX, IDC_TASK1_CHECK, m_Task1Check);
	DDX_Check(pDX, IDC_TASK2_CHECK, m_Task2Check);
	DDX_Text(pDX, IDC_TASK1_EDIT, m_Task1Edit);
	DDX_Text(pDX, IDC_TASK2_EDIT, m_Task2Edit);
	//}}AFX_DATA_MAP
}

BOOL CTasksView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CTasksView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
	
	m_Task1Check=true;
	m_Task2Check=true;
	UpdateData(false);

}

/////////////////////////////////////////////////////////////////////////////
// CTasksView diagnostics

#ifdef _DEBUG
void CTasksView::AssertValid() const
{
	CFormView::AssertValid();
}

void CTasksView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CTasksDoc* CTasksView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTasksDoc)));
	return (CTasksDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTasksView message handlers
