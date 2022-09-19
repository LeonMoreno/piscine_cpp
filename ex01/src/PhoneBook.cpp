#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_id = 0;
	std::cout << "\n\t ## Welcome to PhoneBook! ##" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "DESTRUCTOR" << std::endl;
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
	this->contact[this->_id].SetFname(this->_id, ValidStr("✗ Enter First Name: "));
	this->contact[this->_id].SetLname(ValidStr("✗ Enter Last Name: "));
	this->contact[this->_id].SetNname(ValidStr("✗ Enter Nick Name: "));
	this->contact[this->_id].SetPhoNum(ValidStr("✗ Enter Phone Number: "));
	this->contact[this->_id].SetSecret(ValidStr("✗ Enter Dark Secret: "));
	std::cout << "Contact Saved - " << this->contact[this->_id].FirstName << std::endl;
	this->_id++;
	return ;
}

void	PhoneBook::PrintContacts(void)
{
	int id;

	id = 0;
	while (this->contact[id].FirstName != "")
	{
		std::cout << this->contact[id].FirstName << std::endl;
		id++;
	}
}

