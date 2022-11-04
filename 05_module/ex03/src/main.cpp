#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "\n\t Try Inter robotomy request"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 25);
		Bureaucrat	ap("AP", 5);
		Intern		rada;
		AForm		*f;

		f = rada.makeForm("robotomy request", "escuelita");
		std::cout << static_cast<RobotomyRequestForm &>(*f) << std::endl;
		f->beSigned(fer);
		std::cout << static_cast<RobotomyRequestForm &>(*f) << std::endl;
		delete f;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try Inter makeForm shrubbery creation"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 25);
		Bureaucrat	ap("AP", 5);
		Intern		rada;
		AForm		*f;

		f = rada.makeForm("shrubbery creation", "escuelita");
		std::cout << static_cast<ShrubberyCreationForm &>(*f) << std::endl;
		f->beSigned(fer);
		std::cout << static_cast<ShrubberyCreationForm &>(*f) << std::endl;
		delete f;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try Inter makeForm Presidential PardonForm"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 25);
		Bureaucrat	ap("AP", 5);
		Intern		rada;
		AForm		*f;

		f = rada.makeForm("presidential pardon", "escuelita");
		std::cout << static_cast<PresidentialPardonForm &>(*f) << std::endl;
		f->beSigned(fer);
		std::cout << static_cast<PresidentialPardonForm &>(*f) << std::endl;
		delete	f;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try Inter makeForm No Valid Form"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 25);
		Bureaucrat	ap("AP", 5);
		Intern		rada;
		AForm		*f;

		f = rada.makeForm("presidential pardno", "El Central"); // pardon esta mal escrito
		std::cout << reinterpret_cast<PresidentialPardonForm &>(*f) << std::endl;
		f->beSigned(fer);
		std::cout << reinterpret_cast<PresidentialPardonForm &>(*f) << std::endl;
		delete f;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
