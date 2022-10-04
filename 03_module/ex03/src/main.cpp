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
	// DiamondTrap d0;
	// DiamondTrap d1(d0);
	// DiamondTrap d2;
	DiamondTrap d7("LEO");

	// d2 = d1;

	// d1.ScavTrap::getInfo();
	d7.whoAmI();
	std::cout << RED "\n\t TESTs \n" RESET << std::endl;



	std::cout << RED "\n\t DESTRUCTORS \n" RESET << std::endl;


	return (0);
}
