/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:01:13 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 21:01:15 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Default constructer of the class MateriaSource called. Adress :" << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->_stock[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	std::cout << "Copy constructor of the class MateriaSource called, address :" << this << std::endl;
	for (int i = 0; i < 4; i++)
		this->_stock[i] = 0;
	for (int i = 0; i < 4 && other._stock[i]; i++)
		this->_stock[i] = other._stock[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructeur of MateriaSource called. Adress :" << this << std::endl;
	for (int i = 0; i < 4 && this->_stock[i]; i++)
		delete this->_stock[i];
}

MateriaSource & MateriaSource::operator = (const MateriaSource &other)
{
	std::cout << "Copy assignment operator of MateriaSource called, address :" << this << std::endl;	
	for (int i = 0; i < 4 && this->_stock[i]; i++)
		delete this->_stock[i];
	for (int i = 0; i < 4; i++)
		this->_stock[i] = 0;
	for (int i = 0; i < 4; i++)
	{
		if (other._stock[i])
			this->_stock[i] = other._stock[i]->clone();
	}
	return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(this->_stock[i]))
		{
			this->_stock[i] = m;
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i] && (this->_stock[i]->getType()).compare(type) == 0)
			return (this->_stock[i]->clone());
	}
	return (0);
}
