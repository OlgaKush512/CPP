/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:13:41 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:13:42 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main(void)
{
	FragTrap fr("Nick");

	for (int i = 0; i < 2; i++)
	{
		std::cout << std::endl << std::endl;
		fr.attack("kiwi");
		fr.takeDamage(50);
		fr.beRepaired(4);
	}
	std::cout << std::endl << std::endl;
	fr.highFivesGuys();
	return (0);
}
