#include "WrongCat.hpp"
#include "colours.hpp"


WrongCat::WrongCat( void ) {
	this->type = "WrongCat";
	std::cout << CYN "WrongCat :" << RESET <<  "Default Constructor"  << this << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) {
	std::cout << GRN "WrongCat: " RESET " COPY Constructor" << this << std::endl;
	this->type = src.type;
}

WrongCat & WrongCat::operator=(WrongCat const & d) {
	std::cout << "WrongCat: Asignation Constructor " << this  << std::endl;
	this->type = d.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat : Default Destructor" << std::endl;
}

void WrongCat::makeSound( void ) {
	std::cout << "mIaauu mIauuuu" << std::endl;
}
