# include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default constructer of FragTrap called. Adress :" << this << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Main constructerof FragTrap called. Adress :" << this << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "Copy constructor of FragTrap called, address :" << this << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructeur of FragTrap called. Adress :" << this << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap &other)
{
	std::cout << "Copy assignment operator of FragTrap called, address :" << this << std::endl;	
	this->_name = other._name ;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "High five, Maaan!" << std::endl;
}
