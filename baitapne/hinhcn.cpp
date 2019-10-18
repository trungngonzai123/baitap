#include "stdafx.h"
#include "hinhcn.h"

hinhcn::hinhcn(CPoint p1, CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
}
hinhcn::hinhcn(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
void hinhcn::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
CPoint hinhcn::getA()
{
	return CPoint(x1, y1);
}
CPoint hinhcn::getC()
{
	return CPoint(x2, y2);
}
void hinhcn::ve(CClientDC *pDC)
{
	pDC->Rectangle(x1, y1, x2, y2);
	CString str, cv;
	str.Format(_T("%f"), dientich());
	pDC->TextOutW(430, 10, str);
	cv.Format(_T("%f"), chuvi());
	pDC->TextOutW(430, 25, cv);
}
int hinhcn::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.y >= y1 && p.x <= x2 && p.y <= y2)
		kq = 1;
	return kq;
}
float hinhcn::dientich()
{
	float kq = 0;
	kq = (x2 - x1)*(y2 - y1);
	return kq;
}
float hinhcn::chuvi()
{
	float kq = 0;
	kq = ((x2 - x1) + (y2 - y1)) * 2;
	return kq;
}
void hinhcn::dichuyen(int dx,int dy)
{
	x1 += dx;
	y1 += dy;
	x2 += dx;
	y2 += dy;
}
void hinhcn::phongto()
{
	x1 -= 10;
	y1 -= 10;
	x2 += 10;
	y2 += 10;
 }
void hinhcn::thunho()
{
	x1 += 10;
	y1 += 10;
	x2 -= 10;
	y2 -= 10;
}
hinhcn::hinhcn()
{
}


hinhcn::~hinhcn()
{
}
