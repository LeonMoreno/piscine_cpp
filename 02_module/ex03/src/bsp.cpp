#include "Point.hpp"

/**
 * @brief Calculo determinante o producto vectorial
 * https://www.youtube.com/watch?v=kkucCUlyIUE
 * https://www.geogebra.org/calculator/bhnvkzxf
 * https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle
 *
 * @param v1
 * @param v2
 * @param p
 * @return float determinate
 */

float	det( Point const v1, Point const v2, Point const p)
{
	return ((v2.getX() - p.getX()) * (v1.getY() - p.getY()) - (v2.getY() - p.getY()) * (v1.getX() - p.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = det(a, c, p);
	d2 = det(b, a, p);
	d3 = det(c, b, p);
	has_neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
    has_pos = (d1 > 0) && (d2 > 0) && (d3 > 0);
    return (has_neg || has_pos);
}
