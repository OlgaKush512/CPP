# include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructer of the class Dog called. Adress :" << this << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &other)
{
	std::cout << "Copy constructor of the class Dog called, address :" << this << std::endl;
	*this = other;
}

Dog::~Dog(void)
{
	std::cout << "Destructeur of Dog called. Adress :" << this << std::endl;
}

Dog & Dog::operator = (const Dog &other)
{
	std::cout << "Copy assignment operator of Dog called, address :" << this << std::endl;	
	this->type = other.type ;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Gaaaav! Gav Gav Gav!!!!!" << std::endl;	
}