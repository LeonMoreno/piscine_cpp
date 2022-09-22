#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie* x = new Zombie[N];

	for (int j = 0; j < N; j++)
	{
		x[j].setName(name);
		x[j].announce();
	}

	return (x);
}
