#pragma once
#include "hinh.h"
class hinhtron :
	public hinh
{
private:
	int x1, y1, x2, y2;
	int r;
public:
	hinhtron(CPoint p1, CPoint p2);
	hinhtron(int x1, int y1, int x2, int y2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	void ve(CClientDC *pDC);
	float dientich();
	float chuvi();
	int tronghinh(CPoint p);
	void dichuyen(int dx, int dy);
	void phongto();
	void thunho();
	hinhtron();
	~hinhtron();
};

