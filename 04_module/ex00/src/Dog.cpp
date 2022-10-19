#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	std::cout <<  YEL "Dog :" << RESET << "Default Constructor" << this << std::endl;
}

Dog::Dog(Dog const & src) {
	std::cout << GRN "Dog: " RESET " COPY Constructor" << this << std::endl;
	this->type = src.type;
}

Dog & Dog::operator=(Dog const & d) {
	std::cout << "Dog: Asignation Constructor " << this  << std::endl;
	this->type = d.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog : Default Destructor" << std::endl;
}

void Dog::makeSound( void ) {
	std::cout << "guAuuu guAuuu" << std::endl;
}
