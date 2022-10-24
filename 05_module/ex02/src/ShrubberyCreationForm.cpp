#include "ShrubberyCreationForm.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor " << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : _sign(src._sign) {
	std::cout << "ShrubberyCreationForm copy Constructor " << this << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	std::cout << "ShrubberyCreationForm asignation Constructor " << this << std::endl;
	//this->type = a.getType();
	(void) rhs;
	return (*this);
}

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

void	ShrubberyCreationForm::beSigned(ShrubberyCreationForm b) {
	if (b.getGrade() <= this->getGradeRequiredSign())
	{
		this->_sign = true;
		b.signForm();
		std::cout << this->getName() << std::endl;
	}
	else
	{
		std::cout << b.getName() << " couldn't sign ";
		std::cout << this->getName() << " because son grade is ";
		std::cout << b.getGrade();
		std::cout <<  " and this form need at least grade " << this->getGradeRequiredSign();
		std::cout << std::endl;
	}

}
