/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:02:34 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:02:36 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cl("Nick");

	for (int i = 0; i < 3; i++)
	{
		cl.attack("kiwi");
		cl.takeDamage(6);
		cl.beRepaired(4);
	}
	return (0);
}
