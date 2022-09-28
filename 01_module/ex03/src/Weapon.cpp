/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:22 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:23:23 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string t)
{
	Weapon::setType(t);
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	const & Weapon::getType() const
{
	return (this->_type);
}
