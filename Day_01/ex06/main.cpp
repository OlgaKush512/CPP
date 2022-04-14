/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:28:13 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:28:19 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	my_harl;
	int		i;

	if (argc != 2)
		std::cout << "Enter <level>" << std::endl;
	else
	{
		i = my_harl.index(argv[1]);
		switch (i)
		{
			case 0:
				my_harl.complain(i++);
			case 1:
				my_harl.complain(i++);
			case 2:
				my_harl.complain(i++);
			case 3:
				my_harl.complain(i++);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" 
				<<std::endl;
		}
	}

	return (0);
}
