// CircleDoc.h : interface of the CCircleDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLEDOC_H__96B50349_EDEC_41E7_8207_762E353C0315__INCLUDED_)
#define AFX_CIRCLEDOC_H__96B50349_EDEC_41E7_8207_762E353C0315__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCircleDoc : public CDocument
{
protected: // create from serialization only
	CCircleDoc();
	DECLARE_DYNCREATE(CCircleDoc)

// Attributes
public:
	int m_PosX;
	int m_PosY;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCircleDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCircleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCircleDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIRCLEDOC_H__96B50349_EDEC_41E7_8207_762E353C0315__INCLUDED_)
