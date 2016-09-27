// Speed.h : main header file for the SPEED application
//

#if !defined(AFX_SPEED_H__CCB001F8_4B7E_4DFC_8EC3_40AF11160B9B__INCLUDED_)
#define AFX_SPEED_H__CCB001F8_4B7E_4DFC_8EC3_40AF11160B9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSpeedApp:
// See Speed.cpp for the implementation of this class
//

class CSpeedApp : public CWinApp
{
public:
	CSpeedApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpeedApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSpeedApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPEED_H__CCB001F8_4B7E_4DFC_8EC3_40AF11160B9B__INCLUDED_)
