#include "Bureaucrat.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Bureaucrat::Bureaucrat() : _name("nameless"), _grade(150) {
	//std::cout << "Bureaucrat Default Constructor " << this << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {
	//std::cout << "Bureaucrat copy Constructor " << this << std::endl;
}

Bureaucrat::~Bureaucrat() {
//	std::cout << "Bureaucrat DesTRUCTOR " << this << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
//	std::cout << "Bureaucrat INT Constructor " << this << std::endl;
	checkGrade(grade);
	}

/* Operator Overload for canonical */
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	std::cout << "Bureaucrat asignation Constructor " << this << std::endl;
	// this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

/* Operator Overload */
Bureaucrat	Bureaucrat::operator++(void) {
	checkGrade(this->getGrade() + 1);
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int) {
	Bureaucrat tp(*this);

	checkGrade(this->getGrade() + 1);
	return (tp);
}

Bureaucrat	Bureaucrat::operator--(void)
{
	checkGrade(this->getGrade() - 1);
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int) {
	Bureaucrat tp(*this);

	checkGrade(this->getGrade() - 1);
	return (tp);
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

std::string Bureaucrat::getName() const{
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

/********************************/
/*		Members functions		*/
/********************************/

/* Cambio hecho despues de terminar este ex01 y hablar con minsu*/
void	Bureaucrat::checkGrade(int n) {
	// try {
	if (n < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (n > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = n;
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
}

Bureaucrat	Bureaucrat::upGrade(int n) {
	checkGrade(this->getGrade() - n);
	return (*this);
}

Bureaucrat	Bureaucrat::downGrade(int n) {
	checkGrade(this->getGrade() + n);
	return (*this);
}

void	Bureaucrat::signForm() {
	std::cout << this->getName() << " signed ";
}

void	Bureaucrat::executeForm(AForm const & form) const { 
	std::cout << this->getName() << " executed ";
	std::cout << form.getName() << std::endl;
}


/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, Bureaucrat const & f) {
	out << f.getName() << ", ";
	out << "bureaucrat grade ";
	out << f.getGrade();
	return (out);
}

