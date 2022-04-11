#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

	ScavTrap(void);
	ScavTrap(std::string name);

	ScavTrap(ScavTrap const &other);
	~ScavTrap(void);

	ScavTrap & operator = (const ScavTrap &other);

	void attack(const std::string& target);
	void guardGate(void);
};

#endif
