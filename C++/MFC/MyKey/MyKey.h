// MyKey.h : main header file for the MYKEY application
//

#if !defined(AFX_MYKEY_H__50F0E262_9BE4_408A_995B_FAFEA689A214__INCLUDED_)
#define AFX_MYKEY_H__50F0E262_9BE4_408A_995B_FAFEA689A214__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyKeyApp:
// See MyKey.cpp for the implementation of this class
//

class CMyKeyApp : public CWinApp
{
public:
	CMyKeyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyKeyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyKeyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYKEY_H__50F0E262_9BE4_408A_995B_FAFEA689A214__INCLUDED_)
