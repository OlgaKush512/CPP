/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:17:27 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:17:29 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*----------------------------------------------------------------*/
/*------------------CONSTRUCTORS----------------------------------*/
/*----------------------------------------------------------------*/

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point(Point const &other) : _x(other._x), _y(other._y)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

/*----------------------------------------------------------------*/
/*------------------RECHARGE-OPERATORS----------------------------*/
/*----------------------------------------------------------------*/


Point & Point::operator = (const Point &other)
{
	(void)other;
	return (*this);
}


Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}
