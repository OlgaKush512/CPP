/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:13:26 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:13:29 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const int my_int);
		Fixed(const float my_float);

		Fixed(Fixed const &other);
		Fixed & operator = (const Fixed &other);

		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

	private:

		int	_nbStock;
		static const int _nbBits = 8;
};

std::ostream& operator << (std::ostream &out, const Fixed &myFixed);

#endif
