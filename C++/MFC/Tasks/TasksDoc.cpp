// TasksDoc.cpp : implementation of the CTasksDoc class
//

#include "stdafx.h"
#include "Tasks.h"

#include "TasksDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTasksDoc

IMPLEMENT_DYNCREATE(CTasksDoc, CDocument)

BEGIN_MESSAGE_MAP(CTasksDoc, CDocument)
	//{{AFX_MSG_MAP(CTasksDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTasksDoc construction/destruction

CTasksDoc::CTasksDoc()
{
	// TODO: add one-time construction code here

}

CTasksDoc::~CTasksDoc()
{
}

BOOL CTasksDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTasksDoc serialization

void CTasksDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTasksDoc diagnostics

#ifdef _DEBUG
void CTasksDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTasksDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTasksDoc commands
