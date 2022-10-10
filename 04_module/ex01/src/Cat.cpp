#include <Cat.hpp>

Cat::Cat ( void ) {
	this->_type = "Cat";
	std::cout << "Cat: Defult Constructor " << this << std::endl;
}

Cat::Cat ( Cat const & src ) : Animal(src) {
	std::cout << "Cat: Copy Constructor " << this << std::endl;
	// this->_type = src._type;
}

Cat::~Cat( void ) {
	std::cout << "Cat: Destructor " << this << std::endl;
}

Cat & Cat::operator=( Cat const & a ) {
	std::cout << "Cat: Assignation Constructor " << this << std::endl;
	this->_type = a._type;
	return (*this);
}

void	Cat::makeSound( void ) {
	std::cout << "Cat: Miauuu Miauuuuu" << std::endl;
}
