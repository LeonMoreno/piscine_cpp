#include <iostream>
#include <iomanip>

int	main(void)
{
	////std::string	str = "65";
	float	n = 124.0f;

//	n = std::stof(str);


	// std::cout << "int: " << reinterpret_cast<int>(n) << std::endl;
	// std::cout << "char: " << static_cast<char>(n) << std::endl;

	std::cout << std::setw(10) << n << std::endl;
	std::cout << "double: " << n << std::endl;
	printf("printf %.6f \n", n);
	return (0);
}
