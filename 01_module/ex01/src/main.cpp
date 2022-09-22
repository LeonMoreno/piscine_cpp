#include "Zombie.hpp"

int	main(void)
{
	int	i;

	i = 4;
	Zombie *x;

	x = zombieHorde(i, "LoL");

	delete [] x;
	return (0);
}
