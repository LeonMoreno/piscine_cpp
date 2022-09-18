#include <iostream>
#include <locale>

void	ft_toupper(char **argv)
{
	std::locale loc;

	while(++argv && *argv)
	{
		for (char *s = *argv; *s != '\0'; s++)
			std::cout << std::toupper (*s, loc);
		std::cout << " ";
	}
	std::cout << std::endl;
	printf("argv = %p\n", *argv);
	++argv;
	printf("argv = %p\n", *argv);
	std::cout << std::endl;
}


int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "A DESPERTAR TODO" << std::endl;
	else
		ft_toupper(argv);
	return (0);
}
