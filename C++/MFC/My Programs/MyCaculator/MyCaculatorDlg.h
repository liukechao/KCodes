// MyCaculatorDlg.h : header file
//
#include<math.h>
#include"AboutDlg.h"
#if !defined(AFX_MYCACULATORDLG_H__796C3E03_7EAC_458C_8621_201B5251C70A__INCLUDED_)
#define AFX_MYCACULATORDLG_H__796C3E03_7EAC_458C_8621_201B5251C70A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyCaculatorDlg dialog

class CMyCaculatorDlg : public CDialog
{
// Construction
public:
	CMyCaculatorDlg(CWnd* pParent = NULL);	// standard constructor
	void NumDisplay(double num);
	void Calc(char op);
	double para1,para2;
	char op;
	bool ResetFlag;
	AboutDlg dlg;
// Dialog Data
	//{{AFX_DATA(CMyCaculatorDlg)
	enum { IDD = IDD_MYCACULATOR_DIALOG };
	double	m_display;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyCaculatorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyCaculatorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void On0Button();
	afx_msg void OnClearButton();
	afx_msg void On1Button();
	afx_msg void On2Button();
	afx_msg void On3Button();
	afx_msg void On4Button();
	afx_msg void On5Button();
	afx_msg void On6Button();
	afx_msg void On7Button();
	afx_msg void On8Button();
	afx_msg void On9Button();
	afx_msg void OnPositiveminusButton();
	afx_msg void OnBackspaceButton();
	afx_msg void OnAddButton();
	afx_msg void OnEqualButton();
	afx_msg void OnDivideButton();
	afx_msg void OnMultiplyButton();
	afx_msg void OnReduceButton();
	afx_msg void OnSqarerootButton();
	afx_msg void OnLogarithmButton();
	afx_msg void OnReciprocalButton();
	afx_msg void OnMenuAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYCACULATORDLG_H__796C3E03_7EAC_458C_8621_201B5251C70A__INCLUDED_)
