#include "ClapTrap.hpp"

// Constructors and destructor

ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Clap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :  _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Clap INITialized Constructor" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) :  _name(src._name), _hitPoints(src._hitPoints),\
	_energyPoints(src._energyPoints), _attackDamage(src._attackDamage)  {
	std::cout << "Clap Copy Constructor" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & c) {
	std::cout << "Clap Asgination Constructor" << std::endl;
	this->_name = c._name;
	this->_hitPoints = c._hitPoints;
	this->_energyPoints = c._energyPoints;
	this->_attackDamage = c._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Clap Destructor" << std::endl;
}

// public member functions -- Metodos (demande subject)
void	ClapTrap::takeDamage(unsigned int amount) {
	this->_attackDamage += amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " increases to " << this->_attackDamage;
	std::cout << " theirs points of damage! " << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " attacks " << target << ", ";
		std::cout << "causing " << this->_attackDamage;
		std::cout << " points of damage! " << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		if (this->_hitPoints <= 0)
			std::cout << "Is Die " << std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << " Out energy " << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	std::cout << "Repaired ClapTrap " << this->_name;
	std::cout << " increases to " << this->_hitPoints;
	std::cout << " Hit points! " << std::endl;
}

// public member functions -- Metodos (out subject)
/**
 * @brief Function Overloading - Polymorphism
 *
 * @param target - instance ClapTrap
 */

void	ClapTrap::attack(ClapTrap & target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0
		&& target._hitPoints > 0)
	{
		std::cout << "Instance ClapTrap " << this->_name;
		std::cout << " attacks " << target._name << ", ";
		std::cout << "causing " << this->_attackDamage;
		std::cout << " points of damage! " << std::endl;
		this->_energyPoints -= 1;
		target._hitPoints -= this->_attackDamage;
	}
	else
	{
		std::cout << "Attack Imposible : ";
		if (this->_hitPoints <= 0)
			std::cout << this->_name << "Is Die " <<  std::endl;
		else if (this->_energyPoints <= 0)
			std::cout << this->_name << " Out energy " <<  std::endl;
		else if (target._hitPoints <= 0)
			std::cout << target._name << " Is DIe" <<  std::endl;
	}

}

// Getters & Setters
std::string	ClapTrap::getName ( void ) {
	return (this->_name);
}

void	ClapTrap::setName( std::string name ) {
	this->_name = name;
}

int			ClapTrap::getAttackDamage( void ) {
	return (this->_attackDamage);
}

int			ClapTrap::getEnergy( void ) {
	return (this->_energyPoints);
}

int			ClapTrap::getHitP( void ) {
	return (this->_hitPoints);
}

void	ClapTrap::getInfo( void ) {
	std::cout  <<  BRED "Name = "  << this->_name ;
	std::cout << " HitPoints = "  << this->_hitPoints;
	std::cout << " Energy = " << this->_energyPoints;
	std::cout << " Attack Damage = "  << this->_attackDamage;
	std::cout <<  "" RESET << std::endl;
}
