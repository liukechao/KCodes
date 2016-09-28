// MyFontDlg.h : header file
//

#if !defined(AFX_MYFONTDLG_H__745D5ACE_512D_4A15_9191_AF285E8E1750__INCLUDED_)
#define AFX_MYFONTDLG_H__745D5ACE_512D_4A15_9191_AF285E8E1750__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyFontDlg dialog

class CMyFontDlg : public CDialog
{
// Construction
public:
	CMyFontDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyFontDlg)
	enum { IDD = IDD_MYFONT_DIALOG };
	CString	m_DataEdit;
	int		m_SizeRadio;
	BOOL	m_ShadowCheck;
	int		m_TypeRadio;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyFontDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyFontDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExitButton();
	afx_msg void OnChangeDataEdit();
	afx_msg void On25Radio();
	afx_msg void On75Radio();
	afx_msg void On50Radio();
	afx_msg void On100Radio();
	afx_msg void OnShadowCheck();
	afx_msg void OnArialRadio();
	afx_msg void OnAlgerianRadio();
	afx_msg void OnBroadwayRadio();
	afx_msg void OnChillerRadio();
	afx_msg void OnMistralRadio();
	afx_msg void OnYouyuanRadio();
	afx_msg void OnOnyxRadio();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFONTDLG_H__745D5ACE_512D_4A15_9191_AF285E8E1750__INCLUDED_)
