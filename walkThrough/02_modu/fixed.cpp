#include <iostream>
#include <iomanip>

int	main( void )
{
	float f;
	float m;

	f = 42.42;
	std::cout << f << std::endl;
	std::cout << std::fixed;
	std::cout << f << std::endl;

	std::cout << std::setfill('0');
	std::cout << 42 << "." << std::setw(2) << 42 << std::endl;
	// std::cout << 42 << "." << 41 << std::endl;


	return (0);
}
