// MyIEDlg.h : header file
//
//{{AFX_INCLUDES()
#include "webbrowser2.h"
//}}AFX_INCLUDES

#if !defined(AFX_MYIEDLG_H__78D945C6_2FB5_44FA_A724_F04594AC279C__INCLUDED_)
#define AFX_MYIEDLG_H__78D945C6_2FB5_44FA_A724_F04594AC279C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyIEDlg dialog

class CMyIEDlg : public CDialog
{
// Construction
public:
	CMyIEDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyIEDlg)
	enum { IDD = IDD_MYIE_DIALOG };
	CWebBrowser2	m_ie;
	CString	m_UrlEdit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyIEDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyIEDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnOkButton();
	afx_msg void OnWindowSetResizableMyExplorer(BOOL Resizable);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYIEDLG_H__78D945C6_2FB5_44FA_A724_F04594AC279C__INCLUDED_)
