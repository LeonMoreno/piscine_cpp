#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High Exception");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low Exception");
}

