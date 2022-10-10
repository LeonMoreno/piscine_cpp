#include <Animal.hpp>

AAnimal::AAnimal ( void ) : _type("AAnimal") {
	std::cout << "AAnimal: Defult Constructor " << this << std::endl;
}

AAnimal::AAnimal ( AAnimal const & src ) {
	std::cout << "AAnimal: Copy Constructor " << this << std::endl;
	this->_type = src._type;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal: Destructor " << this << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & a ) {
	std::cout << "AAnimal: Assignation Constructor " << this << std::endl;
	this->_type = a._type;
	return (*this);
}

std::string AAnimal::getType( void ) {
	return (this->_type);
}

void	AAnimal::makeSound( void ) {
	std::cout << "AAnimal: AnicMAL AnicMAL AnicMAL" << std::endl;
}
