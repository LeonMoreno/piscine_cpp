#include "Point.hpp"
#include "Fixed.hpp"

/* Constructors and Destructor */
Point::Point( void ) : _x(0), _y(0) {
	// std::cout << "Dfault constru Point\n";
}

Point::Point( Fixed const x, Fixed const y ) : _x(x), _y(y) {
	// std::cout << "INIT constru Point\n";
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y) {
	// std::cout << "Copy constru Point\n";
}

Point::~Point( void ) {
	// std::cout << "Destructor Point\n";
}

Point & Point::operator=( Point const & p) {
	(void) p;
	std::cout << "Imposible asignar variables contantes" << std::endl;
	return *this;
}

/* Get Valeurs */
int	Point::getX( void ) const {
	return (this->_x.toFloat());
}

int	Point::getY( void ) const {
	return (this->_y.toFloat());
}

