#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	std::cout <<  YEL "Dog :" << RESET << "Default Constructor" << this << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog : Default Destructor" << std::endl;
}

void Dog::makeSound( void ) {
	std::cout << "guAuuu guAuuu" << std::endl;
}

void	Dog::newBrain( void ) {
	this->
}
