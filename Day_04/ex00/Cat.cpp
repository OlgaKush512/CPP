/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:03 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:53:05 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructer of the class Cat called. Adress :" << this << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &other)
{
	std::cout << "Copy constructor of the class Cat called, address :" << this << std::endl;
	*this = other;
}

Cat::~Cat(void)
{
	std::cout << "Destructeur of Cat called. Adress :" << this << std::endl;
}

Cat & Cat::operator = (const Cat &other)
{
	std::cout << "Copy assignment operator of Cat called, address :" << this << std::endl;	
	this->type = other.type ;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "mmmiaaaaou.... mmmiaaaaaouuuuuu..... MIAAAOUUUUU!" << std::endl;	
}
