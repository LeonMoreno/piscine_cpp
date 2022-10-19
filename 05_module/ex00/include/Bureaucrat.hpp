#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>

class Bureaucrat
{
private:
/* Atributos */
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);

	/* Member functions */
	//void	GradeTooLowException(void);
	class	GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade Too High Exception");
			}
	};
	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade Too Low Exception");
			}
	};
};

#endif
