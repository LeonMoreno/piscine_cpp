#include <iostream>
//#include <stdexcept>

void	test1()
{
	int	a;

	a = 7;
	if (a == 8)
	{
		throw std::exception();
	}
	else
		std::cout << "No es una exepcion" << std::endl;
}

float	tex(int a, int b)
{
	float	z;

	z = 0;
	if (b == 0)
		throw std::exception();
	std::cout << "se ejecuta??\n";
	z = a / b;
	return (z);
}

int	main(void)
{
	float z;

	z = 0;
	try {
		test1();
		z = tex(98, 0);   
		std::cout << "z = " << z << std::endl; // ni siquiera se ejecuta esta linea
	}
	catch(std::exception e)  {
		std::cerr << "algun mensaje" << std::endl;
		}
	return (0);
}

