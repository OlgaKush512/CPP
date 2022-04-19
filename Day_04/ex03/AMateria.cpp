/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:59:48 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:59:49 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
	std::cout << "Default constructer of the class AMateria called. Adress :" << this << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parametric constructor of the class AMateria called, address :" << this << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
	std::cout << "Copy constructor of the class AMateria called, address :" << this << std::endl;
	*this = other;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructeur of AMateria called. Adress :" << this << std::endl;
}

AMateria & AMateria::operator = (const AMateria &other)
{
	(void)other;
	std::cout << "Copy assignment operator of AMateria called, address :" << this << std::endl;	
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;

	// std::cout << "AMateria::use" << std::endl;	
}
