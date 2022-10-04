#include "Point.hpp"

// float	area(Point const a, Point const b, Point const c)
// {
// 	if (c.getX() == a.getX() && c.getY() == a.getY())
// 		return false;

// 	return (abs(a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY())) / 2.0);
// }


bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	// float abc;
	// float pab;
	// float pbc;
	// float pac;

	// abc = area(a, b, c);
	// pab = area(p, a, b);
	// pbc = area(p, b, c);
	// pac = area(p, a, c);

	// // if ( abc == (pab + pbc + pac))
	// // 	return (true);
	// return (abc == (pab + pbc + pac)); // Directo sin IF


	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = (c.getX() - p.getX()) * (a.getY() - p.getY()) - (c.getY() - p.getY()) * (a.getX() - p.getX());
	d2 = (a.getX() - p.getX()) * (b.getY() - p.getY()) - (a.getY() - p.getY()) * (b.getX() - p.getX());
	d3 = (b.getX() - p.getX()) * (c.getY() - p.getY()) - (b.getY() - p.getY()) * (c.getX() - p.getX());



	// std::cout << "d1 = " << d1 << std::endl;
	// std::cout << "d2 = " << d2 << std::endl;
	// std::cout << "d3 = " << d3 << std::endl;

	// if (d1 > 0 && d2 > 0 && d3 > 0)
	// 	return true;

	has_neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
    has_pos = (d1 > 0) && (d2 > 0) && (d3 > 0);

	// return false;

    return (has_neg || has_pos);
}
