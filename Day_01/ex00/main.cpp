#include "Zombie.hpp"

int	main(void)
{
	Zombie myZombie("Izi");
	Zombie	*myZombiePtr;

	myZombiePtr = newZombie("Michel");
	randomChump("Joseph");

	delete myZombiePtr;
	return (0);
}