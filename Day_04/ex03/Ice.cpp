# include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Default constructer of the class Ice called. Adress :" << this << std::endl;
}

Ice::Ice(Ice const &other)
{
	std::cout << "Copy constructor of the class Ice called, address :" << this << std::endl;
	*this = other;
}

Ice::~Ice(void)
{
	std::cout << "Destructeur of Ice called. Adress :" << this << std::endl;
}

Ice & Ice::operator = (const Ice &other)
{
	(void)other;
	std::cout << "Copy assignment operator of Ice called, address :" << this << std::endl;	
	return (*this);
}

Ice*  Ice::clone(void) const
{
	Ice *ptr = new Ice();
	std::cout << "Ice is clonned!" << std::endl;	
	return (ptr);
}

void  Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" <<std::endl;
}
