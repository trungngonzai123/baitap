
// baitapneView.cpp : implementation of the CbaitapneView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "baitapne.h"
#endif

#include "baitapneDoc.h"
#include "baitapneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CbaitapneView

IMPLEMENT_DYNCREATE(CbaitapneView, CView)

BEGIN_MESSAGE_MAP(CbaitapneView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CbaitapneView construction/destruction

CbaitapneView::CbaitapneView() noexcept
{
	// TODO: add construction code here
	nut1.thietlap(0, 0, 50, 50);
	nut1.chu = CString("HCN");
	nut2.thietlap(50, 0, 100, 50);
	nut2.chu = CString("HV");
	nut3.thietlap(100, 0, 150, 50);
	nut3.chu = CString("HT");
	nut4.thietlap(150, 0, 200, 50);
	nut4.chu = CString("TG");
	nut5.thietlap(200, 0, 250, 50);
	nut5.chu = CString("DX");
	nut6.thietlap(250, 0, 300, 50);
	nut6.chu = CString("NS");
	nut7.thietlap(300, 0, 350, 50);
	nut7.chu = CString("DC");
	to.thietlap(10, 200, 60, 250);
	to.chu = CString("To");
	nho.chu = CString("Nho");
	nho.thietlap(10, 300, 60, 350);
	xoa.thietlap(350, 0, 400, 50);
	xoa.chu = CString("Xoa");
}

CbaitapneView::~CbaitapneView()
{
}

BOOL CbaitapneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CbaitapneView drawing

void CbaitapneView::OnDraw(CDC* /*pDC*/)
{
	CbaitapneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	nut1.ve(&pDC);
	nut2.ve(&pDC);
	nut3.ve(&pDC);
	nut4.ve(&pDC);
	nut5.ve(&pDC);
	nut6.ve(&pDC);
	nut7.ve(&pDC);
	to.ve(&pDC);
	nho.ve(&pDC);
	xoa.ve(&pDC);
	control = 0;
	n = 0;
	// TODO: add draw code for native data here
}


// CbaitapneView printing

BOOL CbaitapneView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CbaitapneView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CbaitapneView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CbaitapneView diagnostics

#ifdef _DEBUG
void CbaitapneView::AssertValid() const
{
	CView::AssertValid();
}

void CbaitapneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CbaitapneDoc* CbaitapneView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CbaitapneDoc)));
	return (CbaitapneDoc*)m_pDocument;
}
#endif //_DEBUG


// CbaitapneView message handlers


void CbaitapneView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p1.x = point.x;
	p1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CbaitapneView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CClientDC pDC(this);
	p2.x = point.x;
	p2.y = point.y;
	int tonho=0;
	CPen *pen;
	CPen *pen1;
	CPen *pen2;
	pen1 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pen2 = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	if (nut1.tronghinh(point) == 1)
	{
		control = 1;
	}
	else if (nut2.tronghinh(point) == 1)
	{
		control = 2;
	}
	else if (nut3.tronghinh(point) == 1)
	{
		control = 3;
	}
	else if (nut4.tronghinh(point) == 1)
	{
		control = 4;
	}
	else if (nut5.tronghinh(point) == 1)
	{
		control = 5;
	}
	else if (nut6.tronghinh(point) == 1)
	{
		control = 6;
	}
	else if (nut7.tronghinh(point) == 1)
	{
		control = 7;
	}
	else if (to.tronghinh(point) == 1)
	{
		control = 8;
	}
	else if (nho.tronghinh(point) == 1)
	{
		control = 9;
	}
	else if (xoa.tronghinh(point) == 1)
	{
		control = 10;
	}
	else if (control == 1 && p1.y > 50 && p2.y > 50)
	{
		ph[n] = new hinhcn(p1, p2);
		ph[n]->ve(&pDC);
		n++;
	}
	else if (control == 2 && p1.y > 50 && p2.y > 50)
	{
		ph[n] = new hinhvuong(p1, p2);
		ph[n]->ve(&pDC);
		n++;
	}
	else if (control == 3 && p1.y > 50 && p2.y > 50)
	{
		ph[n] = new hinhtron(p1, p2);
		ph[n]->ve(&pDC);
		n++;
	}
	else if (control == 4 && p1.y > 50 && p1.y > 50)
	{
		ph[n] = new tamgiac(p1, p2);
		ph[n]->ve(&pDC);
		n++;
	}
	else if (control == 5 && p1.y > 50 && p1.y > 50)
	{
		ph[n] = new dongxu(p1, p2);
		ph[n]->ve(&pDC);
		n++;
	}
	else if (control == 6 && p1.y > 50 && p1.y > 50)
	{
		ph[n] = new NS(p1, p2);
		ph[n]->ve(&pDC);
		n++;
	}
	else if(control==7)
	{
		int i;
		for(i=0;i<n;i++)
		if (ph[i]->tronghinh(p1) == 1)
		{
			pen = pDC.SelectObject(pen1);
			ph[i]->ve(&pDC);
			ph[i]->dichuyen(p2.x - p1.x, p2.y - p1.y);
			pen = pDC.SelectObject(pen2);
			ph[i]->ve(&pDC);
		}
	}
	else if(control==8)
		for (int i = 0; i < n; i++)
		{
			if (ph[i]->tronghinh(point) == 1)
			{
				pen = pDC.SelectObject(pen1);
				ph[i]->ve(&pDC);
				ph[i]->phongto();
				pen = pDC.SelectObject(pen2);
				ph[i]->ve(&pDC);
			}
		}
	else if(control==9)
		for (int i = 0; i < n; i++)
		{
			if (ph[i]->tronghinh(point) == 1)
			{
				pen = pDC.SelectObject(pen1);
				ph[i]->ve(&pDC);
				ph[i]->thunho();
				pen = pDC.SelectObject(pen2);
				ph[i]->ve(&pDC);
			}
		}
	else if(control==10)
		for (int i = 0; i < n; i++)
			{
			if (ph[i]->tronghinh(point) == 1)
			{
				pen = pDC.SelectObject(pen1);
				ph[i]->ve(&pDC);
			}
	}
	CView::OnLButtonUp(nFlags, point);
}

