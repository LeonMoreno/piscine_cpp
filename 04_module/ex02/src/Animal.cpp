#include <Animal.hpp>

Animal::Animal ( void ) : _type("Animal") {
	std::cout << "Animal: Defult Constructor " << this << std::endl;
}

Animal::Animal ( Animal const & src ) {
	std::cout << "Animal: Copy Constructor " << this << std::endl;
	this->_type = src._type;
}

Animal::~Animal( void ) {
	std::cout << "Animal: Destructor " << this << std::endl;
}

Animal & Animal::operator=( Animal const & a ) {
	std::cout << "Animal: Assignation Constructor " << this << std::endl;
	this->_type = a._type;
	return (*this);
}

std::string Animal::getType( void ) {
	return (this->_type);
}

void	Animal::makeSound( void ) {
	std::cout << "Animal: AnicMAL AnicMAL AnicMAL" << std::endl;
}
