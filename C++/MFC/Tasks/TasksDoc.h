// TasksDoc.h : interface of the CTasksDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TASKSDOC_H__0A9FB296_5C92_45E0_8E3C_3F38FC37FACD__INCLUDED_)
#define AFX_TASKSDOC_H__0A9FB296_5C92_45E0_8E3C_3F38FC37FACD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTasksDoc : public CDocument
{
protected: // create from serialization only
	CTasksDoc();
	DECLARE_DYNCREATE(CTasksDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTasksDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTasksDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTasksDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKSDOC_H__0A9FB296_5C92_45E0_8E3C_3F38FC37FACD__INCLUDED_)
