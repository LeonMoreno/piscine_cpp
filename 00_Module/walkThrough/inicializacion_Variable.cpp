#include <iostream>

int	main(void)
{
	int	x; // definicion variable
	int	z {42}; // inicializacion directa
	int y; // Inicializacion

	x = 7; // Copy assignment
	std::cout << "Valor de x = " << x << std::endl;
	std::cout << "Valor de z = " << z << std::endl;

	return (0);
}
