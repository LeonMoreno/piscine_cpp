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

void	searchReplace(char **argv, std::string & str)
{
	std::string search = argv[2];
	std::string replace = argv[3];

	size_t start_pos = 0;
	while ((start_pos = str.find(search, start_pos)) != std::string::npos)
	{
		str.erase(start_pos, search.length());
		str.insert(start_pos, replace);
		// std::cout << str << std::endl;
		// std::cout << "Encontrado en : " << start_pos << std::endl;
		start_pos += search.length();
	}

	//  std::cout << "Ensasyo " <<  search.insert(1, replace) << std::endl;
	// std::cout << "Ensasyo " <<  search + replace << std::endl;
	// std::size_t found = str.find(search);
	// if (found != std::string::npos)
		// std::cout << "Encontrado en : " << found << std::endl;
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
		searchReplace(argv, str);
		ofs << str << std::endl;
	//	std::cout << str << std::endl;
		std::getline(ifs, str);
	}
	ifs.close();
	ofs.close();
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_startSed(argv);
	else
		std::cout << "Falta Argumentos" << std::endl;
	return (0);
}
