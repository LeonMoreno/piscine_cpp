#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <iostream>
#include "Form.hpp"

class Intern {
private:
/* data */
public:
	Intern(void);
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);
	~Intern(void);

	/*		Members functions		*/
	AForm  *makeForm(std::string, std::string);
	int		checkForm(std::string);

	/* nested classes */
	class FormDontExist : public std::exception {
		public:
		virtual const char* what() const throw();
	};
};

#endif
