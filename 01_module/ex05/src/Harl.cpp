#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. \
		You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. \
		I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error ( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain( std::string level )
{
	// void	(Harl::*func)() = &Harl::_debug;
// // 		void	(Harl::*func)() = &Harl::_debug;
// // 		(this->*func)();	}

	switch (strToint(level))
	{
	case	359: //DEBUG
		std::cout << "Aqui DEBUG\n";
		break;
	case	300: //INFO
		std::cout << "Aqui INFO\n";
		break;
	case	534: // WARNING
		std::cout << "Aqui WARNING\n";
		break;
	case	394: // ERROR
		std::cout << "Aqui ERROR\n";
		break;
	default:
		std::cout << "Aqui NINGUNO\n";
		break;
	}
 }
