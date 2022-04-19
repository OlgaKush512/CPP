/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:55:33 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:55:35 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default constructer of the class WrongCat called. Adress :" << this << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << "Copy constructor of the class WrongCat called, address :" << this << std::endl;
	*this = other;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructeur of WrongCat called. Adress :" << this << std::endl;
}

WrongCat & WrongCat::operator = (const WrongCat &other)
{
	std::cout << "Copy assignment operator of WrongCat called, address :" << this << std::endl;	
	this->type = other.type ;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Kikikikiikiiki!" << std::endl;	
}
