// MyCal.h : main header file for the MYCAL application
//

#if !defined(AFX_MYCAL_H__DE8AAE04_99D3_440E_BB04_796DE73AF042__INCLUDED_)
#define AFX_MYCAL_H__DE8AAE04_99D3_440E_BB04_796DE73AF042__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyCalApp:
// See MyCal.cpp for the implementation of this class
//

class CMyCalApp : public CWinApp
{
public:
	CMyCalApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCalApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyCalApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYCAL_H__DE8AAE04_99D3_440E_BB04_796DE73AF042__INCLUDED_)
