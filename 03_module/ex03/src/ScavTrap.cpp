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

// public member functions -- Metodos (out subject)
/**
 * @brief Function Overloading - Polymorphism
 * Remplazo metodo de class padre.
 * @param target - instance FragTrap
 */

void	ScavTrap::attack(ClapTrap & target) {
	if (this->getHitP() > 0 && this->getEnergy() > 0
		&& target.getHitP() > 0)
	{
		std::cout << "Instance ScavTrap " << this->getName();
		std::cout << " attacks " << target.getName() << ", ";
		std::cout << "causing " << this->getAttackDamage();
		std::cout << " points of damage! " << std::endl;
		this->setEnergy(this->getEnergy() -1);
		target.setHitP(target.getHitP() - this->getAttackDamage());
	}
	else
	{
		std::cout << "Attack Imposible : ";
		if (this->getHitP() <= 0)
			std::cout << this->getName() << "Is Die " <<  std::endl;
		else if (this->getEnergy() <= 0)
			std::cout << this->getName() << " Out energy " <<  std::endl;
		else if (target.getHitP() <= 0)
			std::cout << target.getName() << " Is DIe" <<  std::endl;
	}
}

//Metodo propio
void	ScavTrap::guardGate( ) {
	std::cout << "ScavTrap " << this->getName() << "is now in Gate keeper mode." << std::endl;
}
