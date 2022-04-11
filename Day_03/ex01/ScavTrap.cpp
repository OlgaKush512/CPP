# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default constructer of ScavTrap called. Adress :" << this << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Main constructer of ScavTrap called. Adress :" << this << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "Copy constructor of ScavTrap called, address :" << this << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructeur of ScavTrap called. Adress :" << this << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &other)
{
	std::cout << "Copy assignment operator of ScavTrap called, address :" << this << std::endl;	
	this->_name = other._name ;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_notAction())
		return;
	std::cout << "The Robot ScavTrap " << this->_name <<
	" attacks " << target<< ", causing " <<
	this->_attackDamage <<" points of damage!" << std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap came into Gatekeeper mode." << std::endl;
}
