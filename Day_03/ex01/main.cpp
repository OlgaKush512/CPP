/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:11:48 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:11:49 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main(void)
{
	ScavTrap sk("Nick");

	for (int i = 0; i < 2; i++)
	{
		sk.attack("Joseph");
		sk.takeDamage(5);
		sk.beRepaired(4);
	}
	sk.guardGate();
	return (0);
}
