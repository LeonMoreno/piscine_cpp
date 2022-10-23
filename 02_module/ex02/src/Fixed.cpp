#include "Fixed.hpp"

/* Constructor and Destructor */
Fixed::Fixed( void ) : _fixPointNum(0) {
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "DEStructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const num ) {
	std::cout << "INT Constructor called" << std::endl;
	this->setRawBits(num  << _fractBits);
}

Fixed::Fixed( float const num ) {
	// std::cout << "FLOAT Constructor called" << std::endl;
	this->setRawBits(num * (1 << _fractBits));
}

/* Get and SET */
int	Fixed::getRawBits( void ) const {
	return (this->_fixPointNum);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixPointNum = raw;
}

/* To int and To FLoat */
int	Fixed::toInt( void ) const {
	return (this->getRawBits() >> _fractBits);
}

float	Fixed::toFloat( void ) const {
	return (this->getRawBits() / (float) (1 << _fractBits));
}

/* Basic Operators Assignacion -- CANONICAL */
Fixed & Fixed::operator=(Fixed const & f) {
	// std::cout << "Assign copy Constructor called" << std::endl;
	this->_fixPointNum = f.getRawBits();
	return *this;
}

/* Comparison operators */
bool	Fixed::operator>(Fixed const &f) const {
	return (this->getRawBits() > f.getRawBits());
}

bool	Fixed::operator<(Fixed const &f) const {
	return (this->getRawBits() < f.getRawBits());
}

bool	Fixed::operator>=(Fixed const &f) const {
	return (this->getRawBits() >= f.getRawBits());
}

bool	Fixed::operator<=(Fixed const &f) const {
	return (this->getRawBits() <= f.getRawBits());
}

bool	Fixed::operator==(Fixed const &f) const {
	return (this->getRawBits() == f.getRawBits());
}

bool	Fixed::operator!=(Fixed const &f) const {
	return(this->getRawBits() != f.getRawBits());
}

/* arithmetic operators */
Fixed	Fixed::operator+(Fixed const &f) const {
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &f) const {
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed	Fixed::operator*(Fixed const &f) const {
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed	Fixed::operator/(Fixed const &f) const {
	return Fixed(this->toFloat() / f.toFloat());
}

/* increment/decrement operators */
Fixed	Fixed::operator++() {
	this->_fixPointNum += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed t(*this);

	this->_fixPointNum += 1;
	return (t);
}

Fixed	Fixed::operator--() {
	this->_fixPointNum -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed t(*this);

	this->_fixPointNum -= 1;
	return (t);
}

/* special  functions min - Max */
	Fixed &	Fixed::min(Fixed & p1, Fixed & p2) {
		if (p1 < p2)
			return(p1);
		return(p2);
	}

	Fixed const &	Fixed::min(Fixed const & p1, Fixed const & p2) {
		std::cout << "POR LA CONST\n";
		if (p1 < p2)
			return(p1);
		return(p2);
	}

	Fixed &	Fixed::max(Fixed & p1, Fixed & p2) {
		if (p1 > p2)
			return(p1);
		return(p2);
	}

	Fixed const &	Fixed::max(Fixed const & p1, Fixed const & p2) {
		std::cout << "POR LA CONST\n";
		if (p1 > p2)
			return(p1);
		return(p2);
	}

/* Other Operators -- std::cout overload */
std::ostream & operator<<(std::ostream & o, Fixed const & f)
{
	return (o << f.toFloat());
}

int const Fixed::_fractBits = 8;
