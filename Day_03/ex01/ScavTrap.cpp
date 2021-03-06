/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:03:30 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:03:32 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default constructor of the class ScavTrap called. Adress : " << this << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric constructor of the class ScavTrap called. Adress : " << this << std::endl;
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
	std::cout << "Destructor of the class ScavTrap called. Adress : " << this << std::endl;
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
	if (_notAction())
	{
		std::cout << "ScavTrap can't come into Gatekeeper mode." << std::endl;
		return;
	}
	std::cout << "ScavTrap came into Gatekeeper mode." << std::endl;
}
