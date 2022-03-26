# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructer of ClapTrap called. Adress :" << this << std::endl;
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Main constructer of ClapTrap called. Adress :" << this << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor of ClapTrap called, address :" << this << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructeur of ClapTrap called. Adress :" << this << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << "Copy assignment operator of ClapTrap called, address :" << this << std::endl;	
	this->_name = other._name ;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

bool	ClapTrap::_notAnction(void)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is dead!"<< std::endl;
		return (1);
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "Not enough energy points for action!"<< std::endl;
		return (1);
	}
	return (0);
}

void ClapTrap::attack(const std::string& target)
{
	if (_notAnction())
		return;
	std::cout << "ClapTrap " << this->_name <<
	" attacks " << target<< ", causing " <<
	this->_attackDamage <<" points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_notAnction())
		return;
	this->_hitPoints -= amount;
	std::cout << this->_name <<
	" lost " << amount<< " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_notAnction())
		return;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << this->_name <<
	" recovered " << amount<< " hit points!" << std::endl;
}
