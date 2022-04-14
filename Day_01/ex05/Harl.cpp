/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:27:20 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:27:23 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";

	this->myArr[0] = &Harl::_debug;
	this->myArr[1] = &Harl::_info;
	this->myArr[2] = &Harl::_warning;
	this->myArr[3] = &Harl::_error;
	return ;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::_debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::_info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void Harl::_warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void Harl::_error(void)
{
	std::cout << ERROR_MSG << std::endl;
}

void Harl::complain(std::string level)
{
	int	i;

	i = 0;
	while ((levels[i].compare(level) != 0) && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	(this->*myArr[i])();
}
