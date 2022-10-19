#include "Water.hpp"

Water::Water(void) : AMateria() {
	std::cout << "Water Default Constructor " << this << std::endl;
	this->type = "water";
}

Water::Water(Water const & src) : AMateria(src){
	// this->_tmp = src._tmp;
	std::cout << "Water copy Constructor " << this << std::endl;
}

Water & Water::operator=(Water const & a) {
	std::cout << "Water asignation Constructor " << this << std::endl;
	this->type = a.getType();
	return (*this);
}

Water::~Water(void) {
	std::cout << "Water DesTRUCTOR " << this << std::endl;
}

// std::string const & AMateria::getType() const {
// 	return(this->type);
// }

Water* Water::clone() const {
	Water *tmp = new Water(*this);
	return (tmp);
	// return ((Water *)this);
}

void	Water::use(ICharacter& target) {
	std::cout << "* The water is as dark as the soul of " << target.getName() << " *" << std::endl;
}
