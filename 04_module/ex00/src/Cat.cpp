#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << "Cat: Default Constructor" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat: Default Destructor" << std::endl;
}

void Cat::makeSound( void ) {
	std::cout << "mIaauu mIauuuu" << std::endl;
}
