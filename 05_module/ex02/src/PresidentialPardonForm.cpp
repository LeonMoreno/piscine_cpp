#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("PresidentialPardonForm", 0, 25, 5),
	_dst("def dest") {
	// std::cout << "PresidentialPardonForm Default Constructor " << this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string dst) :
	AForm("PresidentialPardonForm", 0, 25, 5),
	_dst(dst) {
	// std::cout << "PresidentialPardonForm INIT Constructor " << this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {
	this->_dst = src.getDest();
	std::cout << "PresidentialPardonForm copy Constructor " << this << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	std::cout << "PresidentialPardonForm asignation Constructor " << this << std::endl;
	this->_dst = rhs.getDest();
	this->setSign(rhs.getSign());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
std::string	PresidentialPardonForm::getDest(void) const {
	return (this->_dst);
}

/********************************/
/*		Members functions		*/
/********************************/
void	PresidentialPardonForm::beSigned(Bureaucrat b) {
	if (b.getGrade() <= this->getGradeRequiredSign())
	{
		this->setSign(true);
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
		throw AForm::GradeTooLowException();
	}
}

void	PresidentialPardonForm::execution(void) {
	std::cout << this->getDest() << ":  has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, PresidentialPardonForm const & f) {
	out << "Form: " << f.getName() << " | ";
	out << "Sing: " << f.getSign() << " | ";
	out << "grade sing: " << f.getGradeRequiredSign() << " | ";
	out << "grade exe: " << f.getGradeRequiredEx()  << " | ";
	out << "dest: " << f.getDest();
	return (out);
}
