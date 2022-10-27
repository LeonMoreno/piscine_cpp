#include <iostream>

int	main(void) {

	int		x = 42;
	char	y = 'A';

	// y se se convierte implicitamente a int. ASCII
	// Valor de A in ASCII es 65
	x = x + y;

	// x se convierte implicitamente a float
	float z = x + 1.0;

	std::cout << "x = " << x << std::endl;
	std::cout << "z = " << z << std::endl;

	return (0);
}
