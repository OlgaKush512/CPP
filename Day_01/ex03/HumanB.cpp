/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:25:41 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:25:43 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string theName) : _myName(name), _myWeapon(NULL)
{
	std::cout << "Constructor class HumanB called. Name : " << this->_myName << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor class HumanB called. Name : " << this->_myName << std::endl;
}

void HumanB::attack(void)
{
	if (this->_myWeapon)
		std::cout <<  this->_myName << " attacks with their " << this->_myWeapon->getType() << std::endl;
	else
		std::cout <<  this->_myName << " haven't their weapon :( " << std::endl;
}

void HumanB::setWeapon(Weapon &theWeapon)
{
	this->_myWeapon = &theWeapon;
}
