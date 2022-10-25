#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

#include "Form.hpp"

class RobotomyRequestForm : public AForm {
private:
/* data */
	std::string	_dst;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(std::string dst);

	/* Operator OverLoad Canonical =*/
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	/* 		Setters and Getters		*/
	std::string	getDest(void) const;

	/* Funciones miembro*/
	void	beSigned(Bureaucrat b);
	void	execution(void);
};

std::ostream & operator<<(std::ostream & out, RobotomyRequestForm const & f);

#endif
