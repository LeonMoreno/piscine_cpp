/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:22:56 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:22:57 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__HPP
#define __HUMANA__HPP

#include "Weapon.hpp"

class HumanA
{
private:
/* data */
    std::string _name;
public:
    HumanA( std::string name, Weapon& w );
    ~HumanA();
    /// @brief Una referencia es const -
    // debe ser inicializada en su declaracion / inicializacion
    Weapon& Wa;
    void    attack( void );
};

#endif
