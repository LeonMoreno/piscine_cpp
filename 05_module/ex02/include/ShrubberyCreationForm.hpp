#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:
/* data */
	bool				_sign;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm(void);

	void	beSigned(ShrubberyCreationForm b);

	// Getters and Setters
};

#endif
