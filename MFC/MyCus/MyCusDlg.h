// MyCusDlg.h : header file
//
#include "CustDlg.h"

#if !defined(AFX_MYCUSDLG_H__ABBB2832_F2EB_453E_A495_B91FFBD7BDA5__INCLUDED_)
#define AFX_MYCUSDLG_H__ABBB2832_F2EB_453E_A495_B91FFBD7BDA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyCusDlg dialog

class CMyCusDlg : public CDialog
{
// Construction
public:
	CMyCusDlg(CWnd* pParent = NULL);	// standard constructor

	CCustDlg m_dlg;

// Dialog Data
	//{{AFX_DATA(CMyCusDlg)
	enum { IDD = IDD_MYCUS_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCusDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyCusDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExitButton();
	afx_msg void OnGetdataButton();
	afx_msg void OnDisplayresultsButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYCUSDLG_H__ABBB2832_F2EB_453E_A495_B91FFBD7BDA5__INCLUDED_)
