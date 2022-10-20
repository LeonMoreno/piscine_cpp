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

	/* Setters and Getters */
	std::string	getName();
	int			getGrade();

	/* Member functions */
	void	upGrade(int n);
	void	downGrade(int n);
	//void	GradeTooLowException(void);
	/* nested classes */
	class	GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

#endif
