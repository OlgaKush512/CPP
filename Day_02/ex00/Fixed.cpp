# include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructer called. Adress :" << this << std::endl;
	this->_nbStock = 0;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called, address :" << this << std::endl;
	this->_nbStock = other.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur called. Adress :" << this << std::endl;
}

Fixed & Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called, address :" << this << std::endl;	
	this->_nbStock = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << this << std::endl;	
	return (this->_nbStock);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << this << std::endl;	
	this->_nbStock = raw;
}