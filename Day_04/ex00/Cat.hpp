/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:11 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:53:12 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:

	Cat(void);
	Cat(Cat const &other);
	virtual ~Cat(void);

	Cat & operator = (const Cat &other);

	virtual void	makeSound(void) const;
};

#endif
