# include "Character.hpp"

Character::Character(void) : _name("Default")
{
	std::cout << "Default constructer of the class Character called. Adress :" << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventary[i] = 0;
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Copy constructor of the class Character called, address :" << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventary[i] = 0;
}

Character::Character(Character const &other)
{
	std::cout << "Copy constructor of the class Character called, address :" << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventary[i] = 0;
	for (int i = 0; i < 4 && other._inventary[i]; i++)
		this->_inventary[i] = other._inventary[i]->clone();
	this->_name = other._name;
}

Character::~Character(void)
{
	std::cout << "Destructeur of Character called. Adress :" << this << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventary[i])
			delete this->_inventary[i];
	}
}

Character & Character::operator = (const Character &other)
{
	std::cout << "Copy assignment operator of Character called, address :" << this << std::endl;	
	this->_name = other._name ;

	for (int i = 0; i < 4 && this->_inventary[i]; i++)
		delete this->_inventary[i];
	for (int i = 0; i < 4; i++)
		this->_inventary[i] = 0;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventary[i])
			this->_inventary[i] = other._inventary[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->_inventary[idx])
		this->_inventary[idx]->use(target);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(this->_inventary[i]))
		{
			this->_inventary[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if ((this->_inventary[idx]))
		this->_inventary[idx] = 0;
}
