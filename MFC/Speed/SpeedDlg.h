// SpeedDlg.h : header file
//

#if !defined(AFX_SPEEDDLG_H__C6FF192B_57F4_422C_A932_BD27A20A09F1__INCLUDED_)
#define AFX_SPEEDDLG_H__C6FF192B_57F4_422C_A932_BD27A20A09F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSpeedDlg dialog

class CSpeedDlg : public CDialog
{
// Construction
public:
	CSpeedDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSpeedDlg)
	enum { IDD = IDD_SPEED_DIALOG };
	int		m_SpeedEdit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpeedDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSpeedDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeSpeedEdit();
	afx_msg void OnFileCurrentspeed();
	afx_msg void OnFileExit();
	afx_msg void OnHelpAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPEEDDLG_H__C6FF192B_57F4_422C_A932_BD27A20A09F1__INCLUDED_)
