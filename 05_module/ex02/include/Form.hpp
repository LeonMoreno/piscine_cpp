#ifndef AFORM_HPP_
#define AFORM_HPP_

#include <iostream>

// #include "Bureaucrat.hpp"
class Bureaucrat; // Lo hago asi para q no cree conflicto.

class AForm {
private:
/* attributes */
	std::string	const	_name;
	bool				_sign;
	int	const		_gradeRequiredSign;
	int	const			_gradeRequiredEx;

public:
	AForm(void);
	AForm(AForm const & src);
	AForm(std::string const, bool, int const, int const);
	~AForm(void);

	/* Operator overload for canonical*/
	AForm & operator=(AForm const & rhs);

	/* members functions */
	int		cheRGrade(int n);
	void	execute(Bureaucrat const & executor);
	virtual void	beSigned(Bureaucrat b) = 0;
	virtual void	execution(Bureaucrat executor);

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
	class FormNotSignedException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif

std::ostream & operator<<(std::ostream & out, AForm const & f);
