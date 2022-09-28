/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:03 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:23:04 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__HPP
#define __WEAPON__HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;
public:
    Weapon( std::string t);
    ~Weapon();
    void        setType( std::string type );
    std::string const & getType() const;
};

#endif
