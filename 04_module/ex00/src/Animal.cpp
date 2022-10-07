#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") {
	std::cout << MAG "Animal : " << RESET <<  "Default Constructor " << this << std::endl;
}

Animal::Animal( Animal const & src ) {
	this->type = src.type;
	std::cout << "Animal : Copy Constructor " << this  << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal : Default Destructor " << this  << std::endl;
}

Animal & Animal::operator=(Animal const & a) {
	std::cout << "Animal : Asignation Constructor " << this  << std::endl;
	this->type = a.type;
	return (*this);
}

std::string Animal::getType( void ) {
	return (this->type);
}

void	Animal::makeSound( void ){
	std::cout << "Anical Anical Anical " << this << std::endl;
}
