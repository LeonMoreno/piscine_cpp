#include "Convert.hpp"

int	main(int argc, char **argv) {
	Convert *lite;
	std::locale loc;

	if (argc != 2)
		{
			ftPut("Invalid argus");
			return (1);
		}
	else
		lite = new Convert(argv[1]);
	//std::cout << std::fixed;
	//std::cout.precision(2);

	char	c = *lite;
	int		n = *lite;

	// std::cout << c << std::endl;
	//std::cout << n << std::endl;

	delete lite;
	return (0);
}
