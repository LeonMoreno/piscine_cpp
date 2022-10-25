#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>

// #include "Bureaucrat.hpp"
class Bureaucrat; // Lo hago asi para q no cree conflicto.

class Form {
private:
/* attributes */
	std::string	const	_name;
	bool				_sign;
	int	const		_gradeRequiredSign;
	int	const			_gradeRequiredEx;

public:
	Form(void);
	Form(Form const & src);
	Form(std::string const, bool, int const, int const);
	~Form(void);

	/* Operator overload for canonical*/
	Form & operator=(Form const & rhs);

	/* members functions */
	int		cheRGrade(int n);
	void	beSigned(Bureaucrat b);

	/* Getter and Setters*/
	std::string	getName(void) const;
	bool		getSign(void) const;
	int			getGradeRequiredSign(void) const;
	int			getGradeRequiredEx(void) const;
	void		setSign(void);

	/* nested classes */
	class GradeTooHighException : public std::exception {
		public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif

std::ostream & operator<<(std::ostream & out, Form const & f);
