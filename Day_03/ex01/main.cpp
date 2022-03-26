# include "ScavTrap.hpp"

int main(void)
{
	ScavTrap sk("Nick");

	for (int i = 0; i < 12; i++)
	{
		sk.attack("pistolet");
		sk.takeDamage(5);
		sk.beRepaired(4);
	}
	sk.guardGate();
	return (0);
}