#include <iostream> //std::cout
#include <locale>	// std::locale, std::toupper

void	ft_megaphone(char **argv)
{
	int				i;
	std::locale		loc;

	i = 1;
	while (argv[i])
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout <<  std::toupper(argv[i][j], loc);
		std::cout << " ";
		i++;
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

