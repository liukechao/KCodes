// CircleDoc.cpp : implementation of the CCircleDoc class
//

#include "stdafx.h"
#include "Circle.h"

#include "CircleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCircleDoc

IMPLEMENT_DYNCREATE(CCircleDoc, CDocument)

BEGIN_MESSAGE_MAP(CCircleDoc, CDocument)
	//{{AFX_MSG_MAP(CCircleDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCircleDoc construction/destruction

CCircleDoc::CCircleDoc()
{
	// TODO: add one-time construction code here

}

CCircleDoc::~CCircleDoc()
{
}

BOOL CCircleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	m_PosX=200;
	m_PosY=100;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCircleDoc serialization

void CCircleDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
		ar<<m_PosX;
		ar<<m_PosY;
	}
	else
	{
		// TODO: add loading code here
		ar>>m_PosX;
		ar>>m_PosY;
	}
}

/////////////////////////////////////////////////////////////////////////////
// CCircleDoc diagnostics

#ifdef _DEBUG
void CCircleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCircleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCircleDoc commands
