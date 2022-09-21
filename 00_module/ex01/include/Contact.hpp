#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

#include <iostream>
#include <string> //std::string
#include <iomanip> // std::setw

class Contact
{
private:
	int			_id;
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_PhoneNum;
	std::string	_Secret;
public:
	int			GetId(void);
	std::string	GetLname(void);
	std::string	GetFname(void);
	std::string	GetNname(void);
	std::string	GetPhoNum(void);
	std::string	GetSecret(void);
	void		SetFname(int id, std::string s);
	void		SetLname(std::string s);
	void		SetNname(std::string s);
	void		SetPhoNum(std::string s);
	void		SetSecret(std::string s);

	Contact(/* args */);
	~Contact();
};

#endif

