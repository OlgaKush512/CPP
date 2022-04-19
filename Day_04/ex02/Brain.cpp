# include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructer of the class Brain called. Adress :" << this << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Copy constructor of the class Brain called, address :" << this << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Destructeur of Brain called. Adress :" << this << std::endl;
}

Brain & Brain::operator = (const Brain &other)
{
	std::cout << "Copy assignment operator of Brain called, address :" << this << std::endl;	
	for (int i = 0; i < 100; i++)
		this->ideas[i]= other.ideas[i];
	return (*this);
}
