/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:19 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:23:20 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

void	ft_HumanA( void )
{
	Weapon club = Weapon ("crude spiked club");
	HumanA bob ("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	return ;
}

void	ft_HumanB( void )
{
	Weapon club = Weapon ("crude spiked club");
	HumanB jim("jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return ;
}

int	main(void)
{
	ft_HumanA();
	ft_HumanB();

	return (0);
}
