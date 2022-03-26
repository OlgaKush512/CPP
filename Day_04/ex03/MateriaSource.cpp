# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Default constructer of the class MateriaSource called. Adress :" << this << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	std::cout << "Copy constructor of the class MateriaSource called, address :" << this << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructeur of MateriaSource called. Adress :" << this << std::endl;
}

MateriaSource & MateriaSource::operator = (const MateriaSource &other)
{
	std::cout << "Copy assignment operator of MateriaSource called, address :" << this << std::endl;	
	return (*this);
}

std::string const & MateriaSource::getName() const
{
	return (this->_name);
}

void MateriaSource::use(int idx, MateriaSource& target) //?
{
	std::cout << "* shoots an MateriaSource bolt at "<< target.getName() <<std::endl;
}

void MateriaSource::learnMateria(AMateria*);
AMateria* MateriaSource::createMateria(std::string const & type);