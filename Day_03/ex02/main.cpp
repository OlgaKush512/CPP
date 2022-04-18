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

	for (int i = 0; i < 12; i++)
	{
		fr.attack("pistolet");
		fr.takeDamage(5);
		fr.beRepaired(4);
	}
	fr.highFivesGuys();
	return (0);
}
