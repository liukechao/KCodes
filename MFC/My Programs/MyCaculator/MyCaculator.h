// MyCaculator.h : main header file for the MYCACULATOR application
//

#if !defined(AFX_MYCACULATOR_H__FDE363B4_0E99_42A7_9CB5_3BC9A538FA8E__INCLUDED_)
#define AFX_MYCACULATOR_H__FDE363B4_0E99_42A7_9CB5_3BC9A538FA8E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyCaculatorApp:
// See MyCaculator.cpp for the implementation of this class
//

class CMyCaculatorApp : public CWinApp
{
public:
	CMyCaculatorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCaculatorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyCaculatorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYCACULATOR_H__FDE363B4_0E99_42A7_9CB5_3BC9A538FA8E__INCLUDED_)
