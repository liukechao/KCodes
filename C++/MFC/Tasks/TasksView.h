// TasksView.h : interface of the CTasksView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TASKSVIEW_H__25E69C15_6309_4E6F_8E04_45779FBF2DF9__INCLUDED_)
#define AFX_TASKSVIEW_H__25E69C15_6309_4E6F_8E04_45779FBF2DF9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTasksView : public CFormView
{
protected: // create from serialization only
	CTasksView();
	DECLARE_DYNCREATE(CTasksView)

public:
	//{{AFX_DATA(CTasksView)
	enum { IDD = IDD_TASKS_FORM };
	BOOL	m_Task1Check;
	BOOL	m_Task2Check;
	long	m_Task1Edit;
	long	m_Task2Edit;
	//}}AFX_DATA

// Attributes
public:
	CTasksDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTasksView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTasksView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTasksView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TasksView.cpp
inline CTasksDoc* CTasksView::GetDocument()
   { return (CTasksDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKSVIEW_H__25E69C15_6309_4E6F_8E04_45779FBF2DF9__INCLUDED_)
