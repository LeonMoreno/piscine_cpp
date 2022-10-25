#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
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
};

#endif
