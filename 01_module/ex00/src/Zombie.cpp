/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:50:13 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 15:50:14 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	Zombie::announce();
	return ;
}

Zombie::~Zombie()
{
	std::cout << "zombie: " << this->_name << " Delete" << std::endl;
	return ;
}

void	Zombie::announce ( void )
{
	std::cout << this->_name << ":";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
