/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:13:46 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:13:49 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/*----------------------------------------------------------------*/
/*------------------CONSTRUCTORS----------------------------------*/
/*----------------------------------------------------------------*/

Fixed::Fixed(void) : _nbStock(0)
{
	std::cout << "Default constructer called. Adress : " << this << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called, address : " << this << std::endl;
	*this = other;
}

Fixed::Fixed(const int my_int) : _nbStock(my_int << this->_nbBits)
{
	std::cout << "Int constructor called, address : " << this << std::endl;
}

Fixed::Fixed(const float my_float) : _nbStock(roundf(my_float * (float)256))
{
	std::cout << "Float constructor called, address : " << this << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur called. Adress : " << this << std::endl;
}
/*----------------------------------------------------------------*/
/*------------------RECHARGE-OPERATORS----------------------------*/
/*----------------------------------------------------------------*/


Fixed & Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called, address : " << this << std::endl;	
	this->_nbStock= other._nbStock;
	return (*this);
}

bool	Fixed::operator > (const Fixed &other)
{
	std::cout << "Copy 'Greater than' operator called, address : " << this << std::endl;

	if (this->_nbStock > other._nbStock)
		return (1);
	return (0);
}

bool	Fixed::operator < (const Fixed &other)
{
	std::cout << "Copy 'Less than' operator called, address : " << this << std::endl;

	if (this->_nbStock < other._nbStock)
		return (1);
	return (0);
}

bool	Fixed::operator >= (const Fixed &other)
{
	std::cout << "Copy 'Greater than or equal to' operator called, address : " << this << std::endl;

	if (this->_nbStock >= other._nbStock)
		return (1);
	return (0);
}

bool	Fixed::operator <= (const Fixed &other)
{
	std::cout << "Copy 'Less than or equal to' operator called, address : " << this << std::endl;

	if (this->_nbStock <= other._nbStock)
		return (1);
	return (0);
}

bool	Fixed::operator == (const Fixed &other)
{
	std::cout << "Copy 'Equal to' operator called, address : " << this << std::endl;

	if (this->_nbStock == other._nbStock)
		return (1);
	return (0);
}

bool	Fixed::operator != (const Fixed &other)
{
	std::cout << "Copy 'Not Equal' operator called, address : " << this << std::endl;

	if (this->_nbStock != other._nbStock)
		return (1);
	return (0);
}

Fixed	Fixed::operator + (const Fixed &other)
{
	std::cout << "Copy '+' operator called, address : " << this << std::endl;
	Fixed	temp;
	temp._nbStock = this->_nbStock + other._nbStock;
	return (temp);
}

Fixed	Fixed::operator - (const Fixed &other)
{
	std::cout << "Copy '-' operator called, address : " << this << std::endl;
	Fixed	temp;
	temp._nbStock = this->_nbStock - other._nbStock;
	return (temp);
}

Fixed	Fixed::operator * (const Fixed &other)
{
	std::cout << "Copy '*' operator called, address : " << this << std::endl;
	Fixed	temp;
	temp._nbStock = (this->_nbStock * other._nbStock) >> 8;
	return (temp);
}

Fixed	Fixed::operator / (const Fixed &other)
{
	std::cout << "Copy '/' operator called, address : " << this << std::endl;

	Fixed	temp;
	temp._nbStock = this->_nbStock / other._nbStock;
	return (temp);
}

Fixed & Fixed::operator ++ (void)
{
	std::cout << "Copy '++' operator called, address : " << this << std::endl;
	this->_nbStock += 1;
	return (*this);
}

Fixed Fixed::operator ++ (int value)
{
	(void)value;
	std::cout << "Copy '++' operator called, address : " << this << std::endl;
	Fixed	temp(*this);
	this->_nbStock += 1;
	return (temp);
}

Fixed & Fixed::operator -- (void)
{
	std::cout << "Copy '--' operator called, address : " << this << std::endl;
	this->_nbStock -= 1;
	return (*this);
}

Fixed Fixed::operator -- (int value)
{
	(void) value;
	std::cout << "Copy '--' operator called, address : " << this << std::endl;
	Fixed	temp(*this);
	this->_nbStock -= 1;
	return (temp);
}

/*----------------------------------------------------------------*/
/*------------------STATIC-MEMBERS--------------------------------*/
/*----------------------------------------------------------------*/

Fixed & Fixed::min(Fixed &one, Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	return (two);
}

Fixed const & Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	return (two);
}

Fixed & Fixed::max(Fixed &one, Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	return (two);
}

Fixed const & Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	return (two);
}


/*----------------------------------------------------------------*/
/*------------------OTHERS-FUNCTIONS------------------------------*/
/*----------------------------------------------------------------*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called, address : " << this << std::endl;	
	return (this->_nbStock);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called, address : " << this << std::endl;	
	this->_nbStock = raw;
}

float Fixed::toFloat(void) const
{
	float	resFloat;
	resFloat = (float)this->_nbStock / 256.f;
	return (resFloat);
}

int Fixed::toInt(void) const
{
	int		resInt;

	resInt = (this->_nbStock) >> this->_nbBits;
	return (resInt);
}

std::ostream& operator << (std::ostream &out, const Fixed &myFixed)
{
	out << myFixed.toFloat();
	return (out);
}
