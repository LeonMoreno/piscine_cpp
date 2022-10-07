#include "WrongCat.hpp"
#include "colours.hpp"


WrongCat::WrongCat( void ) {
	this->type = "WrongCat";
	std::cout << CYN "WrongCat :" << RESET <<  "Default Constructor"  << this << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat : Default Destructor" << std::endl;
}

void WrongCat::makeSound( void ) {
	std::cout << "mIaauu mIauuuu" << std::endl;
}
