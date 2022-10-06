#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	std::cout << "Dog : Default Constructor" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog : Default Destructor" << std::endl;
}

void Dog::makeSound( void ) {
	std::cout << "guAuuu guAuuu" << std::endl;
}
