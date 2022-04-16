/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:12:44 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:12:46 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &other);
		Fixed & operator = (const Fixed &other);

		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:

	int	_nbStock;
	static const int _nbBits = 8;
};

#endif
