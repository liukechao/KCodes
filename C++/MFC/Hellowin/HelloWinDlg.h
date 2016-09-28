// HelloWinDlg.h : header file
//

#if !defined(AFX_HELLOWINDLG_H__FF42297C_C71B_4278_8AD6_DDEFB4EE4B32__INCLUDED_)
#define AFX_HELLOWINDLG_H__FF42297C_C71B_4278_8AD6_DDEFB4EE4B32__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CHelloWinDlg dialog

class CHelloWinDlg : public CDialog
{
// Construction
public:
	CHelloWinDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHelloWinDlg)
	enum { IDD = IDD_HELLOWIN_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHelloWinDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHelloWinDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnPrintButton();
	afx_msg void OnExitButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HELLOWINDLG_H__FF42297C_C71B_4278_8AD6_DDEFB4EE4B32__INCLUDED_)
