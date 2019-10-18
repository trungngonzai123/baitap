#pragma once
#include "hinh.h"
class tamgiac :
	public hinh
{
private:
	int x1, y1, x2, y2, x3, y3;;

public:
	tamgiac(CPoint p1, CPoint p2);
	tamgiac(int x1, int y1, int x2, int y2,int x3,int y3);
	void thietlap(int mx1, int my1, int mx2, int my2,int mx3,int my3);
	CPoint getA();
	CPoint getB();
	CPoint getC();
	void ve(CClientDC *pDC);
	float dientich();
	float chuvi();
	void dichuyen(int dx, int dy);
	void phongto();
	void thunho();
	int tronghinh(CPoint p);
	tamgiac();
	~tamgiac();
};

