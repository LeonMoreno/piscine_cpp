#include "Form.hpp"

const char*  AForm::GradeTooHighException::what() const throw() {
	return ("Form::Grade Too High Exception");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Form::Grade Too Low Exception");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("Form : Not Signed Exception");
}
