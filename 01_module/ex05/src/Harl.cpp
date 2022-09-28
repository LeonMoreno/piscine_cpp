/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:44:22 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:44:23 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::_debug( void )
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special- ketchup burger. \nI really do!" << std::endl;
	return ;
}

void	Harl::_info( void )
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::_warning( void )
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error ( void )
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain( std::string level )
{
	// 		void	(Harl::*func)() = &Harl::_debug; // only one
	void	(Harl::*func[4])() =  {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	switch (strToint(level))
	{
	case	359:   //DEBUG
		(this->*func[0])();
		break;
	case	300:  //INFO
		(this->*func[1])();

		break;
	case	534:   // WARNING
		(this->*func[2])();
		break;
	case	394:  // ERROR
		(this->*func[3])();
		break;
	default:
		std::cout << "Not Match\n";
	}

 }
