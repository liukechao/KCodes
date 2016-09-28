#if !defined(AFX_SETDLG_H__1362E82A_70F8_4129_B33E_2249B06F21E7__INCLUDED_)
#define AFX_SETDLG_H__1362E82A_70F8_4129_B33E_2249B06F21E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSetDlg dialog

class CSetDlg : public CDialog
{
// Construction
public:
	CSetDlg(CWnd* pParent = NULL);   // standard constructor
	
	int PreColor;
// Dialog Data
	//{{AFX_DATA(CSetDlg)
	enum { IDD = IDD_CUSTOM_DIALOG };
	int		m_RedRadio;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSetDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSetDlg)
	afx_msg void OnBlueRadio();
	afx_msg void OnGreenRadio();
	afx_msg void OnRedRadio();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETDLG_H__1362E82A_70F8_4129_B33E_2249B06F21E7__INCLUDED_)
