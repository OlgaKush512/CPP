/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:11:55 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:11:56 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default constructer of the class ScavTrap called. Adress : " << this << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric constructer of the class ScavTrap called. Adress : " << this << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "Copy constructor of the class ScavTrap called, address : " << this << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructeur of the class ScavTrap called. Adress : " << this << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &other)
{
	std::cout << "Copy assignment operator of the class ScavTrap called, address : " << this << std::endl;	
	if (this != &other)
		this->ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_notAction())
		return;
	std::cout << "The Robot ScavTrap " << this->_name <<
	" attacks " << target << ", causing " <<
	this->_attackDamage <<" points of damage!" << std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap came into Gatekeeper mode." << std::endl;
}
