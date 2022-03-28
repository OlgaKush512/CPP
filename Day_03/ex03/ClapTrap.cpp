# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructer called. Adress :" << this << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parametric constructer called. Adress :" << this << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor called, address :" << this << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructeur called. Adress :" << this << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << "Copy assignment operator called, address :" << this << std::endl;	
	this->_name = other._name ;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

bool	ClapTrap::_notAction(void)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead!"<< std::endl;
		return (true);
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "Not enough energy points for action!"<< std::endl;
		return (true);
	}
	return (false);
}

void ClapTrap::attack(const std::string& target)
{
	if (_notAction())
		return;
	std::cout << "ClapTrap " << this->_name <<
	" attacks " << target<< ", causing " <<
	this->_attackDamage <<" points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_notAction())
		return;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name <<
	" lost " << amount<< " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_notAction())
		return;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name <<
	" recovered " << amount<< " hit points!" << std::endl;
}
