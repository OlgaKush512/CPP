#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>
# include <cmath>

class ClapTrap
{
	public:

	ClapTrap(void);
	ClapTrap(std::string name);

	ClapTrap(ClapTrap const &other);
	~ClapTrap(void);

	ClapTrap & operator = (const ClapTrap &other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:

	std::string _name;
	int	_hitPoints;
	int _energyPoints;
	int _attackDamage;

	bool	_notAnction(void);
};

#endif
