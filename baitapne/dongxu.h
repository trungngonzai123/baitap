#pragma once
#include "hinh.h"
class dongxu :
	public hinh
{
private:
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int r1,r2;
public:
	dongxu(CPoint p1, CPoint p2);
	dongxu(int x1, int y1, int x2, int y2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	CPoint getA();
	CPoint getC();
	void ve(CClientDC *pDC);
	float dientich();
	float chuvi();
	int tronghinh(CPoint p);
	void dichuyen(int dx, int dy);
	void phongto();
	void thunho();
	dongxu();
	~dongxu();
};

