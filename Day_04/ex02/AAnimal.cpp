/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:57:56 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:57:58 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default constructer of the class AAnimal called. Adress :" << this << std::endl;
	this->type = "Someone";
}

AAnimal::AAnimal(AAnimal const &other)
{
	std::cout << "Copy constructor of the class AAnimal called, address :" << this << std::endl;
	*this = other;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructeur of AAnimal called. Adress :" << this << std::endl;
}

AAnimal & AAnimal::operator = (const AAnimal &other)
{
	std::cout << "Copy assignment operator of AAnimal called, address :" << this << std::endl;	
	this->type = other.type ;
	return (*this);
}

std::string		AAnimal::getType(void) const
{
	return (this->type);
}
