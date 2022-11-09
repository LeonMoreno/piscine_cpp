#include "Span.hpp"

int	main(void)
{
	Span s(10000);
	srand(time(NULL));
	std::vector<int>::iterator	a = s.getVec().begin();
	std::vector<int>::iterator	b = s.getVec().end();

	try {
		std::cout << s.getCounter() << std::endl;
		std::cout << "size " << s.getSize() << std::endl;
		std::cout << s.getCounter() << std::endl;
		s.rangetSpan(a, b);
		// for (int i = 0; i < 10000; i++)
		// 	s.addNumber(rand() % 100);
		// s.addNumber(12);
		// s.addNumber(17);
		// s.addNumber(43);
		// s.addNumber(98);
		// s.addNumber(23);
		// s.addNumber(25);
		// s.addNumber(1);
		std::cout << s.getCounter() << std::endl;
		std::cout << "Eleme = " << s.getCounter() << std::endl;
		std::cout << "longest = " << s.longestSpan() << std::endl;
		std::cout << "Short = " << s.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


}
