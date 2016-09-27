// Tasks.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Tasks.h"

#include "MainFrm.h"
#include "TasksDoc.h"
#include "TasksView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTasksApp

BEGIN_MESSAGE_MAP(CTasksApp, CWinApp)
	//{{AFX_MSG_MAP(CTasksApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTasksApp construction

CTasksApp::CTasksApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CTasksApp object

CTasksApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CTasksApp initialization

BOOL CTasksApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	// Change the registry key under which our settings are stored.
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization.
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	LoadStdProfileSettings();  // Load standard INI file options (including MRU)

	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views.

	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CTasksDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CTasksView));
	AddDocTemplate(pDocTemplate);

	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);

	// Dispatch commands specified on the command line
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;

	// The one and only window has been initialized, so show and update it.
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}


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
		// No message handlers
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

// App command to run the dialog
void CTasksApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

/////////////////////////////////////////////////////////////////////////////
// CTasksApp message handlers


BOOL CTasksApp::OnIdle(LONG lCount) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CWinApp::OnIdle(lCount);
	POSITION pos=GetFirstDocTemplatePosition();
	CDocTemplate *pDocTemplate=GetNextDocTemplate(pos);
	pos=pDocTemplate->GetFirstDocPosition();
	CDocument *pDoc=pDocTemplate->GetNextDoc(pos);
	pos=pDoc->GetFirstViewPosition();
	CTasksView *pView=(CTasksView*)pDoc->GetNextView(pos);
	static DWORD PrevTimeTask1=0;
	static DWORD PrevTimeTask2=0;
	DWORD CurrentTime=GetTickCount();
	pView->UpdateData(true);

	if(CurrentTime>PrevTimeTask1+50 && pView->m_Task1Check)
	{
		pView->m_Task1Edit++;
		pView->UpdateData(false);
		PrevTimeTask1=CurrentTime;
	}

	if(CurrentTime>PrevTimeTask2+500 && pView->m_Task2Check)
	{
		pView->m_Task2Edit++;
		pView->UpdateData(false);
		PrevTimeTask2=CurrentTime;
	}

	return CWinApp::OnIdle(lCount);
}
