#include "This.hpp"

This::This(void) {
	std::cout << "Llamando el CONSTRUCTOR" << std::endl;
	this->x = 7;
	std::cout << "this->x = " << this->x << std::endl;
	this->ejem();
	return ;
}

This::~This(void) {
	std::cout << "Llamando DESTRUCTOR" << std::endl;
	return ;
}

void	This::ejem(void)
{
	std::cout << "Aqui En EJEMPLO" << std::endl;
	return ;
}
