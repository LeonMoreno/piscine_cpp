#include <iostream>
#include <iomanip>

int	main(void)
{
	std::cout << std::string(20, '-') << std::endl;
	std::cout << std::setw(10);
	std::cout << "Hola" <<  "|" << std::setw(10);//<< std::right;
	std::cout << "Leo" << std::setw(10); //<< std::right;
	std::cout << std::endl;
	return (0);
}
