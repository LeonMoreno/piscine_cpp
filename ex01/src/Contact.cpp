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
	this->_id = id;
	this->_FirstName = s;
}

void	Contact::SetLname(std::string s) { this->_LastName = s; }

void	Contact::SetNname(std::string s) { this->_NickName = s; }

void	Contact::SetPhoNum(std::string s) { this->_PhoneNum = s; }

void	Contact::SetSecret(std::string s) { this->_Secret = s; }

std::string Contact::GetLname(void) { return (this->_LastName); }

std::string	Contact::GetFname(void) { return (this->_FirstName); }

std::string	Contact::GetNname(void) { return (this->_NickName); }

std::string	Contact::GetPhoNum(void) { return (this->_PhoneNum); }

std::string	Contact::GetSecret(void) { return (this->_Secret); }

int	Contact::GetId(void) { return (this->_id); }
