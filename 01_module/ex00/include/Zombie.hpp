/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:49:48 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 15:49:49 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__HPP
#define __ZOMBIE__HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string     _name;

public:
    Zombie(std::string name);
    ~Zombie();
    void        announce( void );

    std::string*	getName( void );

};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
