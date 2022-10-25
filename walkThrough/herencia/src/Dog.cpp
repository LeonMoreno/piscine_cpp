#include "Dog.hpp"

/* Constructors and Destructor */

Dog::Dog(void) : Animal() {
	std::cout << "Dog: Default Constructor " << this << std::endl;
}

Dog::Dog(std::string name, int legs) : Animal(name, legs) {
	std::cout << "Dog: INIT Constructor " << this << std::endl;
	this->_type = "dog";
}

// Dog::Dog(Dog const & src) {
// 	std::cout << "Dog: COPY Constructor " << this << std::endl;
// 	this->_name = src._name;
// 	this->_legs = src._legs;
// }

Dog::~Dog()
{
	std::cout << "Dog: Destructor " << this << std::endl;
}

/* Getters and Setters */

std::string	Dog::getType(void) {
	return (this->_type);
}

/* Funciones miembro*/
void	Dog::doSound(void) {
	std::cout << "GuaGua Guauuu" << std::endl;
}
