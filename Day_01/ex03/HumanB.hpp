#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string theName);
		~HumanB(void);

		void attack(void);
		void setWeapon(Weapon theWeapon);

	private:
		Weapon		*_myWeapon;
		std::string	_myName;

};

#endif
