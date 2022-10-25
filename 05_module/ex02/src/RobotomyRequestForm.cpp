#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", 0, 72, 45),
	_dst("def dest") {
	// std::cout << "RobotomyRequestForm Default Constructor " << this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string dst) :
	AForm("RobotomyRequestForm", 0, 72, 45),
	_dst(dst) {
	// std::cout << "RobotomyRequestForm INIT Constructor " << this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {
	this->_dst = src.getDest();
	std::cout << "RobotomyRequestForm copy Constructor " << this << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	std::cout << "RobotomyRequestForm asignation Constructor " << this << std::endl;
	this->_dst = rhs.getDest();
	this->setSign(rhs.getSign());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
std::string	RobotomyRequestForm::getDest(void) const {
	return (this->_dst);
}

/********************************/
/*		Members functions		*/
/********************************/
void	RobotomyRequestForm::beSigned(Bureaucrat b) {
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
	}
}

void	RobotomyRequestForm::execution(void) {
	std::cout << "some drilling noises" << std::endl;
	std::cout << "some drilling noises" << std::endl;
	std::cout << this->getDest() << ": has been robotomized successfully 50% of the time." << std::endl;
}

/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, RobotomyRequestForm const & f) {
	out << "Form: " << f.getName() << " | ";
	out << "Sing: " << f.getSign() << " | ";
	out << "grade sing: " << f.getGradeRequiredSign() << " | ";
	out << "grade exe: " << f.getGradeRequiredEx()  << " | ";
	out << "dest: " << f.getDest();
	return (out);
}
