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
}

void	Harl::_info( void )
{
	std::cout << "[INFO]" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[WARNING]" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ERROR]" << std::endl;
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

