/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:27:55 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:27:57 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

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

int Harl::index(std::string level)
{
	int	i;

	i = 0;
	while ((levels[i].compare(level) != 0) && i < 4)
		i++;
	return (i);
}

void Harl::complain(int i)
{
	std::string	level;

	level = levels[i];
	std::cout << "[ " << level << " ]" << std::endl;
	(this->*myArr[i])();
	std::cout << std::endl;
}
