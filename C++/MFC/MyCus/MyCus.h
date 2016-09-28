// MyCus.h : main header file for the MYCUS application
//

#if !defined(AFX_MYCUS_H__6AEA0AB2_0981_424D_A828_ACB4F25AC365__INCLUDED_)
#define AFX_MYCUS_H__6AEA0AB2_0981_424D_A828_ACB4F25AC365__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyCusApp:
// See MyCus.cpp for the implementation of this class
//

class CMyCusApp : public CWinApp
{
public:
	CMyCusApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCusApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyCusApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYCUS_H__6AEA0AB2_0981_424D_A828_ACB4F25AC365__INCLUDED_)
