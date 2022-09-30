#include "Sample.hpp"

int	main( void )
{
	Sample	instancia1;
	Sample	instan2(7);
	Sample	instan3;

	std::cout << instan3.getVar() << std::endl;
	instan3 = instan2;
	std::cout << instan3.getVar() << std::endl;

	Sample insta4(instan2);


	return (0);
}
