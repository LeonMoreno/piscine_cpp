#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/**
 * @brief
 * FIFO ??  first in, first out  ??
 *
 * @return int
 */

int	main( void ) {
	std::cout << RED "\n\t Constructors in FragTrap \n" RESET << std::endl;

	FragTrap f1;
	FragTrap f2(f1);
	FragTrap f3("LEO");

	ScavTrap s1;
	ScavTrap s2(s1);
	ScavTrap s3("AP");

	std::cout << RED "\n\t TESTs \n" RESET << std::endl;
	f3.getInfo();
	s3.getInfo();
	for (int i = 0; i < 80; i++)
		f3.attack(s3);
	f3.getInfo();
	s3.getInfo();
	f3.highFivesGuys();

	std::cout << RED "\n\t 2do ROUND \n" RESET << std::endl;

	s3.beRepaired(70);
	s3.setAttackDamage(1);
	f3.getInfo();
	s3.getInfo();
	for (int i = 0; i < 80; i++)
		s3.attack(f3);
	f3.getInfo();
	s3.getInfo();
	f3.highFivesGuys();
	s3.guardGate();




	std::cout << RED "\n\t DESTRUCTORS \n" RESET << std::endl;


	return (0);
}
