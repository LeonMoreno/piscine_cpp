#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string> //std::string
#include <iomanip> // std::setw

class Contact
{
private:
	/* data */
public:
	int			id;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNum;
	std::string	Secret;

	void	SetFname(int id, std::string s);
	void	SetLname(std::string s);
	void	SetNname(std::string s);
	void	SetPhoNum(std::string s);
	void	SetSecret(std::string s);

	Contact(/* args */);
	~Contact();
};

#endif

