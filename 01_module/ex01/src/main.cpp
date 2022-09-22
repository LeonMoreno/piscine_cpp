#include "Zombie.hpp"

int	main(void)
{
	int	i;

	i = 4;
	Zombie *x;

	x = zombieHorde(i, "LoL");
	for (int j = 0; j < i; j++)
		x[j].announce();

	delete [] x;
	return (0);
}
