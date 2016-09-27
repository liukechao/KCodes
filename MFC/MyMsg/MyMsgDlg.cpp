// MyMsgDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyMsg.h"
#include "MyMsgDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyMsgDlg dialog

CMyMsgDlg::CMyMsgDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyMsgDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyMsgDlg)
	m_ResultsEdit = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyMsgDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyMsgDlg)
	DDX_Text(pDX, IDC_RESULTS_EDIT, m_ResultsEdit);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyMsgDlg, CDialog)
	//{{AFX_MSG_MAP(CMyMsgDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EXIT_BUTTON, OnExitButton)
	ON_BN_CLICKED(IDC_OKCANCEL_BUTTON, OnOkcancelButton)
	ON_BN_CLICKED(IDC_YESNOCANCEL_BUTTON, OnYesnocancelButton)
	ON_BN_CLICKED(IDC_RETRYCANCEL_BUTTON, OnRetrycancelButton)
	ON_BN_CLICKED(IDC_YESNO_BUTTON, OnYesnoButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyMsgDlg message handlers

BOOL CMyMsgDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyMsgDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyMsgDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyMsgDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyMsgDlg::OnExitButton() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}

void CMyMsgDlg::OnOkcancelButton() 
{
	// TODO: Add your control notification handler code here
	int iResults;
	iResults=MessageBox
		(
			"You want OK and Cancel button.",
			"I am the second parameter of the MessageBox function",
			MB_OKCANCEL+MB_ICONSTOP
		);
	if(iResults==IDOK)
	{
		m_ResultsEdit="You clicked the OK button!";
		UpdateData(false);
	}
	if(iResults==IDCANCEL)
	{
		m_ResultsEdit="You clicked the Cancel button!";
		UpdateData(false);
	}
}

void CMyMsgDlg::OnYesnocancelButton() 
{
	// TODO: Add your control notification handler code here
	int iResults;
	iResults=MessageBox
		(
			"You want Yes,No and Cancel buttons.",
			"I am the second parameter of the MessageBox function",
			MB_YESNOCANCEL+MB_ICONINFORMATION
		);
	if(iResults==IDYES)
	{
		m_ResultsEdit="You clicked the Yes button!";
		UpdateData(false);
	}
	if(iResults==IDNO)
	{
		m_ResultsEdit="You clicked the No button!";
		UpdateData(false);
	}
	if(iResults==IDCANCEL)
	{
		m_ResultsEdit="You clicked the Cancel button!";
		UpdateData(false);
	}

}

void CMyMsgDlg::OnRetrycancelButton() 
{
	// TODO: Add your control notification handler code here
	int iResults;
	iResults=MessageBox
		(
			"You want Retry and Cancel buttons.",
			"I am the second parameter of the MessageBox function",
			MB_RETRYCANCEL+MB_ICONQUESTION
		);
	if(iResults==IDRETRY)
	{
		m_ResultsEdit="You clicked the Retry button!";
		UpdateData(false);
	}
	if(iResults==IDCANCEL)
	{
		m_ResultsEdit="You clicked the Cancel button!";
		UpdateData(false);
	}

}

void CMyMsgDlg::OnYesnoButton() 
{
	// TODO: Add your control notification handler code here
	int iResults;
	iResults=MessageBox
		(
			"You want Yes and No Buttons.",
			"I am the second parameter of the MessageBox function",
			MB_YESNO+MB_ICONEXCLAMATION
		);
	if(iResults==IDYES)
	{
		m_ResultsEdit="You clicked the Yes button!";
		UpdateData(false);
	}
	if(iResults==IDNO)
	{
		m_ResultsEdit="You clicked the No button!";
		UpdateData(false);
	}
}
