/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:17:37 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:17:40 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	public:

		Point(void);
		Point(float const x, float const y);

		Point(Point const &other);
		Point & operator = (const Point &other);

		~Point(void);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:

		Fixed const	_x;
		Fixed const	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
