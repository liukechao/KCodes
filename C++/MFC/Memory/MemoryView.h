// MemoryView.h : interface of the CMemoryView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MEMORYVIEW_H__D350586D_CB68_42BF_A44A_80ACF8ABA5AA__INCLUDED_)
#define AFX_MEMORYVIEW_H__D350586D_CB68_42BF_A44A_80ACF8ABA5AA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"math.h"
#define RADIUS 100
#define PI 3.14

class CMemoryView : public CView
{
protected: // create from serialization only
	CMemoryView();
	DECLARE_DYNCREATE(CMemoryView)

// Attributes
public:
	CMemoryDoc* GetDocument();
	MEMORYSTATUS mem;
	DWORD memTotal,Menfree;
	int per;
	void GetMemoryStr(CString *str,double d,PCSTR strTail);

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMemoryView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMemoryView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMemoryView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MemoryView.cpp
inline CMemoryDoc* CMemoryView::GetDocument()
   { return (CMemoryDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MEMORYVIEW_H__D350586D_CB68_42BF_A44A_80ACF8ABA5AA__INCLUDED_)
