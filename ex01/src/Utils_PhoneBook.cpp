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

int	PhoneBook::ui_PhoneBook(Contact *c) const
{
	int id;

	id = 0;
	PrintHeader();
	while (c[id].GetFname() != "" && id <= 7)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << c[id].GetId() << "|" << std::setw(10) << std::right;
		std::cout << CheckStr(c[id].GetFname()) << "|" << std::setw(10) << std::right;
		std::cout << CheckStr(c[id].GetLname()) << "|" << std::setw(10) << std::right;
		std::cout << CheckStr(c[id].GetNname()) << "|";
		std::cout << std::endl;
		id++;
	}
	std::cout << std::string(45, '_') << std::endl;
	std::cout << std::endl;
	return (id);
}

void	PhoneBook::PrintContac(Contact *c, int i) const
{
	std::cout << "\n *** Contact INFO ***\n" << std::endl;
	std::cout << "First Name: " << c[i].GetFname() << std::endl;
	std::cout << "Last Name: " << c[i].GetLname() << std::endl;
	std::cout << "NickName: " << c[i].GetNname() << std::endl;
	std::cout << "Phone number: " << c[i].GetPhoNum() << std::endl;
	std::cout << "Secret: " << c[i].GetSecret() << std::endl << std::endl;
}

