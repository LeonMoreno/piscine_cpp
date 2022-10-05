#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") {
	std::cout << "Animal : Default Constructor" << std::endl;
}

Animal::Animal( Animal const & src ) {
	this->type = src.type;
	std::cout << "Animal : Copy Constructor" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal : Default Destructor" << std::endl;
}

Animal & Animal::operator=(Animal const & a) {
	std::cout << "Animal : Asignation Constructor" << std::endl;
	this->type = a.type;
	return (*this);
}

std::string Animal::getType( void ) {
	return (this->type);
}
