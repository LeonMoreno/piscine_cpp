#ifndef PRESIDENTIAL_PARDON_FORM_HPP_
#define PRESIDENTIAL_PARDON_FORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public AForm {
private:
/* data */
	std::string	_dst;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(std::string dst);

	/* Operator OverLoad Canonical =*/
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

	/* 		Setters and Getters		*/
	std::string	getDest(void) const;

	/* Funciones miembro*/
	void	beSigned(Bureaucrat b);
	void	execution(void);
};

std::ostream & operator<<(std::ostream & out, PresidentialPardonForm const & f);

#endif
