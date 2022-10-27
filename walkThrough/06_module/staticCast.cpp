#include <iostream>

int	main(void) {

	int		a = 42;			// Valor de referencia
	double	f = 420.042f;	// Valor de referencia

	double	b = a;			// Implicit promotion --> OK
	//int		c = f;			// Implicit demotion --> Hell No !! 🔥🔥
	int		d = static_cast<int>(f);	//Explicit demotion --> Ok, Obedesco 🔥🔥

	std::cout << "Valor d = " << d << std::endl;

	return (0);
}

// c++ -Wall -Wextra -Werror -Wno-unused -Wconversion staticCast.cpp
