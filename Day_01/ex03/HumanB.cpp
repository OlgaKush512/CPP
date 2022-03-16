#include "HumanB.hpp"

HumanB::HumanB(std::string theName)
{
	this->_myName = theName;
	std::cout << "Constructor class HumanB called. Name : " << this->_myName;
	return ;
}

HumanB::~HumanB(void)
{
	delete this->_myWeapon;
	std::cout << "Destructor class HumanB called. Name : " << this->_myName << std::endl;
	return ;
}

void HumanB::attack(void)
{
	std::cout <<  this->_myName << " attacks with their " << this->_myWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon theWeapon)
{
	this->_myWeapon = new Weapon(theWeapon);
}
