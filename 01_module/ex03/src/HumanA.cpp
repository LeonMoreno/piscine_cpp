#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& w ) : _name(name), Wa(w)
{
	//this->Wa = w; Debo utilizar inicializacion lista.
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " " << "attacks with their ";
	std::cout << Wa.getType() << std::endl;
}
