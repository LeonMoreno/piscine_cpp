#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "zombie creado" << std::endl;
	// Zombie::announce();
	return;
}

Zombie::~Zombie()
{
	std::cout << "zombie: " << this->_name << " Delete" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ":";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name)
{
	this->_name = name;
}
