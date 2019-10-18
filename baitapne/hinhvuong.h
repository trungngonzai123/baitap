#pragma once
#include "hinh.h"
class hinhvuong :
	public hinh
{
private:
	int x1, y1, x2, y2;

public:
	hinhvuong(CPoint p1, CPoint p2);
	hinhvuong(int x1, int y1, int x2, int y2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	CPoint getA();
	CPoint getC();
	void ve(CClientDC *pDC);
	float dientich();
	float chuvi();
	int tronghinh(CPoint p);
	void hinhvuong::dichuyen(int dx, int dy);
	void hinhvuong::phongto();
	void hinhvuong::thunho();
	hinhvuong();
	~hinhvuong();
};

