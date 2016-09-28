// MyCaculatorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyCaculator.h"
#include "MyCaculatorDlg.h"

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
// CMyCaculatorDlg dialog

CMyCaculatorDlg::CMyCaculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyCaculatorDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyCaculatorDlg)
	m_display = 0.0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyCaculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyCaculatorDlg)
	DDX_Text(pDX, IDC_EDIT, m_display);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyCaculatorDlg, CDialog)
	//{{AFX_MSG_MAP(CMyCaculatorDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_0_BUTTON, On0Button)
	ON_BN_CLICKED(IDC_CLEAR_BUTTON, OnClearButton)
	ON_BN_CLICKED(IDC_1_BUTTON, On1Button)
	ON_BN_CLICKED(IDC_2_BUTTON, On2Button)
	ON_BN_CLICKED(IDC_3_BUTTON, On3Button)
	ON_BN_CLICKED(IDC_4_BUTTON, On4Button)
	ON_BN_CLICKED(IDC_5_BUTTON, On5Button)
	ON_BN_CLICKED(IDC_6_BUTTON, On6Button)
	ON_BN_CLICKED(IDC_7_BUTTON, On7Button)
	ON_BN_CLICKED(IDC_8_BUTTON, On8Button)
	ON_BN_CLICKED(IDC_9_BUTTON, On9Button)
	ON_BN_CLICKED(IDC_POSITIVEMINUS_BUTTON, OnPositiveminusButton)
	ON_BN_CLICKED(IDC_BACKSPACE_BUTTON, OnBackspaceButton)
	ON_BN_CLICKED(IDC_ADD_BUTTON, OnAddButton)
	ON_BN_CLICKED(IDC_EQUAL_BUTTON, OnEqualButton)
	ON_BN_CLICKED(IDC_DIVIDE_BUTTON, OnDivideButton)
	ON_BN_CLICKED(IDC_MULTIPLY_BUTTON, OnMultiplyButton)
	ON_BN_CLICKED(IDC_REDUCE_BUTTON, OnReduceButton)
	ON_BN_CLICKED(IDC_SQAREROOT_BUTTON, OnSqarerootButton)
	ON_BN_CLICKED(IDC_LOGARITHM_BUTTON, OnLogarithmButton)
	ON_BN_CLICKED(IDC_RECIPROCAL_BUTTON, OnReciprocalButton)
	ON_COMMAND(ID_MENU_ABOUT, OnMenuAbout)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyCaculatorDlg message handlers

BOOL CMyCaculatorDlg::OnInitDialog()
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
	m_display=0;
	UpdateData(false);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyCaculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMyCaculatorDlg::OnPaint() 
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
HCURSOR CMyCaculatorDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyCaculatorDlg::OnClearButton() 
{
	// TODO: Add your control notification handler code here
	m_display=0;
	UpdateData(false);
}

void CMyCaculatorDlg::NumDisplay(double num)
{
	UpdateData(true);
	if(ResetFlag)
		m_display=0;
	m_display=m_display*10+num;
	UpdateData(false);
	ResetFlag=false;
}

void CMyCaculatorDlg::Calc(char op)
{
	UpdateData(true);
	para2=m_display;
	switch(op)
	{
	case '+':m_display=para1+para2;break;
	case '-':m_display=para1-para2;break;
	case '*':m_display=para1*para2;break;
	case '/':m_display=para1/para2;break;
	}
	UpdateData(false);
}

void CMyCaculatorDlg::OnEqualButton() 
{
	// TODO: Add your control notification handler code here
	ResetFlag=true;
	Calc(op);
}

void CMyCaculatorDlg::On0Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(0);
}

void CMyCaculatorDlg::On1Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(1);
}

void CMyCaculatorDlg::On2Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(2);
}


void CMyCaculatorDlg::On3Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(3);
}

void CMyCaculatorDlg::On4Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(4);
}

void CMyCaculatorDlg::On5Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(5);
}

void CMyCaculatorDlg::On6Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(6);
}

void CMyCaculatorDlg::On7Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(7);
}

void CMyCaculatorDlg::On8Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(8);
}

void CMyCaculatorDlg::On9Button() 
{
	// TODO: Add your control notification handler code here
	NumDisplay(9);
}

void CMyCaculatorDlg::OnPositiveminusButton() 
{
	// TODO: Add your control notification handler code here
	m_display=-m_display;
	UpdateData(false);
}

void CMyCaculatorDlg::OnBackspaceButton() 
{
	// TODO: Add your control notification handler code here
	if(ResetFlag==true)
		m_display=0;
	m_display=(long)(m_display)/10;
	UpdateData(false);
}

void CMyCaculatorDlg::OnAddButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	para1=m_display;
	op='+';
	ResetFlag=true;
	UpdateData(false);
}

void CMyCaculatorDlg::OnReduceButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	para1=m_display;
	op='-';
	ResetFlag=true;
	UpdateData(false);
}

void CMyCaculatorDlg::OnMultiplyButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	para1=m_display;
	op='*';
	ResetFlag=true;
	UpdateData(false);
}

void CMyCaculatorDlg::OnDivideButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	para1=m_display;
	op='/';
	ResetFlag=true;
	UpdateData(false);
}

void CMyCaculatorDlg::OnSqarerootButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_display=sqrt(m_display);
	UpdateData(false);
	ResetFlag=true;
}

void CMyCaculatorDlg::OnLogarithmButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_display=log10(m_display);
	UpdateData(false);
	ResetFlag=true;
}

void CMyCaculatorDlg::OnReciprocalButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_display=1/m_display;
	UpdateData(false);
	ResetFlag=true;
}

void CMyCaculatorDlg::OnMenuAbout() 
{
	// TODO: Add your command handler code here
	dlg.DoModal();
}
