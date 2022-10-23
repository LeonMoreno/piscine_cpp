#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat l("Leo", 151);
	 std::cout << l << std::endl;

	// Form p("predial", 0, 150, 43);

	// std::cout << p << std::endl;
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
