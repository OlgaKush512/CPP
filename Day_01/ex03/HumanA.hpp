#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name,Weapon &theWeapon);
		~HumanA(void);

		void attack(void);

	private:
		Weapon		&_myWeapon;
		std::string	_myName;
};

#endif
