#include "ScavTrap.hpp"

int	main( void ) {
	std::cout << RED "\n\t Constructors \n" RESET << std::endl;
	ScavTrap s;
	ScavTrap h(s);
	ScavTrap co;
	ScavTrap r1("Andrenio");
	ScavTrap r2("Suko");

	co = s;

	std::cout << RED "\n\t TESTs \n" RESET << std::endl;

	r1.getInfo();
	r2.getInfo();

	for (int i = 0; i < 7; i++)
		r1.attack(r2);
	r1.getInfo();
	r2.getInfo();
	r2.guardGate();

	std::cout << RED "\n\t DESTRUCTORS \n" RESET << std::endl;
	return (0);
}
