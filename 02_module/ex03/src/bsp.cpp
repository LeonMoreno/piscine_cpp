#include "Point.hpp"

float	area(Point const a, Point const b, Point const c)
{
	if (c.getX() == a.getX() && c.getY() == a.getY())
		return false;

	return (abs(a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY())) / 2.0);
}

// float sign (Point p1, Point p2, Point p3)
// {
//     return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
// }

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


	// float	d1, d2, d3;
	// bool	has_neg, has_pos;

	// d1 = sign(p, a, b);
	// d2 = sign(p, b, c);
	// d3 = sign(p, c, a);

	// // std::cout << "d1 = " << d1 << std::endl;
	// // std::cout << "d2 = " << d1 << std::endl;
	// // std::cout << "d3 = " << d1 << std::endl;

	// has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    // has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    // return !(has_neg && has_pos);
}
