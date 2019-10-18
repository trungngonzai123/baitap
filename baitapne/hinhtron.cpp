#include "stdafx.h"
#include "hinhtron.h"

hinhtron::hinhtron(CPoint p1, CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
	r = (sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y))) / 2;
}
hinhtron::hinhtron(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
void hinhtron::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}

void hinhtron::ve(CClientDC *pDC)
{
	pDC->Ellipse(x1, y1, x2, y2);
	CString str, cv;
	str.Format(_T("%f"), dientich());
	pDC->TextOutW(430, 10, str);
	cv.Format(_T("%f"), chuvi());
	pDC->TextOutW(430, 25, cv);
}
int hinhtron::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.y >= y1 && p.x <= x2 && p.y <= y2)
		kq = 1;
	return kq;
}
float hinhtron::dientich()
{
	float kq;
	kq = (sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) *(sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) * 3.14;
	return kq;
}

float hinhtron::chuvi()
{
	int kq;
	kq = (sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) * 2 * 3.14;
	return kq;
}
void hinhtron::dichuyen(int dx, int dy)
{
	x1 += dx;
	y1 += dy;
	x2 += dx;
	y2 += dy;
}
void hinhtron::phongto()
{
	x1 -= 10;
	y1 -= 10;
	x2 += 10;
	y2 += 10;
}
void hinhtron::thunho()
{
	x1 += 10;
	y1 += 10;
	x2 -= 10;
	y2 -= 10;
}
hinhtron::hinhtron()
{
}


hinhtron::~hinhtron()
{
}
