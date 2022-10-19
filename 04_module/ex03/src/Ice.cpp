#include "Ice.hpp"

Ice::Ice(void) : AMateria() {
	std::cout << "Ice Default Constructor " << this << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const & src) : AMateria(src){
	// this->_tmp = src._tmp;
	std::cout << "Ice copy Constructor " << this << std::endl;
}

Ice & Ice::operator=(Ice const & a) {
	std::cout << "Ice asignation Constructor " << this << std::endl;
	this->type = a.getType();
	return (*this);
}

Ice::~Ice(void) {
	std::cout << "Ice DesTRUCTOR " << this << std::endl;
}

// std::string const & AMateria::getType() const {
// 	return(this->type);
// }

Ice* Ice::clone() const {
	Ice *tmp = new Ice(*this);
	return (tmp);
	// return ((Ice *)this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

