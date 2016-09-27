// HelloWin.h : main header file for the HELLOWIN application
//

#if !defined(AFX_HELLOWIN_H__CD929621_6921_4D09_81A6_6EB07403BE03__INCLUDED_)
#define AFX_HELLOWIN_H__CD929621_6921_4D09_81A6_6EB07403BE03__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHelloWinApp:
// See HelloWin.cpp for the implementation of this class
//

class CHelloWinApp : public CWinApp
{
public:
	CHelloWinApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHelloWinApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHelloWinApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HELLOWIN_H__CD929621_6921_4D09_81A6_6EB07403BE03__INCLUDED_)
