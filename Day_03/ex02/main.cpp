# include "FragTrap.hpp"

int main(void)
{
	FragTrap fr("Nick");

	for (int i = 0; i < 12; i++)
	{
		fr.attack("pistolet");
		fr.takeDamage(5);
		fr.beRepaired(4);
	}
	fr.highFivesGuys();
	return (0);
}