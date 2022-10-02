#include "Fixed.hpp"

int	main( void )
{
	Fixed	a(7);
	Fixed	b(42);
	Fixed	r;

	std::cout << "** Comparison operators **" << std::endl;

	if (a > b)
		std::cout << "a > b" << std::endl;
	else
		std::cout << "a < b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	else
		std::cout << "a != b" << std::endl;

	std::cout << "** arithmetic operators **" << std::endl;

	Fixed c = a + b; // Constructor asignacion CANONICAL
	r = c + a + b;
	std::cout << "r = " << r << std::endl;

	std::cout << "** increment operators **" << std::endl;
	Fixed	n(a); // Copy Constructor CANONICAL
	std::cout << "n = " << n << std::endl;
	for (; n < 100; n++)
		;
	std::cout << "n = " << n << std::endl;

	std::cout << "** special functions **" << std::endl;
	std::cout << "Whoe is Great? = " << Fixed::max(a, b) << std::endl;
	std::cout << "Whoe is Min? = " << Fixed::min(a, n) << std::endl;

	const Fixed co(Fixed(9) * Fixed(5));
	std::cout << "Whoe is Max? = " << Fixed::max(co, n) << std::endl;

	return (0);
}
