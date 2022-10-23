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
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);

	/* Operator Overload for canonical*/
	Bureaucrat & operator=(Bureaucrat const & rhs);

	/* Operator Overload */
	Bureaucrat	operator++(void);
	Bureaucrat	operator++(int);
	Bureaucrat	operator--(void);
	Bureaucrat	operator--(int);

	/* Setters and Getters */
	std::string	getName() const;
	int			getGrade() const;

	/* Member functions */
	Bureaucrat	upGrade(int n);
	Bureaucrat	downGrade(int n);
	void	checkGrade(int n);
	void	signForm();
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

std::ostream & operator<<(std::ostream & out, Bureaucrat const & f);

#endif
