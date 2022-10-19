#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat l("Leo", 7);

	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
	l.incrementGrade(5);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
	l.incrementGrade(3);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;

	l.decrementGrade(100);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;

	return (0);
}
