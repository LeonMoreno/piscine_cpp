#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal ( void ) : _type("WrongAnimal") {
	std::cout << "WrongAnimal: Defult Constructor " << this << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const & src ) {
	std::cout << "WrongAnimal: Copy Constructor " << this << std::endl;
	this->_type = src._type;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal: Destructor " << this << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & a ) {
	std::cout << "WrongAnimal: Assignation Constructor " << this << std::endl;
	this->_type = a._type;
	return (*this);
}

std::string WrongAnimal::getType( void ) {
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) {
	std::cout << "WrongAnimal: AnicMAL AnicMAL AnicMAL" << std::endl;
}
