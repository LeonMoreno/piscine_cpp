#include "Form.hpp"
#include "Bureaucrat.hpp"


/*********************************/
/*	Constructors and Destructors */
/*********************************/

Form::Form(void) :
_name("nameless"),
_sign(false),
_gradeRequiredSign(150),
_gradeRequiredEx(150) {
	// std::cout << "Form Default Constructor " << this << std::endl;
}

Form::Form(Form const & src) :
_name(src._name),
_sign(src._sign),
_gradeRequiredSign(src._gradeRequiredSign),
_gradeRequiredEx(src._gradeRequiredEx) {
	std::cout << "Form copy Constructor " << this << std::endl;
}

Form::~Form() {
	// std::cout << "Form DesTRUCTOR " << this << std::endl;
}

Form & Form::operator=(Form const & rhs) {
	// std::cout << "Form asignation Constructor " << this << std::endl;
	this->_sign = rhs.getSign();
	return (*this);
}

Form::Form(std::string const name, bool si, int const gradeSing, int const gradeEx) :
	_name(name),
	_sign(si),
	_gradeRequiredSign(cheRGrade(gradeSing)),
	_gradeRequiredEx(cheRGrade(gradeEx)) {
	//cheRGrade(gradeSing);
	// std::cout << "Form INT Constructor " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

std::string	Form::getName(void) const {
	return (this->_name);
}

bool	Form::getSign(void) const {
	return (this->_sign);
}

int	Form::getGradeRequiredSign(void) const {
	return (this->_gradeRequiredSign);
}

int	Form::getGradeRequiredEx(void) const {
	return (this->_gradeRequiredEx);
}

/********************************/
/*		Members functions		*/
/********************************/
int	Form::cheRGrade(int n) {
	try {
		if (n < 1)
			throw Form::GradeTooLowException();
		else if (n > 100)
			throw Form::GradeTooHighException();
		else
			return (n);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (150);
}

void	Form::beSigned(Bureaucrat b) {
	if (b.getGrade() <= this->_gradeRequiredSign)
	{
		this->_sign = true;
		b.signForm();
		std::cout << this->getName() << std::endl;
	}
	else
	{
		std::cout << b.getName() << " couldn't sign ";
		std::cout << this->getName() << " because son grade is ";
		std::cout << b.getGrade() << std::endl;
	}

}

/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, Form const & f) {
	out << "Form: " << f.getName() << " | ";
	out << "Sing: " << f.getSign() << " | ";
	out << "grade sing: " << f.getGradeRequiredSign() << " | ";
	out << "grade exe: " << f.getGradeRequiredEx();
	return (out);
}

