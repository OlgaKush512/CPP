#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &theWeapon) : _myName(name), _myWeapon(theWeapon)
{
	std::cout << "Constructor class HumanA called. Name : " << this->_myName << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor class HumanA called. Name : " << this->_myName << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout <<  this->_myName << " attacks with their " << this->_myWeapon.getType() << std::endl;
}
