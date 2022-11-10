#include "Span.hpp"
#include <set>

int	main(void)
{
	std::vector<int>::iterator	a;
	std::vector<int>::iterator	b;
	srand(time(NULL));

	try {
		Span s(100);

		s.addNumber(12);
		s.addNumber(17);
		s.addNumber(43);
		s.addNumber(98);
		s.addNumber(23);
		s.addNumber(25);
		s.addNumber(1);
		std::cout << "Eleme = " << s.getCounter() << std::endl;
		std::cout << "longest = " << s.longestSpan() << std::endl;
		std::cout << "Short = " << s.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		Span s(100);

		for (int i = 0; i < 100; i++)
			s.addNumber(rand() % 100);
		std::cout << "Eleme = " << s.getCounter() << std::endl;
		std::cout << "longest = " << s.longestSpan() << std::endl;
		std::cout << "Short = " << s.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	Span s(100);
	for (int i = 0; i < 100; i++)
			s.addNumber(rand() % 100);
	try {
		Span s1(100);

		a = s.getVec().begin();
		b = s.getVec().end();
		s1.rangetSpan(a, b);
		std::cout << "Eleme = " << s.getCounter() << std::endl;
		std::cout << "longest = " << s.longestSpan() << std::endl;
		std::cout << "Short = " << s.shortestSpan() << std::endl;
	}
		catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
