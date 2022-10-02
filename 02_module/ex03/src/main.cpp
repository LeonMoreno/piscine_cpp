#include "Point.hpp"

int	main( void )
{
	Point	a(0, 0);
	Point	b(20, 0);
	Point	c(10, 30);
	Point	p(10, 15);
	Point p1 = Point(0, 4);
	Point p2 = Point(10, 10);
	Point p3 = Point(5, 0);
	Point p4 = Point(35, 0);

	std::cout << "================================" << std::endl;
	if (bsp(a, b, c, p))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	if (bsp(a, b, c, p1))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	if (bsp(a, b, c, p2))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	if (bsp(a, b, c, p3))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	if (bsp(a, b, c, p4))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;

	return (0);
}
