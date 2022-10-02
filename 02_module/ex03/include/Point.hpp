#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point( void );
		Point( Point const & src);
		~Point( void );
		Point( Fixed const x, Fixed const y );

		/* Get Valeurs */
		int		getX( void ) const;
		int		getY( void ) const;

		Point & operator=( Point const & f1);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
