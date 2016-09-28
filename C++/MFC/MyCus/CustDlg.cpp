// CustDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyCus.h"
#include "CustDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCustDlg dialog


CCustDlg::CCustDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCustDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCustDlg)
	m_MyDataEdit = _T("");
	//}}AFX_DATA_INIT
}


void CCustDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCustDlg)
	DDX_Text(pDX, IDC_MYDATA_EDIT, m_MyDataEdit);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCustDlg, CDialog)
	//{{AFX_MSG_MAP(CCustDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCustDlg message handlers
