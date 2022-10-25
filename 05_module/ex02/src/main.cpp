#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << "\t Try Form Basic sign done "  << std::endl;

	try {
		Bureaucrat f("Fercho", 7);
	 	std::cout << f << std::endl;
		Form p("predial", 0, 6, 43);
		std::cout << p << std::endl;
		//f.upGrade(42); No se ejecutaria lo next !!
		p.beSigned(f);
		std::cout << p << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try Form Basic sign done "  << std::endl;
	try {
		Bureaucrat ap("Fercho", 42);
		std::cout << ap.upGrade(10) << std::endl;
		// std::cout << --ap << std::endl;
		// std::cout << --ap << std::endl;
		Form r("register", 0, 30, 100);
		r.beSigned(ap);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try Form Basic sing copy "  << std::endl;
	try {
		Bureaucrat ap("AP", 42);
		std::cout << ap.upGrade(10) << std::endl;
		// std::cout << --ap << std::endl;
		// std::cout << --ap << std::endl;
		Form r("register", 0, 30, 100);
		Form copy(r);
		std::cout << copy << std::endl;
		copy.beSigned(ap);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n\t Try Form Shrubbery sing copy "  << std::endl;
	try {
		Bureaucrat fer("Fercho", 42);
		ShrubberyCreationForm b1;
		ShrubberyCreationForm b2("escuela");
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	// p.beSigned(l);
	// std::cout << p << std::endl;
	// l.upGrade(2);
	// std::cout << l << std::endl;
	// p.beSigned(l);

	// Form copy(p);
	// std::cout << copy << std::endl;

	// std::cout << l << std::endl;

	// std::cout << l.downGrade(143) << std::endl;
	// ++l;
	// std::cout << l << std::endl;

	// std::cout << --l << std::endl;
	// std::cout << l-- << std::endl;
	// std::cout << l << std::endl;
	// // l.upGrade(100);
	// std::cout << l.upGrade(100) << std::endl;

/*
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
	l.upGrade(5);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
	l.upGrade(3);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;

	l.downGrade(100);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
 */
	return (0);
}
