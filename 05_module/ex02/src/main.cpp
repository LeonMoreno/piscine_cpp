#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	// std::cout << "\t Try Form Basic sign done "  << std::endl;
	// NO se puede instancia AForm por q es Abstract
	// try {
	// 	Bureaucrat f("Fercho", 7);
	//  	std::cout << f << std::endl;
	// 	AForm p("predial", 0, 6, 43);
	// 	std::cout << p << std::endl;
	// 	//f.upGrade(42); No se ejecutaria lo next !!
	// 	p.beSigned(f);
	// 	std::cout << p << std::endl;
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	std::cout << "\n\t Try Form Shrubbery sing and execute"  << std::endl;
	try {
		Bureaucrat fer("Fercho", 132);
		ShrubberyCreationForm b2("ecole");
		std::cout << b2 << std::endl;
		b2.beSigned(fer);
		std::cout << b2 << std::endl;
		b2.execute(fer);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\t Try Form Shrubbery sing FaIL"  << std::endl;
	try {
		Bureaucrat fer("Fercho", 146);
		ShrubberyCreationForm b2("house");
		ShrubberyCreationForm b3(b2);
		std::cout << b3 << std::endl;
		b3.beSigned(fer);
		std::cout << b3 << std::endl; // no se ejecy=uta
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
		std::cout << "\n\t Try Form Shrubbery sing  and exe FaIL"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 145);
		Bureaucrat	ap("AP", 138);
		ShrubberyCreationForm b2("escuelita");
		ShrubberyCreationForm b3(b2);
		std::cout << b3 << std::endl;
		b3.beSigned(fer);
		std::cout << b3 << std::endl;
		b3.execute(ap);
		std::cout << b3 << std::endl; // no se ejecy=uta
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
		std::cout << "\n\t Try Form RoboTomy sing FaIL"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 145);
		Bureaucrat	ap("AP", 138);
		RobotomyRequestForm b1("escuelita");
		std::cout << b1 << std::endl;
		b1.beSigned(fer);
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
		std::cout << "\n\t Try Form RoboTomy sing  and exe"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 71);
		Bureaucrat	ap("AP", 42);
		RobotomyRequestForm b1("escuelita");
		std::cout << b1 << std::endl;
		b1.beSigned(fer);
		std::cout << b1 << std::endl;
		b1.execute(ap);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
		std::cout << "\n\t Try Form RoboTomy sing  and exe Fail"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 71);
		Bureaucrat	ap("AP", 46);
		RobotomyRequestForm b1("escuelita");
		std::cout << b1 << std::endl;
		b1.beSigned(fer);
		std::cout << b1 << std::endl;
		b1.execute(ap);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
		std::cout << "\n\t Try Form Presidential PardonForm sing  and exe"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 25);
		Bureaucrat	ap("AP", 5);
		PresidentialPardonForm b1("escuelita");
		std::cout << b1 << std::endl;
		b1.beSigned(fer);
		std::cout << b1 << std::endl;
		b1.execute(ap);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
			std::cout << "\n\t Try Form Presidential PardonForm sing Fail"  << std::endl;
	try {
		Bureaucrat	fer("Fercho", 26);
		Bureaucrat	ap("AP", 5);
		PresidentialPardonForm b1("escuelita");
		std::cout << b1 << std::endl;
		b1.beSigned(fer);
		std::cout << b1 << std::endl;
		b1.execute(ap);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
