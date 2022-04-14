/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:20:13 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:20:15 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie myZombie("Izi");
	Zombie	*myZombiePtr;
	int N;

	N = 5;
	myZombiePtr = zombieHorde(N, "Michel");
	for (int i = 0; i < N; i++)
		myZombiePtr[i].announce();
	delete [] myZombiePtr;
	return (0);
}
