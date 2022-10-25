#include "ShrubberyCreationForm.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 0, 145, 137),
	_dst("def dest") {
	std::cout << "ShrubberyCreationForm Default Constructor " << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string dst) :
	Form("ShrubberyCreationForm", 0, 145, 137),
	_dst(dst) {
	std::cout << "ShrubberyCreationForm INIT Constructor " << this << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
// 	std::cout << "ShrubberyCreationForm copy Constructor " << this << std::endl;
// }

// ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
// 	std::cout << "ShrubberyCreationForm asignation Constructor " << this << std::endl;
// 	//this->type = a.getType();
// 	return (*this);
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

/********************************/
/*		Members functions		*/
/********************************/
