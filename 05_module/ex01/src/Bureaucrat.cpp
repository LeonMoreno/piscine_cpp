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
	std::cout << "Hi Minsu\n";
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

void	Bureaucrat::checkGrade(int n) {
	try {
	if (n < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (n > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = n;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

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

/* Remplazadas con nested classes
void	Bureaucrat::GradeTooLowException(void) {
	std::cout << "Grade Too Low Exception" << std::endl;
}

void	Bureaucrat::GradeTooHighException(void) {
	std::cout << "Grade Too High Exception" << std::endl;
} */


/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, Bureaucrat const & f) {
	out << f.getName() << ", ";
	out << "bureaucrat grade ";
	out << f.getGrade();
	return (out);
}

