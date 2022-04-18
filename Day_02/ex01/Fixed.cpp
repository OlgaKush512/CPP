/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:13:18 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:13:21 by okushnir         ###   ########.fr       */
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

Fixed::Fixed(Fixed const &other) : _nbStock(other.getRawBits())
{
	std::cout << "Copy constructor called, address : " << this << std::endl;
}

Fixed::Fixed(const int my_int) : _nbStock((my_int << this->_nbBits))
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
	this->_nbStock = other._nbStock;
	return (*this);
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
