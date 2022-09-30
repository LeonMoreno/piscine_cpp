#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixPoint(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy Assignment constructor called" << std::endl;
	this->_fixPoint = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixPoint);
}

void	Fixed::setRawBits( int const raw) {
	this->_fixPoint = raw;
	return ;
}

int const	Fixed::_fracBits = 8;



