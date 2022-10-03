#include "Animal.hpp"

Animal::Animal (void ) : _name("animal"), _id(0) {
	std::cout << "Default Constructor animal addr = " << this << std::endl;
}

Animal::Animal ( Animal const & src ) : _name(src._name), _id(src._id) {
	std::cout << "copy Constructor animal addr = " << this << std::endl;
}

Animal & Animal::operator=( Animal const & a) {
	this->_name = a._name;
	this->_id = a._id;
	return *this;
}

Animal::~Animal ( void ) {
	std::cout << "Destructor animal\n";
}

Animal::Animal( std::string name, int id) : _name(name), _id(id) {
	std::cout << "INIT Constructor animal addr = " << this << std::endl;
}

std::string	Animal::getName( void ) {
	return (this->_name);
}

// CONSTRUC CAT

Cat::Cat (void ) : Animal( ) {
	std::cout << "Default Constructor CAT--- addr = " << this << std::endl;
}

Cat::~Cat  ( void ) {
	std::cout << "Destructor CAT\n";
}

Cat::Cat (std::string name, int id, int legs) : Animal(name, id) {
	std::cout << "INIT Constructor CAT--- addr = " << this << std::endl;
	_legs = legs;
}
