// Arch.h : main header file for the ARCH application
//

#if !defined(AFX_ARCH_H__7273FAE1_D388_4B92_8D46_95243425A82E__INCLUDED_)
#define AFX_ARCH_H__7273FAE1_D388_4B92_8D46_95243425A82E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CArchApp:
// See Arch.cpp for the implementation of this class
//

class CArchApp : public CWinApp
{
public:
	CArchApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CArchApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CArchApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARCH_H__7273FAE1_D388_4B92_8D46_95243425A82E__INCLUDED_)
