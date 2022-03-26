# include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Default constructer of the class Cure called. Adress :" << this << std::endl;
	this->_type = "";
}

Cure::Cure(std::string const & type)
{
	std::cout << "Copy constructor of the class Cure called, address :" << this << std::endl;
	this->_type = type;
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
	this->_type = other._type ;
	return (*this);
}

Cure*  Cure::clone(void) const
{
	Cure *ptr = new Cure(this->_type);
	std::cout << "Cure is clonned!" << std::endl;	
	return (ptr);
}

std::string const &  Cure::getType() const
{
	return (this->_type);
}

void  Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
