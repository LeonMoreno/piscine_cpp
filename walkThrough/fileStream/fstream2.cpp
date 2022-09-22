#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		s;

	ofs.open("txtout.txt");
	ifs.open("texto.tt");
	if (ifs.rdstate() != 0)
		std::cout << "Sorry No ABRIR\n";
	std::getline(ifs, s);
	while (ifs.good())
	{
		ofs << s << std::endl;
		std::cout << s << std::endl;
		std::getline(ifs, s);
	}

	ifs.close();
	return (0);
}
