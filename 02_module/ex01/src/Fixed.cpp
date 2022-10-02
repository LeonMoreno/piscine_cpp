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
	std::cout << "INT constructor called" << std::endl;
	this->setRawBits(roundf(num * (1 << _fracBits)));
	// std::cout << _fixPointNum << std::endl;
}

int	Fixed::toInt( void ) const {
	return (this->getRawBits() / (1 << _fracBits));
}

Fixed::Fixed( float const num) {
	std::cout << "FLOAT constructor called" << std::endl;
	this->setRawBits(roundf(num * (1 << _fracBits)));
	std::cout << _fixPointNum << std::endl;
}

/**
 * Mucho mas facil : usar la operacion contraria a la multiplicacion : div
 * this->getRawBits() / (1 << _fracBits)); -- Es todo.
 * Despues de 4 dias -- Solo era dividir./ LoL
*/
float	Fixed::toFloat( void ) const {
	return (this->getRawBits() * ft_pow(2, -_fracBits));
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixPointNum = raw;
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixPointNum);
}

float	Fixed::ft_pow(int base, int expo) const {
	float	res;
	int		pow = expo;

	if (expo < 0)
		expo *= -1;
	res = 1;
	while (expo > 0)
	{
		res *= base;
		expo--;
	}
	if (pow < 0)
		res = 1 / res;
	return (res);
}

std::ostream & operator<<( std::ostream & o, Fixed const & f) {
/* // Intente obtener el numero comparando bit a bit.
	// Un solo problema, la parte fracccionaria 0.42 / quitar el 0
	int	enter = 0;;
	float	frac = 0;
	std::string ss;

	int	j = 23;
	for (int i = 0; i < 24; i++ )
	{
		if (f.getRawBits() & (2147483648 >> i))
				enter += (pow(2, j));
		j--;
	}
	j = -8;
	for (int i = 0; i <= 8; i++)
	{
		if (f.getRawBits() & (1 << i))
			frac += pow(2, j);
		j++;
	}

		ss = std::to_string(frac);
		std::string s2 = ss.substr(1, 4);

	std::cout << " ENTER = " << enter << std::endl;
	std::cout << " FRAC = " << frac << std::endl;
	o << enter << frac; */
	
	return (o << f.toFloat());
}

int const	Fixed::_fracBits = 8;
