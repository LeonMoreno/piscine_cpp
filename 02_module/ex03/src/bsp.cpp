#include "Point.hpp"

float	area(Point const a, Point const b, Point const c)
{
	return (abs(a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY())) / 2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float abc;
	float pab;
	float pbc;
	float pac;

	abc = area(a, b, c);
	pab = area(p, a, b);
	pbc = area(p, b, c);
	pac = area(p, a, c);

	// if ( abc == (pab + pbc + pac))
	// 	return (true);
	return (abc == (pab + pbc + pac)); // Directo sin IF
}
