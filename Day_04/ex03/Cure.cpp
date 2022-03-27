# include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Default constructer of the class Cure called. Adress :" << this << std::endl;
	this->_type = "";
}

Cure::Cure(Cure const &other)
{
	std::cout << "Copy constructor of the class Cure called, address :" << this << std::endl;
	*this = other;
}

Cure::~Cure(void)
{
	std::cout << "Destructeur of Cure called. Adress :" << this << std::endl;
}

Cure & Cure::operator = (const Cure &other)
{
	std::cout << "Copy assignment operator of Cure called, address :" << this << std::endl;	
	return (*this);
}

Cure*  Cure::clone(void) const
{
	Cure *ptr = new Cure();
	std::cout << "Cure is clonned!" << std::endl;	
	return (ptr);
}

void  Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
