#include <iostream>

int	main(void)
{
	std::string name;

	std::cout << "Introduzca su nombre \n";
	//std::getline(std::cin, name);
	std::cin >> name;
	std::cout << name << std::endl;
	return (0);
}
