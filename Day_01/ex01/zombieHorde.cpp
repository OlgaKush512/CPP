#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*myHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		myHorde[i].changeName(name);
	return (myHorde);
}