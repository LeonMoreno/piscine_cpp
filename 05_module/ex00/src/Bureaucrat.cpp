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
	// try {
			checkGrade(grade);
			// this->_grade = grade;
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	}

/* Operator Overload for canonical */
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	std::cout << "Bureaucrat asignation Constructor " << this << std::endl;
	// this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

/* Operator Overload */
void	Bureaucrat::operator++(void)
{
	checkGrade(this->getGrade() + 1);
}

Bureaucrat	Bureaucrat::operator--(void)
{
	checkGrade(this->getGrade() - 1);
	return (*this);
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

// void	Bureaucrat::GradeTooLowException(void) {
// 	std::cout << "Grade Too Low Exception" << std::endl;
// }

// void	Bureaucrat::GradeTooHighException(void) {
// 	std::cout << "Grade Too High Exception" << std::endl;
// }


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

void	Bureaucrat::upGrade(int n) {
	checkGrade(this->getGrade() - n);
}

void	Bureaucrat::downGrade(int n) {
	checkGrade(this->getGrade() + n);
}

/* Operator Overload */

std::ostream & operator<<(std::ostream & out, Bureaucrat const & f) {
	out << f.getName() << ", ";
	out << "bureaucrat grade ";
	out << f.getGrade() << std::endl;
	return (out);
}
