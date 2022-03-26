# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cl("Nick");

	for (int i = 0; i < 12; i++)
	{
		cl.attack("pistolet");
		cl.takeDamage(5);
		cl.beRepaired(4);
	}
	return (0);
}