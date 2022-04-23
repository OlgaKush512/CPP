/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:08:59 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/23 15:09:01 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T const min(T const &x, T const &y)
{
	return (y <= x ? y : x);
}

template <typename T>
T const max(T const &x, T const &y)
{
	return (y >= x ? y : x);
}

#endif
