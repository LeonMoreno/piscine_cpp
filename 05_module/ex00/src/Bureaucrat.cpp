#include "Bureaucrat.hpp"

/*********************************/
/*	Constructors and Destructors */
/*********************************/

Bureaucrat::Bureaucrat() : _name("nameless"), _grade(150) {
	std::cout << "Bureaucrat Default Constructor " << this << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {
	std::cout << "Bureaucrat copy Constructor " << this << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	std::cout << "Bureaucrat asignation Constructor " << this << std::endl;
	//this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat DesTRUCTOR " << this << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "Bureaucrat INT Constructor " << this << std::endl;
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

std::string Bureaucrat::getName() {
	return (this->_name);
}

int	Bureaucrat::getGrade() {
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

void	Bureaucrat::upGrade(int n) {
	try{
		if ((this->getGrade() - n) < 0)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = this->getGrade() - n;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

}

void	Bureaucrat::downGrade(int n) {
	try {
		if ((this->getGrade() + n) > 150)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = this->_grade + n;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

}
