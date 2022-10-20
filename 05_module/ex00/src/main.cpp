#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat l("Leo", 7);

	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
	l.upGrade(5);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;
	l.upGrade(3);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;

	l.downGrade(100);
	std::cout << "Name: " << l.getName() << " Grade " << l.getGrade() << std::endl;

	return (0);
}
