/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:08:30 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/23 15:08:32 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

template <typename T>
void	printValue(T x)
{
	std::cout << x << std::endl;
}

int main( void ) 
{
	int a[] = {2, 3, 7, 10};
	std::string str[] = {"Helo, ", "maaan!"};
	char const *str1 = "lslsls";


	iter(a, 4, &printValue);
	iter(str, 2, &printValue);
	iter(str1, 6, &printValue);
	
	return (0);
}
