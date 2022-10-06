#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->type = "WrongCat";
	std::cout << "WrongCat : Default Constructor" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat : Default Destructor" << std::endl;
}

void WrongCat::makeSound( void ) {
	std::cout << "mIaauu mIauuuu" << std::endl;
}
