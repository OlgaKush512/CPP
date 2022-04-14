/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:19:43 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:19:47 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("New Zombie")
{
	std::cout << "Constructor default class Zombie called."<< std::endl;
	return;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor class Zombie called. Name : " << this->_name << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor class Zombie called. Name : " << this->_name << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
