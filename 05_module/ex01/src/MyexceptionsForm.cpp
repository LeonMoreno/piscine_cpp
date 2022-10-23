#include "Form.hpp"

const char*  Form::GradeTooHighException::what() const throw() {
	return ("Form::Grade Too High Exception");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form::Grade Too Low Exception");
}
