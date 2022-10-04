#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << YEL "ScavTrap default Constructor " << this << RESET << std::endl;
	this->setName("nameless");
	this->setHitP(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
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

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) {
	std::cout << YEL "ScavTrap INIT Constructor " << this << RESET << std::endl;
	this->setHitP(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << GRNB "ScavTrap Destructor " << this << RESET << std::endl;

}

//Metodo propio
void	ScavTrap::guardGate( ) {
	std::cout << "ScavTrap " << this->getName() << "is now in Gate keeper mode." << std::endl;
}
