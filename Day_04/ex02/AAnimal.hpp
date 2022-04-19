/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:58:03 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:58:05 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	public:

	AAnimal(void);
	AAnimal(AAnimal const &other);
	
	virtual ~AAnimal(void);

	AAnimal & operator = (const AAnimal &other);

	virtual void	makeSound(void) const = 0;
	virtual std::string		getType(void) const;

	protected:

	std::string type;
};

#endif
