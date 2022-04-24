/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:49:24 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/24 21:49:26 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>
# include <numeric> 
class Span
{
	public:

		Span(unsigned int n);
		Span(Span const &other);
		Span & operator = (const Span &other);
		~Span();

	void			addNumber(int element);
	void			addAll(void);
	int				shortestSpan(void);
	int				longestSpan(void) const;
	void			printSpan(void) const;

	class ErrorAddNewElement: public std::exception
	{
		const char* what(void) const throw();
	};

	class ErrorDistanceNotFound : public std::exception
	{
		const char* what(void) const throw();
	};

	private:

	unsigned int		_size;
	std::vector<int>	_myVector;

	int	_randomNum(void);

	Span(void);
};

std::ostream& operator << (std::ostream &out, const Span &mySpan);

#endif
