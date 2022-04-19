/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:56:59 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:57:02 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const &other);
		virtual ~Dog(void);

		Dog & operator = (const Dog &other);

		virtual void	makeSound(void) const;
		
	private:

		Brain* _myBrain;
};

#endif
