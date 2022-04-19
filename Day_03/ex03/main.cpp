/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:06:11 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:06:15 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamant("Nick");

	std::cout << std::endl;
	diamant.getValues();
	std::cout << std::endl;
	diamant.attack("Kekw");
	diamant.takeDamage(40);
	std::cout << std::endl;
	diamant.getValues();
	std::cout << std::endl;

	diamant.whoAmI();
	std::cout << std::endl;
	diamant.highFivesGuys();
	std::cout << std::endl;
	diamant.guardGate();
	std::cout << std::endl;
	return (0);
}
