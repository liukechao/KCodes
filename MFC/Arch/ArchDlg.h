// ArchDlg.h : header file
//

#if !defined(AFX_ARCHDLG_H__653840E6_A661_49D1_8643_C401175C1AC9__INCLUDED_)
#define AFX_ARCHDLG_H__653840E6_A661_49D1_8643_C401175C1AC9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CArchDlg dialog

class CArchDlg : public CDialog
{
// Construction
public:
	CArchDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CArchDlg)
	enum { IDD = IDD_ARCH_DIALOG };
	CString	m_Var1Edit;
	CString	m_Var2Edit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CArchDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CArchDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSaveButton();
	afx_msg void OnLoadButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARCHDLG_H__653840E6_A661_49D1_8643_C401175C1AC9__INCLUDED_)
