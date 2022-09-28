/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:44:25 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:44:26 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__HPP
#define __HARL__HPP

#include <iostream>
#include <string>

class Harl
{
private:
/* data */
    void _debug( void );
    void _info( void );
    void _warning( void );
    void _error( void );
public:
    Harl();
    ~Harl();
    void    complain( std::string level );
    // void    (Harl::*func)(); Lo deje en la func
};

int strToint    (std::string s);

#endif
