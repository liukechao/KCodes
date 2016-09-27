// MyBMPDlg.h : header file
//

#if !defined(AFX_MYBMPDLG_H__2B094C53_53AE_4338_BD3D_BB748845547F__INCLUDED_)
#define AFX_MYBMPDLG_H__2B094C53_53AE_4338_BD3D_BB748845547F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyBMPDlg dialog

class CMyBMPDlg : public CDialog
{
// Construction
public:
	CMyBMPDlg(CWnd* pParent = NULL);	// standard constructor
	
	int m_Width;
	int m_Height;

// Dialog Data
	//{{AFX_DATA(CMyBMPDlg)
	enum { IDD = IDD_MYBMP_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyBMPDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyBMPDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnFileExit();
	afx_msg void OnHelpAbout();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYBMPDLG_H__2B094C53_53AE_4338_BD3D_BB748845547F__INCLUDED_)
