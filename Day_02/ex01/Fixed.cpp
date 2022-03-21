# include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructer called. Adress :" << this << std::endl;
	this->_nbStock = 0;
	this->_intFix = 0;
	this->_floatFix = 0;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called, address :" << this << std::endl;
	*this = other;
}

Fixed::Fixed(const int my_int)
{
	std::cout << "Int constructor called, address :" << this << std::endl;
	int	temp;

	this->_intFix = 0;
	this->_floatFix = 0;

	temp = my_int;
	this->_intFix = (temp << this->_nbBits);
}

Fixed::Fixed(const float my_float)
{
	std::cout << "Float constructor called, address :" << this << std::endl;
	float	temp;

	this->_intFix = 0;
	this->_floatFix = 0;

	temp = my_float;
	this->_floatFix = (temp * 256);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur called. Adress :" << this << std::endl;
}

Fixed & Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called, address :" << this << std::endl;	
	this->_nbStock = other._nbStock;
	this->_floatFix = other._floatFix;
	this->_intFix= other._intFix;

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

float Fixed::toFloat(void) const
{
	int		resInt;
	float	resFloat;


	resInt = (this->_intFix) / 256;
	resFloat = this->_floatFix / 256;
	if (this->_intFix != 0)
		return (resInt);
	else
		return (resFloat);
}

int Fixed::toInt(void) const
{
	int		resInt;
	float	resFloat;

	resInt = (this->_intFix) >> this->_nbBits;
	resFloat = this->_floatFix / 256;
	if (this->_intFix != 0)
		return (roundf(resInt));
	else
		return (roundf(resFloat));
}

std::ostream& operator << (std::ostream &out, const Fixed &myFixed)
{
	out << myFixed.toFloat();
	return (out);
}