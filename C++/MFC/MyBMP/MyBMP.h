// MyBMP.h : main header file for the MYBMP application
//

#if !defined(AFX_MYBMP_H__BF606078_0DBC_49CD_B03A_A99F2D435E89__INCLUDED_)
#define AFX_MYBMP_H__BF606078_0DBC_49CD_B03A_A99F2D435E89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyBMPApp:
// See MyBMP.cpp for the implementation of this class
//

class CMyBMPApp : public CWinApp
{
public:
	CMyBMPApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyBMPApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyBMPApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYBMP_H__BF606078_0DBC_49CD_B03A_A99F2D435E89__INCLUDED_)
