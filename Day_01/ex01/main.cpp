#include "Zombie.hpp"

int	main(void)
{
	Zombie myZombie("Izi");
	Zombie	*myZombiePtr;
	int N;

	N = 5;
	myZombiePtr = zombieHorde(N, "Michel");
	for (int i = 0; i < N; i++)
		myZombiePtr[i].announce();
	delete [] myZombiePtr;
	return (0);
}