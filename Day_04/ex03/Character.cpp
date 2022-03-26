# include "Character.hpp"

Character::Character(void)
{
	std::cout << "Default constructer of the class Character called. Adress :" << this << std::endl;
	this->_name = "";
}

Character::Character(std::string const & name)
{
	std::cout << "Copy constructor of the class Character called, address :" << this << std::endl;
	this->_name = name;
}

Character::Character(Character const &other)
{
	std::cout << "Copy constructor of the class Character called, address :" << this << std::endl;
	*this = other;
}

Character::~Character(void)
{
	std::cout << "Destructeur of Character called. Adress :" << this << std::endl;
}

Character & Character::operator = (const Character &other)
{
	std::cout << "Copy assignment operator of Character called, address :" << this << std::endl;	
	this->_name = other._name ;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::use(int idx, Character& target) //?
{
	std::cout << "* shoots an Character bolt at "<< target.getName() <<std::endl;
}

void Character::equip(AMateria* m); //?
void Character::unequip(int idx); //?