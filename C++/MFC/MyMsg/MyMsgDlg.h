// MyMsgDlg.h : header file
//

#if !defined(AFX_MYMSGDLG_H__089C9617_6662_4465_9B4F_4F81A3F9E868__INCLUDED_)
#define AFX_MYMSGDLG_H__089C9617_6662_4465_9B4F_4F81A3F9E868__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyMsgDlg dialog

class CMyMsgDlg : public CDialog
{
// Construction
public:
	CMyMsgDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyMsgDlg)
	enum { IDD = IDD_MYMSG_DIALOG };
	CString	m_ResultsEdit;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyMsgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyMsgDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExitButton();
	afx_msg void OnOkcancelButton();
	afx_msg void OnYesnocancelButton();
	afx_msg void OnRetrycancelButton();
	afx_msg void OnYesnoButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYMSGDLG_H__089C9617_6662_4465_9B4F_4F81A3F9E868__INCLUDED_)
