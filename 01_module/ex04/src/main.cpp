#include <iostream>
#include <fstream>

void	ft_Files(std::string &replace, std::ifstream &s, char *argv1)
{
	s.open(argv1);
	if (s.rdstate() != 0)
		std::cout << "Error Open File" << std::endl;
	replace = argv1;
	replace = replace + ".replace";
}

void	ft_startSed(char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;
	std::string		replace;

	ft_Files(replace, ifs, argv[1]);
	ofs.open(replace);
	std::getline(ifs, str);
	while (ifs.good())
	{
		ofs << str << std::endl;
		std::cout << str << std::endl;
		std::getline(ifs, str);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_startSed(argv);
	else
		std::cout << "Falta Argumentos" << std::endl;
	return (0);
}
