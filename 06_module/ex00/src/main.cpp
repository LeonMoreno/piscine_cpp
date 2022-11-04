#include "Convert.hpp"

void	ftPrint(Convert &lite)
{
	char	c;
	int		n;
	float	f;
	double	d;

	c = static_cast<char>(lite);
	n = static_cast<int>(lite);
	f = static_cast<float>(lite);
	d = static_cast<double>(lite);
}

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
	ftPrint(*lite);
	delete lite;
	return (0);
}
