
// baitapneView.h : interface of the CbaitapneView class
//

#pragma once
#include "hinh.h"
#include"hinhcn.h"
#include"nut.h"
#include"hinhvuong.h"
#include"hinhtron.h"
#include"tamgiac.h"
#include"dongxu.h"
#include"NS.h"

class CbaitapneView : public CView
{
protected: // create from serialization only
	CbaitapneView() noexcept;
	DECLARE_DYNCREATE(CbaitapneView)

// Attributes
public:
	CbaitapneDoc* GetDocument() const;

// Operations
public:
	int x1, y1, x2, y2;
	CPoint p1, p2;
	hinhcn hinh1, hinh2;
	nut nut1, nut2, nut3, nut4, nut5, nut6, nut7;
	nut to, nho,xoa;
	int control;
	hinh *ph[20];
	int n;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CbaitapneView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in baitapneView.cpp
inline CbaitapneDoc* CbaitapneView::GetDocument() const
   { return reinterpret_cast<CbaitapneDoc*>(m_pDocument); }
#endif

