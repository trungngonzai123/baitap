#pragma once
#include "hinh.h"
class NS :
	public hinh
{
private:
	float x1, y1, x3, y3, x2, y2, x4, y4, x5, y5, x6, y6, x7, y7;
public:
	NS(CPoint p1, CPoint p2);
	NS(int x1, int y1, int x2, int y2);
	void thietlap(int x1, int y1, int x2, int y2);
	void ve(CClientDC* pDC);
	int tronghinh(CPoint p1);
	void dichuyen(int dx, int dy);
	void phongto();
	void thunho();
	NS();
	~NS();
};

