#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(std::string name);

	FragTrap(FragTrap const &other);
	~FragTrap(void);

	FragTrap & operator = (const FragTrap &other);

	void highFivesGuys(void);
};

#endif
