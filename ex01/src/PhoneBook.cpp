#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_id = 0;
	std::cout << "\n\t ## Welcome to PhoneBook! ##" << std::endl << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Good bye" << std::endl;
}

std::string	ValidStr(std::string s)
{
	std::string str;

	str = "";
	while (str.length() == 0)
	{
		std::cout << s;
		std::getline(std::cin, str);
		if (str.length() == 0)
			std::cout << "Sorry line can't be empty\n";
	}
	return (str);
}

void	PhoneBook::add(void)
{
	if (this->_id > 7)
	{
		std::cout << "Limit reached\n";
		this->_id = 0;
	}
	this->contact[this->_id].SetFname(this->_id, ValidStr("✗ Enter First Name: "));
	this->contact[this->_id].SetLname(ValidStr("✗ Enter Last Name: "));
	this->contact[this->_id].SetNname(ValidStr("✗ Enter Nick Name: "));
	this->contact[this->_id].SetPhoNum(ValidStr("✗ Enter Phone Number: "));
	this->contact[this->_id].SetSecret(ValidStr("✗ Enter Dark Secret: "));
	std::cout << "** Contact Saved: " << this->contact[this->_id].GetFname() << std::endl << std::endl;
	this->_id++;
	return ;
}

void	PhoneBook::search (void)
{
	int	i;
	int	id_max;
	std::string s;
	if (this->contact[0].GetFname() == "")
	{
		std::cout << "Sorry empty PhoneBook" << std::endl;
		return ;
	}
	id_max = ui_PhoneBook(this->contact);
	i = 100;
	while (i < 0 || i > id_max - 1)
	{
		s = ValidStr("Enter index Contact: ");
		if (s[0] >= '0' && s[0] <= '9')
			i = std::stoi(s);
		if (i < 0 || i > id_max - 1)
			std::cout << "Bad Index " << std::endl;
	}
	system("clear");
	PrintContac(this->contact, i);
}

