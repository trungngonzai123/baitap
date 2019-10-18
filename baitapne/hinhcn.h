#pragma once
#include "hinh.h"
class hinhcn :
	public hinh
{
private:
	int x1, y1, x2, y2;

public:
	hinhcn(CPoint p1, CPoint p2);
	hinhcn(int x1, int y1, int x2, int y2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	CPoint getA();
	CPoint getC();
	void ve(CClientDC *pDC);
	//void xemlai(CClientDC *pDC);
	void dichuyen(int dx, int dy);
	void phongto();
	void thunho();
	float dientich();
	float chuvi();
	int tronghinh(CPoint p);
	hinhcn();
	~hinhcn();
};

