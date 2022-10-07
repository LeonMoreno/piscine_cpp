#include "WrongAnimal.hpp"
#include "colours.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
	std::cout << CYN "WrongAnimal :" << RESET << "Default Constructor" << this << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
	this->type = src.type;
	std::cout << "WrongAnimal : Copy Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal : Default Destructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & a) {
	std::cout << "WrongAnimal : Asignation Constructor" << std::endl;
	this->type = a.type;
	return (*this);
}

std::string WrongAnimal::getType( void ) {
	return (this->type);
}

void	WrongAnimal::makeSound( void ){
	std::cout << "W_Anical W_Anical W_Anical" << std::endl;
}
