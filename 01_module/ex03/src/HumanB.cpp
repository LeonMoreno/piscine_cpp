/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:12 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:23:13 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name)
{

}

HumanB::~HumanB()
{

}

/**
 * @brief Envio una copia de la variable club pero la recibo
 * como referencia. Asi luego puedeo obtener su direccion &.
 *
 * @param club: Instancia de Weapon.
 */
void	HumanB::setWeapon(Weapon & club)
{
	this->_Wb = &club;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " " << "attacks with their ";
	std::cout << this->_Wb->getType() << std::endl;
}
