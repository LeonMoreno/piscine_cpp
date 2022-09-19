#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::SetFname(int id, std::string s)
{
	this->id = id;
	this->FirstName = s;
}

void	Contact::SetLname(std::string s) { this->LastName = s; }

void	Contact::SetNname(std::string s) { this->NickName = s; }

void	Contact::SetPhoNum(std::string s) { this->PhoneNum = s; }

void	Contact::SetSecret(std::string s) { this->Secret = s; }

