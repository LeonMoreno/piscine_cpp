#include <iostream>

int	main(void)
{
//	char s[] = "Hola mi leo";
	std::string  s; 
	int	l;

	s = "Hola mi Leo";
	l = s.size();
	std::cout << s << std::endl;
	std::cout << l << std::endl;
	std::cout << &s << std::endl;
	return (0);
}
