#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"

class ShrubberyCreationForm : public AForm {
private:
/* data */
	std::string	_dst;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string dst);

	/* Operator OverLoad Canonical =*/
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	/* 		Setters and Getters		*/
	std::string	getDest(void) const;

	/* Funciones miembro*/
	void	beSigned(Bureaucrat b);
	void	execution(Bureaucrat executor);
};

std::ostream & operator<<(std::ostream & out, ShrubberyCreationForm const & f);

#endif
