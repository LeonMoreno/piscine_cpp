#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << YEL "ScavTrap default Constructor " << this << RESET << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap( src ) {
	std::cout << YEL "ScavTrap COPY Constructor " << this << RESET << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << REDHB "ScavTrap Destructor " << this << RESET << std::endl;

}
