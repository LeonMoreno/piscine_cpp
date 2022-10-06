#include "DiamondTrap.hpp"

/**
 * @brief
 * The diamond problem
 * https://en.wikipedia.org/wiki/Multiple_inheritance#The_diamond_problem
 * ‘virtual’ keyword : https://www.geeksforgeeks.org/multiple-inheritance-in-c/
 * @return int
 */

int	main( void ) {
	std::cout << RED "\n\t Constructors in DiamondTrap \n" RESET << std::endl;
	DiamondTrap d0;
	DiamondTrap d1(d0);
	DiamondTrap d2;
	DiamondTrap d7("AP");
	FragTrap f1;
	// FragTrap f2(f1);
	FragTrap f3("LEO");

	// ScavTrap s1;
	// ScavTrap s2(s1);
	// ScavTrap s3("AP");

	// d2 = d1;

	// d1.ScavTrap::getInfo();
	d7.whoAmI();
	//f3.whoAmi(); Es una funcion solo de Diamond
	std::cout << RED "\n\t TESTs \n" RESET << std::endl;
	f3.getInfo();
	// s3.getInfo();
	for (int i = 0; i < 80; i++)
		f3.attack(d7);
	d7.whoAmI();
	f3.getInfo();

	// s3.getInfo();
	// f3.highFivesGuys();


	std::cout << RED "\n\t DESTRUCTORS \n" RESET << std::endl;


	return (0);
}
