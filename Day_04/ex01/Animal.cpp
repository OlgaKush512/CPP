/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:56:04 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:56:06 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructer of the class Animal called. Adress :" << this << std::endl;
	this->type = "Someone";
}

Animal::Animal(Animal const &other)
{
	std::cout << "Copy constructor of the class Animal called, address :" << this << std::endl;
	*this = other;
}

Animal::~Animal(void)
{
	std::cout << "Destructeur of Animal called. Adress :" << this << std::endl;
}

Animal & Animal::operator = (const Animal &other)
{
	std::cout << "Copy assignment operator of Animal called, address :" << this << std::endl;	
	this->type = other.type ;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Icantspeak!" << std::endl;	
}

std::string		Animal::getType(void) const
{
	return (this->type);
}
