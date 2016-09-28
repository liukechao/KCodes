// Tasks.h : main header file for the TASKS application
//

#if !defined(AFX_TASKS_H__C1C44F46_95E1_413D_ADE1_18E9A8062F32__INCLUDED_)
#define AFX_TASKS_H__C1C44F46_95E1_413D_ADE1_18E9A8062F32__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTasksApp:
// See Tasks.cpp for the implementation of this class
//

class CTasksApp : public CWinApp
{
public:
	CTasksApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTasksApp)
	public:
	virtual BOOL InitInstance();
	virtual BOOL OnIdle(LONG lCount);
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTasksApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKS_H__C1C44F46_95E1_413D_ADE1_18E9A8062F32__INCLUDED_)
