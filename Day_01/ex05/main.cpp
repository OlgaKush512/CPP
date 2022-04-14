/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:27:41 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:27:44 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl			my_harl;
	std::string		my_level;


	if (argc != 2)
		std::cout << "Enter <level>" << std::endl;
	else
	{
		my_level = (std::string)argv[1];
		my_harl.complain(argv[1]);
	}
	return (0);
}
