# include "Dog.hpp"
# include "Brain.hpp"


Dog::Dog(void)
{
	std::cout << "Default constructer of the class Dog called. Adress :" << this << std::endl;
	Brain *newBrain = new Brain();
	this->_myBrain = newBrain;
	this->type = "Dog";
}

Dog::Dog(Dog const &other)
{
	std::cout << "Copy constructor of the class Dog called, address :" << this << std::endl;
	this->type = other.type ;
	this->_myBrain = new Brain(*(other._myBrain));
}

Dog::~Dog(void)
{
	std::cout << "Destructeur of Dog called. Adress :" << this << std::endl;
	delete this->_myBrain;
}

Dog & Dog::operator = (const Dog &other)
{
	std::cout << "Copy assignment operator of Dog called, address :" << this << std::endl;	
	delete this->_myBrain;
	this->type = other.type ;
	this->_myBrain = new Brain(*(other._myBrain));
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Gaaaav! Gav Gav Gav!!!!!" << std::endl;	
}