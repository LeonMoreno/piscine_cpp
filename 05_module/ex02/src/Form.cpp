#include "Form.hpp"
#include "Bureaucrat.hpp"


/*********************************/
/*	Constructors and Destructors */
/*********************************/

AForm::AForm(void) :
_name("nameless"),
_sign(false),
_gradeRequiredSign(150),
_gradeRequiredEx(150) {
	// std::cout << "AForm Default Constructor " << this << std::endl;
}

AForm::AForm(AForm const & src) :
_name(src._name),
_sign(src._sign),
_gradeRequiredSign(src._gradeRequiredSign),
_gradeRequiredEx(src._gradeRequiredEx) {
	// std::cout << "AForm copy Constructor " << this << std::endl;
}

AForm::~AForm() {
	// std::cout << "AForm DesTRUCTOR " << this << std::endl;
}

AForm & AForm::operator=(AForm const & rhs) {
	// std::cout << "AForm asignation Constructor " << this << std::endl;
	this->_sign = rhs.getSign();
	return (*this);
}

AForm::AForm(std::string const name, bool si, int const gradeSing, int const gradeEx) :
	_name(name),
	_sign(si),
	_gradeRequiredSign(cheRGrade(gradeSing)),
	_gradeRequiredEx(cheRGrade(gradeEx)) {
	// std::cout << "AForm INT Constructor " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

std::string	AForm::getName(void) const {
	return (this->_name);
}

bool	AForm::getSign(void) const {
	return (this->_sign);
}

int	AForm::getGradeRequiredSign(void) const {
	return (this->_gradeRequiredSign);
}

int	AForm::getGradeRequiredEx(void) const {
	return (this->_gradeRequiredEx);
}

void	AForm::setSign(void) {
	this->_sign = true;
}

/********************************/
/*		Members functions		*/
/********************************/
int	AForm::cheRGrade(int n) {
	// try {
		if (n < 1)
			throw AForm::GradeTooLowException();
		else if (n > 150)
			throw AForm::GradeTooHighException();
		else
			return (n);
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// return (150);
}

void	AForm::execute(Bureaucrat const & executor) {
	(void) executor;
	if (this->getSign() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() >= this->getGradeRequiredEx())
	{
		std::cout << executor.getName() << " couldn't execute ";
		std::cout << this->getName() << " because son grade is ";
		std::cout << executor.getGrade();
		std::cout <<  " and this AForm need at least grade " << this->getGradeRequiredEx();
		std::cout << std::endl;
		throw AForm::GradeTooLowException();
	}
	this->execution(executor);
	executor.executeForm(*this);
}

void	AForm::execution(Bureaucrat executor) {
	std::cout <<  "AForm: Execution " << executor.getName();
}

/* GRAN GRAN punto a remarcar
virtual beSigned = 0
--> lo convierte en un metodo puro
--> El metodo no se puede implementar
--> La clase devien Abstracta */

// void	AForm::beSigned(Bureaucrat b) {
// 	if (b.getGrade() <= this->_gradeRequiredSign)
// 	{
// 		this->_sign = true;
// 		b.signAForm();
// 		std::cout << this->getName() << std::endl;
// 	}
// 	else
// 	{
// 		std::cout << b.getName() << " couldn't sign ";
// 		std::cout << this->getName() << " because son grade is ";
// 		std::cout << b.getGrade();
// 		std::cout <<  " and this AForm need at least grade " << this->getGradeRequiredSign();
// 		std::cout << std::endl;
// 	}

// }

/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, AForm const & f) {
	out << "AForm: " << f.getName() << " | ";
	out << "Sing: " << f.getSign() << " | ";
	out << "grade sing: " << f.getGradeRequiredSign() << " | ";
	out << "grade exe: " << f.getGradeRequiredEx();
	return (out);
}

