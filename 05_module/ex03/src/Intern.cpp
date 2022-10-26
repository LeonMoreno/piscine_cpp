#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Intern::Intern() {
	std::cout << "Intern Default Constructor " << this << std::endl;
}

Intern::Intern(Intern const & src) {
	std::cout << "Intern copy Constructor " << this << std::endl;
	(void) src;
}

Intern & Intern::operator=(Intern const & rhs) {
	std::cout << "Intern asignation Constructor " << this << std::endl;
	(void) rhs;
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
AForm  *Intern::makeForm(std::string form, std::string dest) {
	AForm *f;

	f = NULL;
	switch (checkForm(form))
	{
	case 1700 : // robotomy request
			f = new RobotomyRequestForm(dest);
		break;
	case 1960 : // presidential pardon
			f = new PresidentialPardonForm(dest);
		break;
	case 1867 : // shrubbery creation
			f = new ShrubberyCreationForm(dest);
		break;
	default:
		throw Intern::FormDontExist();
		break;
	}
	std::cout << "res = " << checkForm(form) << std::endl;

	return (f);
}

int	Intern::checkForm(std::string form) {
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (form[i] != '\0')
	{
		res += (int)form[i];
		i++;
	}
	return (res);
}



/********************************/
/*		Members functions		*/
/********************************/
