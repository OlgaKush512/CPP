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

	for (int i = 0; i < 2; i++)
	{
		std::cout << std::endl << std::endl;
		sk.attack("kiwi");
		sk.takeDamage(30);
		sk.beRepaired(4);
	}
	std::cout << std::endl << std::endl;
	test(sk);
	sk.guardGate();
	return (0);
}
