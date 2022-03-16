#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name)
{
	std::cout << "Constructor class Weapon called. Type : " << this->_type << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor class Weapon called. Type : " << this->_type << std::endl;
	return ;
}

const std::string &Weapon::getType(void)
{
	std::string	&myWeaponRef = this->_type;
	return (myWeaponRef);
}

void Weapon::setType(std::string name)
{
	this->_type = name;
	return ;
}
