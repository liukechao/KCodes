// MyIE.h : main header file for the MYIE application
//

#if !defined(AFX_MYIE_H__95E9E96E_EFC1_4835_BD6B_87F055E03BDD__INCLUDED_)
#define AFX_MYIE_H__95E9E96E_EFC1_4835_BD6B_87F055E03BDD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyIEApp:
// See MyIE.cpp for the implementation of this class
//

class CMyIEApp : public CWinApp
{
public:
	CMyIEApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyIEApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyIEApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYIE_H__95E9E96E_EFC1_4835_BD6B_87F055E03BDD__INCLUDED_)
