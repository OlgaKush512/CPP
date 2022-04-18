/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:05:50 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:05:52 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default constructer of the class FragTrap called. Adress : " << this << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Main constructer of the class FragTrap called. Adress : " << this << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "Copy constructor of the class FragTrap called, address : " << this << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructeur of the class FragTrap called. Adress : " << this << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap &other)
{
	std::cout << "Copy assignment operator of the class FragTrap called, address : " << this << std::endl;
	if (this != &other)
		this->ClapTrap::operator=(other);
	return (*this);
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "High five, Maaan!" << std::endl;
}
