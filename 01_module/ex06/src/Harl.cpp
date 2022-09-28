/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:45:27 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 17:10:38 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::_debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special- ketchup burger. \nI really do!\n" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*func[4])() = {&Harl::_debug, &Harl::_info,
		&Harl::_warning, &Harl::_error};

	switch (strToint(level))
	{
		case  359: //DEBUG
			{
				(this->*func[0])();
				(this->*func[1])();
				(this->*func[2])();
				(this->*func[3])();
			}
			break;
		case  300: // INFO
			{
				(this->*func[1])();
				(this->*func[2])();
				(this->*func[3])();
			}
			break;
		case  534: // INFO
			{
				(this->*func[2])();
				(this->*func[3])();
			}
			break;
		case  394: // ERROR
				(this->*func[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

