#include "Animal.hpp"

/* Constructors and Destructor */

Animal::Animal(void) {
	std::cout << "Animal: Default Constructor " << this << std::endl;
}

Animal::Animal(std::string name, int legs) :
_legs(legs),
_name(name) {
	std::cout << "Animal: INIT Constructor " << this << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal: COPY Constructor " << this << std::endl;
	this->_name = src._name;
	this->_legs = src._legs;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor " << this << std::endl;
}

/* operator overload = */
Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "Animal: Asignation Constructor " << this << std::endl;
	this->_name = rhs._name;
	this->_legs = rhs._legs;
	return (*this);
}

/* Getters and Setters */

int	Animal::getLegs(void) {
	return (this->_legs);
}

std::string	Animal::getName(void) {
	return (this->_name);
}

/* Members functions*/
void Animal::doSound(void) {
	std::cout << "AniCAL AniCAL " << this << std::endl;
}

