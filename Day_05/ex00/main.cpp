/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:06:57 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:06:58 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat br("Michel", 30);
		std::cout << br;
		br.incrementGrade();
		std::cout << br;
		br.decrementGrade();
		br.decrementGrade();
		std::cout << br;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
