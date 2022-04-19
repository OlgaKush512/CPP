/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:58:46 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:58:49 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
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
