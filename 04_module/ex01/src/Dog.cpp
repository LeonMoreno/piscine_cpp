#include <Dog.hpp>

Dog::Dog ( void ) {
	this->_type = "Dog";
	std::cout << "Dog: Defult Constructor " << this << std::endl;
}

Dog::Dog ( Dog const & src ) : Animal(src) {
	std::cout << "Dog: Copy Constructor " << this << std::endl;
	// this->_type = src._type;
}

Dog::~Dog( void ) {
	std::cout << "Dog: Destructor " << this << std::endl;
}

Dog & Dog::operator=( Dog const & a ) {
	std::cout << "Dog: Assignation Constructor " << this << std::endl;
	this->_type = a._type;
	return (*this);
}

void	Dog::makeSound( void ) {
	std::cout << "Dog: Gua Gua Guaaauuuuuu Gua Gua" << std::endl;
}
