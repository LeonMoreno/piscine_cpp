#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixPointNum(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=( Fixed const & rhs) {
	std::cout << "Copy assignment operator constructor called" << std::endl;
	this->_fixPointNum = rhs.getRawBits();
	return (*this);

}

Fixed::~Fixed( void ) {
	std::cout << "DESTructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const num) {
	std::cout << "Conver INT constructor called" << std::endl;

	this->_fixPointNum = roundf(num * (1 << _fracBits));
	//std::cout << _fixPointNum << std::endl;
}

Fixed::Fixed( float const num) {
	std::cout << "Conver FLOAT constructor called" << std::endl;

	this->_fixPointNum = roundf(num * (1 << _fracBits));
	std::cout << _fixPointNum << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixPointNum);
}

float	ft_pow(int base, int expo)
{
	float	res;

	res = base;
	while (expo < 0)
	{
		res *= base;
		expo++;
	}
	return (res);
}

std::ostream & operator<<( std::ostream & o, Fixed const & f) {
	// int	enter = 0;;
	// float	frac = 7;
	// std::string ss;

	// int	j = 23;
	// for (int i = 0; i < 24; i++ )
	// {
	// 	if (f.getRawBits() & (2147483648 >> i))
	// 			enter += pow(2, j);
	// 	j--;
	// }
	// j = -8;
	// for (int i = 0; i <= 8; i++)
	// {
	// 	if (f.getRawBits() & (1 << i))
	// 		frac += pow(2, j);
	// 	j++;
	// }
	// if ( frac != 7)
	// {
	// 	ss = std::to_string(frac);
	// 	ss.erase(0, 1);
	// }
	// o << enter << ss;
	(void) f;
	std::cout << "potencia " << ft_pow(2, -8) << std::endl;
	float res =   (1 >> 8);
	std::cout << "res = " << res << std::endl;
	o << res;
	return o;
}

int const	Fixed::_fracBits = 8;