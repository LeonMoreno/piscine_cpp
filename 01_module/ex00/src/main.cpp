#include "Zombie.hpp"

int	main(void)
{
	Zombie* z;

	z = newZombie("Leo");
	randomChump("AP");
	delete z;
	return (0);
}
