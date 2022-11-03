#include "WhatEver.hpp"

int	main(void)
{
	{
		std::cout << "\n\t ============================== " << std::endl;
		std::cout <<  "\t\t Test int  "  << std::endl;
		int	x = 42.0f;
		int	y = 7.0f;

		::swap(x, y);
		::ft_putvar(x, y);
		std::cout << "min = " << ::min(x, y) << std::endl;
		std::cout << "max = " << ::max(x, y) << std::endl;
	}
	{
		std::cout << "\n\t ============================== " << std::endl;
		std::cout <<  "\t\t Test float  "  << std::endl;
		float	x = 45.989898f;
		float	y = 0.0989787f;

		::swap(x, y);
		::ft_putvar(x, y);
		std::cout << "min = " << ::min(x, y) << std::endl;
		std::cout << "max = " << ::max(x, y) << std::endl;
	}
	{
		std::cout << "\n\t ============================== " << std::endl;
		std::cout <<  "\t\t Test string  "  << std::endl;
		std::string x = "chaine1";
		std::string y = "chaine2";

		::swap(x, y);
		::ft_putvar(x, y);
		std::cout << "min = " << ::min(x, y) << std::endl;
		std::cout << "max = " << ::max(x, y) << std::endl;
	}
	{
		std::cout << "\n\t ============================== " << std::endl;
		std::cout <<  "\t\t Test char  "  << std::endl;
		char x = 'a';
		char y = 'z';

		::swap(x, y);
		::ft_putvar(x, y);
		std::cout << "min = " << ::min(x, y) << std::endl;
		std::cout << "max = " << ::max(x, y) << std::endl;
	}


	return (0);
}
