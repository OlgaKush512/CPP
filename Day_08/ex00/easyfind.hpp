/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:48:37 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/24 21:48:39 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>

class CantFind : public std::exception
{
	public:

	const char* what(void) const throw()
	{
		return ("CantFindError:The element is not found.");
	}
};

template <typename T>
typename T::iterator easyfind(T &v, int myInt)
{
	typename T::iterator it = std::find(v.begin(), v.end(), myInt);

	if (it == v.end())
		throw CantFind();
	return (it);
}


#endif
