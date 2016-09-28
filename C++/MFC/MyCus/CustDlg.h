#if !defined(AFX_CUSTDLG_H__2CB70760_C2BE_4BFF_9C04_3E4BDB6C88C2__INCLUDED_)
#define AFX_CUSTDLG_H__2CB70760_C2BE_4BFF_9C04_3E4BDB6C88C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CustDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCustDlg dialog

class CCustDlg : public CDialog
{
// Construction
public:
	CCustDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCustDlg)
	enum { IDD = IDD_CUSTOM_DIALOG };
	CString	m_MyDataEdit;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCustDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCustDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUSTDLG_H__2CB70760_C2BE_4BFF_9C04_3E4BDB6C88C2__INCLUDED_)
