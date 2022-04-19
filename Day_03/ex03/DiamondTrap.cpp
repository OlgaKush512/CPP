/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:05:13 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:05:15 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	std::cout << "Default constructer of the class DiamondTrap called. Adress : " << this << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Main constructer of the class DiamondTrap called. Adress : " << this << std::endl;
	this->_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	std::cout << "Copy constructor of the class DiamondTrap called, address : " << this << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructeur of the class DiamondTrap called. Adress : " << this << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap &other)
{
	std::cout << "Copy assignment operator of the class DiamondTrap called, address : " << this << std::endl;
	if (this != &other)
		this->ClapTrap::operator=(other);
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << _name << "!" << std::endl;
}

void DiamondTrap::getValues(void)
{
	std::cout << "_name: "<< this->_name << std::endl;
	std::cout << "_hitPoints: "<< this->_hitPoints << std::endl;
	std::cout << "_energyPoints: " << this->_energyPoints << std::endl;
	std::cout << "_attackDamage: " << this->_attackDamage << std::endl;
}
