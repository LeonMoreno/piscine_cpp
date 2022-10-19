#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << GRN "Cat: " RESET "Default Constructor" << this << std::endl;
}

Cat::Cat(Cat const & src) {
	std::cout << GRN "Cat: " RESET " COPY Constructor" << this << std::endl;
	this->type = src.type;
}

Cat & Cat::operator=(Cat const & d) {
	std::cout << "Cat: Asignation Constructor " << this  << std::endl;
	this->type = d.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << GRN "Cat: " RESET " DesTRUCTOR " << this << std::endl;
}

void Cat::makeSound( void ) {
	std::cout << "mIaauu mIauuuu" << std::endl;
}
