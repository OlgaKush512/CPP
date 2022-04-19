/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:52:56 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:52:58 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:

	Animal(void);
	Animal(Animal const &other);
	
	virtual ~Animal(void);

	Animal & operator = (const Animal &other);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

	protected:

	std::string type;
};

#endif
