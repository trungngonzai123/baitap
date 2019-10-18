#pragma once
class hinh
{
public:
	CPoint point1, point2;
	virtual void ve(CClientDC *pDC);
	virtual float dientich();
	virtual float chuvi();
	virtual int tronghinh(CPoint p1);
	//virtual void xemlai(CClientDC *pDC);
	virtual void dichuyen(int dx, int dy);
	virtual void phongto();
	virtual void thunho();
	hinh();
	~hinh();
};

