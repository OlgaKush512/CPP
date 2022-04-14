/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:18:57 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:19:06 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie myZombie("Izi");
	Zombie	*myZombiePtr;

	myZombiePtr = newZombie("Michel");
	randomChump("Joseph");

	delete myZombiePtr;
	return (0);
}
