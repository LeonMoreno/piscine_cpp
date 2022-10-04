#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << YEL "ScavTrap default Constructor " << this << RESET << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap( src ) {
	std::cout << YEL "ScavTrap COPY Constructor " << this << RESET << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & s) {
	std::cout << YEL "ScavTrap assignation Constructor " << this << RESET << std::endl;
	if (this != &s)
	{
		this->setName(s.getName());
		this->setAttackDamage(getAttackDamage());
		this->setEnergy(getEnergy());
		this->setHitP(getHitP());
	}
	return *this;
}


ScavTrap::~ScavTrap() {
	std::cout << REDHB "ScavTrap Destructor " << this << RESET << std::endl;

}
