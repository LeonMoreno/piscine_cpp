#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	int	_id;
public:
	Contact contact[8];
	PhoneBook(/* args */);
	~PhoneBook();
	void	add();
	void	PrintContacts();

};

#endif
