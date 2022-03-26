# include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Default constructer of the class Ice called. Adress :" << this << std::endl;
	this->_type = "";
}

Ice::Ice(std::string const & type)
{
	std::cout << "Copy constructor of the class Ice called, address :" << this << std::endl;
	this->_type = type;
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
	std::cout << "Copy assignment operator of Ice called, address :" << this << std::endl;	
	this->_type = other._type ;
	return (*this);
}

Ice*  Ice::clone(void) const
{
	Ice *ptr = new Ice(this->_type);
	std::cout << "Ice is clonned!" << std::endl;	
	return (ptr);
}

std::string const &  Ice::getType() const
{
	return (this->_type);
}

void  Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() <<std::endl;
}
