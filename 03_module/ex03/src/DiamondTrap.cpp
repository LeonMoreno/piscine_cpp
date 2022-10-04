#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap() {
	std::cout << "DiamonTrap DeFAULT Constructor" << this <<  std::endl;
	this->_name = "nameless";
	this->ScavTrap::setName("nameless_clap_name");
	this->ScavTrap::setHitP(FragTrap::getHitP());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	this->ScavTrap::setAttackDamage(FragTrap::getAttackDamage());

}

DiamondTrap::DiamondTrap( DiamondTrap const & src) : ScavTrap( src ), FragTrap() {
	std::cout << "DiamonTrap COPY Constructor" << this <<  std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & d) {
	std::cout << "DiamonTrap Asignation Constructor" << this <<  std::endl;
	 if (this != &d) {
		ScavTrap::setName(d.ScavTrap::getName());
		ScavTrap::setHitP(d.ScavTrap::getHitP());
		ScavTrap::setAttackDamage(d.ScavTrap::getAttackDamage());
		ScavTrap::setEnergy(d.ScavTrap::getEnergy());
	}
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamonTrap DESTRUCTOR" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name) : ScavTrap(name), FragTrap(name)  {
	std::cout << "DiamonTrap INITialized Constructor" << this <<  std::endl;
	this->_name = name;
	ScavTrap::setName(name + "_clap_name");
}

// Getters & Setters propio
void	DiamondTrap::whoAmI( void ) {
	std::cout << BLU "Diamon_Name = " <<  this->_name << RESET " // ";
	ScavTrap::getInfo();
}
