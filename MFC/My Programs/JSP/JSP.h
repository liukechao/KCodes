// JSP.h : main header file for the JSP application
//

#if !defined(AFX_JSP_H__042E9FC9_42F4_4681_8CAA_40F4F03F4C3F__INCLUDED_)
#define AFX_JSP_H__042E9FC9_42F4_4681_8CAA_40F4F03F4C3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJSPApp:
// See JSP.cpp for the implementation of this class
//

class CJSPApp : public CWinApp
{
public:
	CJSPApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJSPApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJSPApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JSP_H__042E9FC9_42F4_4681_8CAA_40F4F03F4C3F__INCLUDED_)
