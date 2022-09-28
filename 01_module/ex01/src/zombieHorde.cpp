/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:56:31 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 15:56:32 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie* x = new Zombie[N];

	for (int j = 0; j < N; j++)
	{
		x[j].setName(name);
		x[j].announce();
	}

	return (x);
}
