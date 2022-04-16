/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:16:52 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:16:55 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/*----------------------------------------------------------------*/
/*------------------CONSTRUCTORS----------------------------------*/
/*----------------------------------------------------------------*/

Fixed::Fixed(void) : _nbStock(0)
{
	return ;
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed::Fixed(const int my_int) : _nbStock(my_int << this->_nbBits)
{
	return ;
}

Fixed::Fixed(const float my_float) : _nbStock(my_float * (float)256)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

/*----------------------------------------------------------------*/
/*------------------RECHARGE-OPERATORS----------------------------*/
/*----------------------------------------------------------------*/


Fixed & Fixed::operator = (const Fixed &other)
{
	this->_nbStock= other._nbStock;
	return (*this);
}

bool	Fixed::operator > (const Fixed &other)
{
	if (this->_nbStock > other._nbStock)
		return (1);
	else
		return (0);
}

bool	Fixed::operator < (const Fixed &other)
{
	if (this->_nbStock < other._nbStock)
		return (1);
	else
		return (0);
}

bool	Fixed::operator >= (const Fixed &other)
{
	if (this->_nbStock >= other._nbStock)
		return (1);
	else
		return (0);
}

bool	Fixed::operator <= (const Fixed &other)
{
	if (this->_nbStock <= other._nbStock)
		return (1);
	else
		return (0);
}

bool	Fixed::operator == (const Fixed &other)
{
	if (this->_nbStock == other._nbStock)
		return (1);
	else
		return (0);
}

bool	Fixed::operator != (const Fixed &other)
{
	if (this->_nbStock != other._nbStock)
		return (1);
	else
		return (0);
}

Fixed	Fixed::operator + (const Fixed &other)
{
	Fixed	temp;
	temp._nbStock = this->_nbStock + other._nbStock;
	return (temp);
}

Fixed	Fixed::operator - (const Fixed &other)
{
	Fixed	temp;
	temp._nbStock = this->_nbStock - other._nbStock;
	return (temp);
}

Fixed	Fixed::operator * (const Fixed &other)
{
	Fixed	temp;
	temp._nbStock = (this->_nbStock * other._nbStock) >> 8;
	return (temp);
}

Fixed	Fixed::operator / (const Fixed &other)
{
	Fixed	temp;
	temp._nbStock = this->_nbStock / other._nbStock;
	return (temp);
}

Fixed & Fixed::operator ++ (void)
{
	this->_nbStock += 1;
	return (*this);
}

Fixed Fixed::operator ++ (int value)
{
	(void)value;
	Fixed	temp(*this);
	this->_nbStock += 1;
	return (temp);
}

Fixed & Fixed::operator -- (void)
{
	this->_nbStock -= 1;
	return (*this);
}

Fixed Fixed::operator -- (int value)
{
	(void) value;
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
	else
		return (two);
}

Fixed const & Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	else
		return (two);
}

Fixed & Fixed::max(Fixed &one, Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	else
		return (two);
}

Fixed const & Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	else
		return (two);
}


/*----------------------------------------------------------------*/
/*------------------OTHERS-FUNCTIONS------------------------------*/
/*----------------------------------------------------------------*/

int Fixed::getRawBits(void) const
{
	return (this->_nbStock);
}

void Fixed::setRawBits(int const raw)
{
	this->_nbStock = raw;
}

float Fixed::toFloat(void) const
{
	float	resFloat;
	resFloat = (float)this->_nbStock / 256.f;
	return resFloat;
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
