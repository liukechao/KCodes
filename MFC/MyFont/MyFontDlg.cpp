// MyFontDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyFont.h"
#include "MyFontDlg.h"

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
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyFontDlg dialog

CMyFontDlg::CMyFontDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyFontDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyFontDlg)
	m_DataEdit = _T("");
	m_SizeRadio = -1;
	m_ShadowCheck = FALSE;
	m_TypeRadio = -1;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyFontDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyFontDlg)
	DDX_Text(pDX, IDC_DATA_EDIT, m_DataEdit);
	DDX_Radio(pDX, IDC_25_RADIO, m_SizeRadio);
	DDX_Check(pDX, IDC_SHADOW_CHECK, m_ShadowCheck);
	DDX_Radio(pDX, IDC_ARIAL_RADIO, m_TypeRadio);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyFontDlg, CDialog)
	//{{AFX_MSG_MAP(CMyFontDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EXIT_BUTTON, OnExitButton)
	ON_EN_CHANGE(IDC_DATA_EDIT, OnChangeDataEdit)
	ON_BN_CLICKED(IDC_25_RADIO, On25Radio)
	ON_BN_CLICKED(IDC_75_RADIO, On75Radio)
	ON_BN_CLICKED(IDC_50_RADIO, On50Radio)
	ON_BN_CLICKED(IDC_100_RADIO, On100Radio)
	ON_BN_CLICKED(IDC_SHADOW_CHECK, OnShadowCheck)
	ON_BN_CLICKED(IDC_ARIAL_RADIO, OnArialRadio)
	ON_BN_CLICKED(IDC_ALGERIAN_RADIO, OnAlgerianRadio)
	ON_BN_CLICKED(IDC_BROADWAY_RADIO, OnBroadwayRadio)
	ON_BN_CLICKED(IDC_CHILLER_RADIO, OnChillerRadio)
	ON_BN_CLICKED(IDC_MISTRAL_RADIO, OnMistralRadio)
	ON_BN_CLICKED(IDC_ONYX_RADIO, OnOnyxRadio)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyFontDlg message handlers

BOOL CMyFontDlg::OnInitDialog()
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
	m_SizeRadio=0;
	m_TypeRadio=0;
	UpdateData(false);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyFontDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMyFontDlg::OnPaint() 
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
		//MessageBeep((WORD)-1);
		CPaintDC dc(this);
		UpdateData(true);
		dc.SetBkMode(TRANSPARENT);
		CFont MyFont;
		CString font_type;
		switch(m_TypeRadio)
		{
		case 0:font_type="Arial";break;
		case 1:font_type="Algerian";break;
		case 2:font_type="Broadway";break;
		case 3:font_type="Chiller";break;
		case 4:font_type="Mistral";break;
		case 5:font_type="Onyx";break;
		}
		
		MyFont.CreateFont(25+25*m_SizeRadio,0,0,0,400,false,false,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,
			CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH|FF_SWISS,font_type);
		CFont*pOldFont=dc.SelectObject(&MyFont);
		
		if(m_ShadowCheck==true)
		{
			dc.SetTextColor(RGB(255,0,0));
			dc.TextOut(140,120,m_DataEdit);
		}

		dc.SetTextColor(RGB(0,255,0));
		dc.TextOut(140+2,120+2,m_DataEdit);
		dc.SelectObject(pOldFont);

		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyFontDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyFontDlg::OnExitButton() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}

void CMyFontDlg::OnChangeDataEdit() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	Invalidate();
}


void CMyFontDlg::On25Radio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::On75Radio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::On50Radio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::On100Radio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnShadowCheck() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnArialRadio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnAlgerianRadio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnBroadwayRadio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnChillerRadio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnMistralRadio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}

void CMyFontDlg::OnOnyxRadio() 
{
	// TODO: Add your control notification handler code here
	Invalidate();
}
