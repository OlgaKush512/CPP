/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:50:52 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/24 21:50:56 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <stack>
# include <exception>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack(void){};
		MutantStack(MutantStack const &other)
		{
			*this = other;
		};
		MutantStack & operator = (const MutantStack &other)
		{
			this->c = other.c;
			return (*this);
		};
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		
		iterator begin(void)
		{
			return (this->c.begin());
		}

		const_iterator begin(void) const
		{
			return (this->c.begin());
		}

		reverse_iterator rbegin(void)
		{
			return (this->c.rbegin());
		}

		const_reverse_iterator rbegin(void) const
		{
			return (this->c.rbegin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}

		const_iterator end(void) const
		{
			return (this->c.end());
		}

		reverse_iterator rend(void)
		{
			return (this->c.rend());
		}

		const_reverse_iterator rend(void) const
		{
			return (this->c.rend());
		}
};


#endif
