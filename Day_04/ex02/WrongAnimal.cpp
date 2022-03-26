# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructer of the class WrongAnimal called. Adress :" << this << std::endl;
	this->type = "Someone";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "Copy constructor of the class WrongAnimal called, address :" << this << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructeur of WrongAnimal called. Adress :" << this << std::endl;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &other)
{
	std::cout << "Copy assignment operator of WrongAnimal called, address :" << this << std::endl;	
	this->type = other.type ;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "UAHAHAHAHAH!" << std::endl;	
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}
