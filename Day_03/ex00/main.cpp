/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:10:44 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:10:46 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cl("Nick");

	for (int i = 0; i < 12; i++)
	{
		cl.attack("pistolet");
		cl.takeDamage(5);
		cl.beRepaired(4);
	}
	return (0);
}
