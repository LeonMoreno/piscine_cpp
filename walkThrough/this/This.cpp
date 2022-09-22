#include "This.hpp"

This::This(void) {
	std::cout << "Llamando el CONSTRUCTOR" << std::endl;
	this->x = 7;
	std::cout << "this->x = " << this->x << std::endl;
	this->ejem();
	std::cout << "this->x = " << this->x << std::endl;
	return ;
}

This::~This(void) {
	std::cout << "Llamando DESTRUCTOR" << std::endl;
	return ;
}

void	This::ejem(void)
{
	this->x = 23;
	std::cout << "Aqui En EJEMPLO" << std::endl;
	return ;
}

std::string	This::algo(void)
{
	this->x = 98;
	return ("Leo");
}
