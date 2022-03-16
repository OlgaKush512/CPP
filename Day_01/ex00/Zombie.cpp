#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor class Zombie called. Name : " << this->_name << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor class Zombie called. Name : " << this->_name << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
