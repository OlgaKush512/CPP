/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:56:43 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:56:45 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat(void);
		Cat(Cat const &other);
		virtual ~Cat(void);

		Cat & operator = (const Cat &other);

		virtual void	makeSound(void) const;

	private:

		Brain* _myBrain;
};

#endif
