/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:03:02 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:03:04 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

void	test(ClapTrap &te)
{
	te.attack("osef");
}

int main(void)
{
	ScavTrap sk("Nick");
	ScavTrap mk = sk;

	for (int i = 0; i < 2; i++)
	{
		sk.attack("Joseph");
		sk.takeDamage(5);
		sk.beRepaired(4);
	}
	test(sk);
	sk.guardGate();
	sk.guardGate();
	return (0);
}
