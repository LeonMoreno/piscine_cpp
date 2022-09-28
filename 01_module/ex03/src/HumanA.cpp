/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:08 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:23:09 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& w ) : _name(name), Wa(w)
{
	//this->Wa = w; Debo utilizar inicializacion lista.
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " " << "attacks with their ";
	std::cout << Wa.getType() << std::endl;
}
