#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << BLU "FragTrap default Constructor " << this << RESET << std::endl;
	this->setName("nameless");
	this->setHitP(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src ) {
	std::cout << BLU "FragTrap COPY Constructor " << this << RESET << std::endl;
}


FragTrap & FragTrap::operator=( FragTrap const & f) {
	std::cout << BLU "FragTrap ASIGNACion Constructor " << this << RESET << std::endl;
	if (this != &f) {
	this->setName(f.getName());
	this->setHitP(f.getHitP());
	this->setAttackDamage(f.getAttackDamage());
	this->setEnergy(f.getEnergy());
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << WHTB "FragTrap Destructor " << this << RESET << std::endl;
}

FragTrap::FragTrap( std::string name) : ClapTrap( name ) {
	std::cout << BLU "FragTrap INITialized Constructor " << this << RESET << std::endl;
	this->setHitP(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
}


void	FragTrap::highFivesGuys(void) {
	std::cout << BLU "FragTrap: " << this->getName();
	std::cout << " Dame esos 5 PARCERO" << RESET << std::endl;
}

// public member functions -- Metodos (out subject)
/**
 * @brief Function Overloading - Polymorphism
 * Remplazo metodo de class padre.
 * @param target - instance FragTrap
 */

void	FragTrap::attack(ClapTrap & target) {
	if (this->getHitP() > 0 && this->getEnergy() > 0
		&& target.getHitP() > 0)
	{
		std::cout << "Instance FragTrap " << this->getName();
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
