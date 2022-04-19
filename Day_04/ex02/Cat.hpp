/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:58:31 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:58:32 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
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
