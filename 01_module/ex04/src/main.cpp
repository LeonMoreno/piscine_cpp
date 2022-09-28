/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:36:40 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:36:41 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ft_Files(std::string &replace, std::ifstream &s, char *argv1)
{
	s.open(argv1);
	if (s.rdstate() != 0)
	{
		std::cout << "Error Open File" << std::endl;
		return (0);
	}
	replace = argv1;
	replace = replace + ".replace";
	return (1);
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
		start_pos += search.length();
	}
}

void	ft_startSed(char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;
	std::string		replace;

	if (ft_Files(replace, ifs, argv[1]))
		ofs.open(replace);
	std::getline(ifs, str);
	while (ifs.good())
	{
		searchReplace(argv, str);
		ofs << str << std::endl;
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
