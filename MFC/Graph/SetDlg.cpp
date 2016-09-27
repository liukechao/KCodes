// SetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Graph.h"
#include "SetDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetDlg dialog


CSetDlg::CSetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSetDlg)
	m_RedRadio = -1;
	//}}AFX_DATA_INIT
}


void CSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetDlg)
	DDX_Radio(pDX, IDC_RED_RADIO, m_RedRadio);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSetDlg, CDialog)
	//{{AFX_MSG_MAP(CSetDlg)
	ON_BN_CLICKED(IDC_BLUE_RADIO, OnBlueRadio)
	ON_BN_CLICKED(IDC_GREEN_RADIO, OnGreenRadio)
	ON_BN_CLICKED(IDC_RED_RADIO, OnRedRadio)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetDlg message handlers

void CSetDlg::OnBlueRadio() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	Invalidate();
}

void CSetDlg::OnGreenRadio() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	Invalidate();
}

void CSetDlg::OnRedRadio() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	Invalidate();
}

void CSetDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	m_RedRadio=PreColor;
	CDialog::OnCancel();
}
