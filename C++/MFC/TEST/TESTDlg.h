// TESTDlg.h : header file
//

#if !defined(AFX_TESTDLG_H__09271135_6EA6_4F69_BA9F_428F383A268E__INCLUDED_)
#define AFX_TESTDLG_H__09271135_6EA6_4F69_BA9F_428F383A268E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTESTDlg dialog

class CTESTDlg : public CDialog
{
// Construction
public:
	CTESTDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTESTDlg)
	enum { IDD = IDD_TEST_DIALOG };
	CString	m_TestEdit;
	BOOL	m_VisibleCheck;
	BOOL	m_EnabledCheck;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTESTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTESTDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExitButton();
	afx_msg void OnTestButton();
	afx_msg void OnClearButton();
	afx_msg void OnVisibleCheck();
	afx_msg void OnEnabledCheck();
	afx_msg void OnChangeTestEdit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDLG_H__09271135_6EA6_4F69_BA9F_428F383A268E__INCLUDED_)
