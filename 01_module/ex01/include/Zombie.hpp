/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:53:41 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 15:53:42 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();
	void	announce( void );
	void	setName ( std::string name );
};

Zombie*    zombieHorde( int N, std::string name );

#endif
