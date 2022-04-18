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

	diamant.getValues();
	diamant.attack("Kekw");
	diamant.getValues();
	return (0);
}
