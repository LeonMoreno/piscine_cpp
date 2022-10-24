#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try {
		Bureaucrat f("Fercho", 7);
	 	std::cout << f << std::endl;
		// Form p("predial", 0, 6, 43);
		ShrubberyCreationForm s;
		//std::cout << p << std::endl;
		//f.upGrade(42); No se ejecutaria lo next !!
		//p.beSigned(f);
		//std::cout << p << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try sign done "  << std::endl;


	std::cout << "\n\t Try sing copy "  << std::endl;


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
