#include <iostream>

int	main(void)
{
	char buff[512];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input una palabra: ";
	std::cin >> buff;
	std::cout << "Ud escribio: [" << buff << "]" << std::endl;
	std::cout << "insta = " << sizeof (char) << std::endl;
	std::cout << 17 << " " << 90 << std::endl;

	return (0);
}
