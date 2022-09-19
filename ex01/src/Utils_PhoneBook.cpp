#include "PhoneBook.hpp"

void	PrintHeader(void)
{
	std::cout << std::string(45, '_') << std::endl;
	std::cout << std::setw(10);
	std::cout << "|     index|" << std::setw(10);
	std::cout << "first Name|" << std::setw(10);
	std::cout << " last Name|" << std::setw(10);
	std::cout << "  nickname|";
	std::cout << std::endl;
	std::cout << "|" << std::string(10, '-') << "|";
	std::cout << std::string(10, '-') << "|";
	std::cout << std::string(10, '-') << "|";
	std::cout << std::string(10, '-') << "|";

	std::cout << std::endl;

}

std::string	CheckStr(std::string s)
{
	if (s.length() > 10)
	{
		s.resize(10);
		s.replace(9,10,".");
	}
	else
		return (s);

	return (s);
}

int	PhoneBook::ui_PhoneBook(Contact *c)
{
	int id;

	id = 0;
	PrintHeader();
	while (c[id].FirstName != "")
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << c[id].id << "|" << std::setw(10) << std::right;
		std::cout << CheckStr(c[id].FirstName) << "|" << std::setw(10) << std::right;
		std::cout << CheckStr(c[id].LastName) << "|" << std::setw(10) << std::right;
		std::cout << CheckStr(c[id].NickName) << "|"; //<< std::setw(10) << std::right;
		std::cout << std::endl;
		id++;
	}
	std::cout << std::string(45, '_') << std::endl;
	std::cout << std::endl;
	return (id);
}

void	PhoneBook::PrintContac(Contact *c, int i)
{
	std::cout << c[i].FirstName << std::endl;
	std::cout << c[i].LastName << std::endl;
	std::cout << c[i].NickName << std::endl;
	std::cout << c[i].PhoneNum << std::endl;
	std::cout << c[i].Secret << std::endl;
}

