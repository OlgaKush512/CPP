/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:25:18 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:25:22 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &theWeapon) : _myName(name), _myWeapon(theWeapon)
{
	std::cout << "Constructor class HumanA called. Name : " << this->_myName << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor class HumanA called. Name : " << this->_myName << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout <<  this->_myName << " attacks with their " << this->_myWeapon.getType() << std::endl;
}
