#include "stdafx.h"
#include "hinhvuong.h"

hinhvuong::hinhvuong(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	x2 = p2.x;
	if (p1.y < p2.y)
	{
		y1 = p1.y;
		y2 = (sqrt((float)(x2 - x1)*(x2 - x1)) - (p2.y - y1)) + p2.y;
	}
	else
	{
		y1 = p2.y;
		y2 = (sqrt((float)(x2 - x1)*(x2 - x1)) - (p2.y - y1)) + p2.y;
	}

}
hinhvuong::hinhvuong(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
void hinhvuong::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1; y1 = my1; x2 = mx2; y2 = my2;
}
CPoint hinhvuong::getA()
{
	return CPoint(x1, y1);
}
CPoint hinhvuong::getC()
{
	return CPoint(x2, y2);
}
void hinhvuong::ve(CClientDC *pDC)
{
	pDC->Rectangle(x1, y1, x2, y2);
	CString str, cv;
	str.Format(_T("%f"), dientich());
	pDC->TextOutW(430, 10, str);
	cv.Format(_T("%f"), chuvi());
	pDC->TextOutW(430, 25, cv);
}
int hinhvuong::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.y >= y1 && p.x <= x2 && p.y <= y2)
		kq = 1;
	return kq;
}
float hinhvuong::dientich()
{
	float kq = 0;
	kq = (x2 - x1)*(x2-x1);
	return kq;
}
float hinhvuong::chuvi()
{
	float kq = 0;
	kq = (x2 - x1) * 4;
	return kq;
}
void hinhvuong::dichuyen(int dx, int dy)
{
	x1 += dx;
	y1 += dy;
	x2 += dx;
	y2 += dy;
}
void hinhvuong::phongto()
{
	x1 -= 10;
	y1 -= 10;
	x2 += 10;
	y2 += 10;
}
void hinhvuong::thunho()
{
	x1 += 10;
	y1 += 10;
	x2 -= 10;
	y2 -= 10;
}
hinhvuong::hinhvuong()
{
}


hinhvuong::~hinhvuong()
{
}
