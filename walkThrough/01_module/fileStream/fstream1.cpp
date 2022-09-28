#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs;

	ifs.open("num.txt");
 	int				dst;
	int				dst1;

	ifs >> dst >> dst1;
	
	std::cout << dst  << " " << dst1 << std::endl;
	ifs.close();
	return (0);
}
