# include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructer of the class Cat called. Adress :" << this << std::endl;
	Brain *newBrain = new Brain();
	this->_myBrain = newBrain;
	this->type = "Cat";
}

Cat::Cat(Cat const &other)
{
	std::cout << "Copy constructor of the class Cat called, address :" << this << std::endl;
	this->type = other.type ;
	this->_myBrain = new Brain(*(other._myBrain));
}

Cat::~Cat(void)
{
	std::cout << "Destructeur of Cat called. Adress :" << this << std::endl;
	delete this->_myBrain;
}

Cat & Cat::operator = (const Cat &other)
{
	std::cout << "Copy assignment operator of Cat called, address :" << this << std::endl;	
	delete this->_myBrain;
	this->type = other.type ;
	this->_myBrain = new Brain(*(other._myBrain));
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "mmmiaaaaou.... mmmiaaaaaouuuuuu..... MIAAAOUUUUU!" << std::endl;	
}