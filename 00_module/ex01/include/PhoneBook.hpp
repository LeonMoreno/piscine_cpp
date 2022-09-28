/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:26:49 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 13:26:50 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
