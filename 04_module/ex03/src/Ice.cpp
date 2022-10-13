#include "Ice.hpp"

Ice::Ice(void) : AMateria() {
	std::cout << "Ice Default Constructor " << this << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const & src) {
	std::cout << "Ice copy Constructor " << this << std::endl;
	this->type = src.getType();
}

Ice & Ice::operator=(Ice const & a) {
	std::cout << "Ice asignation Constructor " << this << std::endl;
	this->type = a.getType();
	return (*this);
}

Ice::~Ice(void) {
	std::cout << "Ice DesTRUCTOR " << this << std::endl;
}

std::string const & AMateria::getType() const {
	return(this->type);
}

// Ice* Ice::clone() const {
// 	return (this);
// }
