/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:22:59 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:23:00 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__HPP
#define __HUMANB__HPP

#include "Weapon.hpp"

class HumanB
{
private:
/* data */
    std::string _name;
    Weapon*  _Wb;
public:
    HumanB( std::string name);
    ~HumanB();
    void    attack( void );
    void    setWeapon(Weapon & club);
};

#endif
