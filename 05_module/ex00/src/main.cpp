#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat l("Leo", 7);
		std::cout << l << std::endl;
		std::cout << l.downGrade(143) << std::endl;
		++l;
		std::cout << l << std::endl; // no se alcanza a ejecutar esta linea
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try High "  << std::endl;
	try {
		Bureaucrat l("AP", 151); // no ejecuta de aqui pa abajo.
		std::cout << l << std::endl;
		std::cout << --l << std::endl;
		std::cout << l-- << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\t Try Low "  << std::endl;
	try {
		Bureaucrat l("AP", 7);
		std::cout << l-- << std::endl;
		std::cout << l << std::endl;
		std::cout << l.upGrade(7) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// std::cout << --l << std::end
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
