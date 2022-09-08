#include "Ensayo.hpp"

Ensayo::Ensayo(void) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Ensayo::~Ensayo(void) {
	std::cout << "Destructor Called" << std::endl;
	return ;
}

int	Ensayo::bar(void) {
	std::cout << "Estoy en Funcion BAR\n";
	return (42);
}


int	main(void)
{
	Ensayo insta;
	int	r;

	insta.x = 7;
	std::cout << "SIzeof insta = " << sizeof(insta) << " " << "insta.X = " << insta.x << std::endl;
	r = insta.bar();
	std::cout << "R = " << r << std::endl;

	return (0);
}


