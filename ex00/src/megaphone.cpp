#include <iostream> //std::cout
#include <locale>	// std::locale, std::toupper

void	ft_megaphone(char **argv)
{
	std::locale loc;

	while(++argv && *argv)
	{
		for (char *s = *argv; *s != '\0'; s++)
			std::cout << std::toupper (*s, loc);
		std::cout << " ";
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		ft_megaphone(argv);
	return (0);
}

