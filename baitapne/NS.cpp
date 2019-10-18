#include "stdafx.h"
#include "NS.h"

NS::NS(CPoint p1, CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	x2 = p2.x;
	y1 = p1.y;
	y2 = p2.y;
	x3 = x2 - (x2 - x1) / 8;
	y3 = y1;
	x4 = x1 + (x2 - x1) / 8;
	y4 = y2;
	x5 = ((x2 + x1) / 2);
	y5 = y1 - (y2 - y1) / 50;
	x6 = x2 + (x2 - x1) / 9;
	y6 = (y2 + y1) / 2.2;
	x7 = x1 - (x2 - x1) / 9;
	y7 = y6;
}
NS::NS(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void NS::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1;
	x2 = mx2; y2 = my2;
}
void NS::ve(CClientDC* pDC)
{
	pDC->MoveTo(x5, y5);
	pDC->LineTo(x2, y2);
	pDC->MoveTo(x2, y2);
	pDC->LineTo(x7, y7);
	pDC->MoveTo(x7, y7);
	pDC->LineTo(x6, y6);
	pDC->MoveTo(x6, y6);
	pDC->LineTo(x4, y4);
	pDC->MoveTo(x4, y4);
	pDC->LineTo(x5, y5);
}

int NS::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2)
		kq = 1;
	return kq;
}
void NS::dichuyen(int dx, int dy)
{
	x1 += dx;
	y1 += dy; 
	x2 += dx; 
	y2 += dy; 
	x3 += dx; 
	y3 += dy; 
	x4 += dx; 
	y4 += dy; 
	x5 += dx; 
	y5 += dy; 
	x6 += dx; 
	y6 += dy; 
	x7 += dx; 
	y7 += dy;

}
void NS::phongto()
{
	x1 += 10;
	y1 += 10;
	x2 += 10;
	y2 += 10;
	x3 += 10;
	y3 += 10;
	x4 += 10;
	y4 += 10;
	x5 += 10;
	y5 += 10;
	x6 += 10;
	y6 += 10;
	x7 += 10;
	y7 += 10;
}
void NS::thunho()
{
	x1 += 10;
	y1 += 10;
	x2 += 10;
	y2 += 10;
	x3 += 10;
	y3 += 10;
	x4 += 10;
	y4 += 10;
	x5 += 10;
	y5 += 10;
	x6 += 10;
	y6 += 10;
	x7 += 10;
	y7 += 10;
}
NS::NS()
{
}
NS::~NS()
{
}
