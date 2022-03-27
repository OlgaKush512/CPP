# include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
	std::cout << "Default constructer of the class AMateria called. Adress :" << this << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parametric constructor of the class AMateria called, address :" << this << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
	std::cout << "Copy constructor of the class AMateria called, address :" << this << std::endl;
	*this = other;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructeur of AMateria called. Adress :" << this << std::endl;
}

AMateria & AMateria::operator = (const AMateria &other)
{
	std::cout << "Copy assignment operator of AMateria called, address :" << this << std::endl;	
	this->_type = other._type ;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria::use" << std::endl;	
}
