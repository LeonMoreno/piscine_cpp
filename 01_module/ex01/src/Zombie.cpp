#include "Zombie.hpp"

Zombie::Zombie( std::string name) : _name(name)
{
	Zombie:announce();
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
