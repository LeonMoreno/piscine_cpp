#include "Ejer.hpp"

Ejer::Ejer(int p1, char p2) : num(p1), c(p2) {
	// this->num = p1;
	// this->c = p2;

	std::cout << "Comienza el CONSTRUCTOR" << std::endl;
	std::cout << "this->num = " << this->num << std::endl;
	std::cout << "this->c = " << this->c << std::endl;
	return ;
}

Ejer::~Ejer(void) {
	std::cout << "Comienza el DESTRUCTOR" << std::endl;
	return ;
}
