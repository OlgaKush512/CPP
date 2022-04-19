/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:39 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:53:44 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:

	Dog(void);
	Dog(Dog const &other);
	virtual ~Dog(void);

	Dog & operator = (const Dog &other);

	virtual void	makeSound(void) const;
};

#endif
