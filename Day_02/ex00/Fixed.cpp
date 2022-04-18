/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:12:36 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:12:39 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) : _nbStock(0)
{
	std::cout << "Default constructer called. Adress : " << this << std::endl;
}

Fixed::Fixed(Fixed const &other) : _nbStock(other.getRawBits())
{
	std::cout << "Copy constructor called, address : " << this << std::endl;
	this->_nbStock = other.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructeur called. Adress : " << this << std::endl;
}

Fixed & Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called, address : " << this << std::endl;	
	this->_nbStock = other.getRawBits();
	return (*this);
}

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
