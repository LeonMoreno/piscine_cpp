#include "Intern.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Intern::Intern()
{
	std::cout << "Intern Default Constructor " << this << std::endl;
}

Intern::Intern(Intern const & src) : type(src.type) {
	std::cout << "Intern copy Constructor " << this << std::endl;
}

Intern & Intern::operator=(Intern const & rhs) {
	std::cout << "Intern asignation Constructor " << this << std::endl;
	//this->type = a.getType();
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

/********************************/
/*		Members functions		*/
/********************************/
