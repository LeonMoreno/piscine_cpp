#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

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
	int		ui_PhoneBook(Contact *c) const;
	void	PrintContac(Contact *c, int i) const;

};

#endif
