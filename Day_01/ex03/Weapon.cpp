/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:26:07 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:26:09 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name)
{
	std::cout << "Constructor class Weapon called. Type : " << this->_type << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor class Weapon called. Type : " << this->_type << std::endl;
	return ;
}

const std::string &Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string name)
{
	this->_type = name;
	return ;
}
