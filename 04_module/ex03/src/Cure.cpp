#include "Cure.hpp"

Cure::Cure(void) : AMateria() {
	std::cout << "Cure Default Constructor " << this << std::endl;
	this->type = "cure";
}

// Cure::Cure(Cure const & src) {
// 	std::cout << "Cure copy Constructor " << this << std::endl;
// 	this->type = src.getType();
// }

Cure & Cure::operator=(Cure const & a) {
	std::cout << "Cure asignation Constructor " << this << std::endl;
	this->type = a.getType();
	return (*this);
}

Cure::~Cure(void) {
	std::cout << "Cure DesTRUCTOR " << this << std::endl;
}

// std::string const & AMateria::getType() const {
// 	return(this->type);
// }

Cure* Cure::clone() const {
	Cure *tmp = new Cure(*this);
	return (tmp);
	// return ((Cure *)this);
}
