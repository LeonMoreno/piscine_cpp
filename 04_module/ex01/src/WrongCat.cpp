#include <WrongCat.hpp>

WrongCat::WrongCat ( void ) {
	this->_type = "WrongCat";
	std::cout << "WrongCat: Defult Constructor " << this << std::endl;
}

WrongCat::WrongCat ( WrongCat const & src ) : WrongAnimal(src) {
	std::cout << "WrongCat: Copy Constructor " << this << std::endl;
	// this->_type = src._type;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat: Destructor " << this << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & a ) {
	std::cout << "WrongCat: Assignation Constructor " << this << std::endl;
	this->_type = a._type;
	return (*this);
}

void	WrongCat::makeSound( void ) {
	std::cout << "WrongCat: Miauuu Miauuuuu" << std::endl;
}
