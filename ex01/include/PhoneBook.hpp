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
	void	search();
	int		ui_PhoneBook(Contact *c);
	void	PrintContac(Contact *c, int i);

};

#endif
