#include "Point.hpp"

int	main( void )
{
	// // TEST POSITIVE
	// Point	a(0, 0);
	// Point	b(20, 0);
	// Point	c(10, 30);
	// Point	p0(10, 15);
	// Point	p1(0, 4);
	// Point p2 = Point(10, 10);
	// Point p3 = Point(5, 0);
	// Point p4 = Point(0, 0);

	// // TEST NEGATIVE
	// Point	a(0, 0);
	// Point	b(-10.1f, 0.2f);
	// Point	c(-5.3f, 19.8f);
	// Point	p0(1, 30);
	// Point	p1(0, 4);
	// Point p2 = Point(-5.2f, 5);
	// Point p3 = Point(-4.2f, 0);
	// Point p4 = Point(-8.1f, 5);

	// TEST AP
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(10, 0);
	Point	p0(5, 5);
	Point	p1(0, 4);
	Point p2 = Point(-5.2f, 5);
	Point p3 = Point(-4.2f, 0);
	Point p4 = Point(-8.1f, 5);



	std::cout << "================================" << std::endl;
	std::cout << "P_0\n";
	if (bsp(a, b, c, p0))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	std::cout << "P_1\n";
	if (bsp(a, b, c, p1))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	std::cout << "P_2\n";
	if (bsp(a, b, c, p2))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	std::cout << "P_3\n";
	if (bsp(a, b, c, p3))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;
	std::cout << "P_4\n";
	if (bsp(a, b, c, p4))
		std::cout << "Inside\n";
	else
		std::cout << "OUT\n";
	std::cout << "================================" << std::endl;

	return (0);
}
