#include "stdafx.h"
#include "dongxu.h"

dongxu::dongxu(CPoint p1, CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
	x3 = x1 + 30;
	y3 = y1 + 30;
	x4 = x2 - 30;
	y4 = y2 - 30;
	r1 = (sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y))) / 2;
}
dongxu::dongxu(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
void dongxu::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
CPoint dongxu::getA()
{
	return CPoint(x1, y1);
}
CPoint dongxu::getC()
{
	return CPoint(x2, y2);
}
void dongxu::ve(CClientDC *pDC)
{
	pDC->Ellipse(x1, y1, x2, y2);
	pDC->Ellipse(x3, y3, x4, y4);
	CString str, cv;
	str.Format(_T("%f"), dientich());
	pDC->TextOutW(430, 10, str);
	cv.Format(_T("%f"), chuvi());
	pDC->TextOutW(430, 25, cv);
}
int dongxu::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.y >= y1 && p.x <= x2 && p.y <= y2)
		kq = 1;
	return kq;
}
float dongxu::dientich()
{
	float kq;
	kq = (sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) *(sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) * 3.14
		- (sqrt((x4 - x3)*(x4 - x3)) + ((y4 - y3)*(y4 - y3)) / 2) *(sqrt((x4 - x3)*(x4 - x3)) + ((y4 - y3)*(y4 - y3)) / 2) * 3.14;
	return kq;
}

float dongxu::chuvi()
{
	int kq;
	kq = (sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) * 2 * 3.14
		- (sqrt((x4 - x3)*(x4 - x3)) + ((y4 - y3)*(y4 - y3)) / 2) * 2 * 3.14;
	return kq;
}
void dongxu::dichuyen(int dx, int dy)
{
	x1 += dx; y1 += dy; x2 += dx; y2 += dy; x3 += dx; y3 += dy; x4 += dx; y4 += dy;
}
void dongxu::phongto()
{
	x1 -= 10; y1 -= 10; x2 += 10; y2 += 10; x3 -= 10; y3 -= 10; x4 += 10; y4 += 10;
}
void dongxu::thunho()
{
	x1 += 10; y1 += 10; x2 -= 10; y2 -= 10; x3 += 10; y3 += 10; x4 -= 10; y4 -= 10;
}
dongxu::dongxu()
{
}


dongxu::~dongxu()
{
}
