#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap	c1("AP");
	ClapTrap	c2("LEO");

	c1.getInfo();
	c1.takeDamage(2);
	c1.getInfo();

	c1.attack("Roberto");
	c1.getInfo();
	// Test with Polymorphisme (attack method take object (instance))
	std::cout << "\t============================  " << std::endl;
	c2.getInfo();

	for (int i = 0; i < 3; i++)
		c1.attack(c2);
	std::cout << "\t============================" << std::endl;

	c1.getInfo();
	c2.getInfo();

	c2.beRepaired(3);
	c2.beRepaired(3);
	c2.getInfo();

	std::cout << "\t============================" << std::endl;
	for (int i = 0; i < 8; i++)
		c1.attack(c2);
	c2.getInfo();
	c1.getInfo();

	return (0);
}
