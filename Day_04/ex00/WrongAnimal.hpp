/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:55:23 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:55:25 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	
	virtual ~WrongAnimal(void);

	WrongAnimal & operator = (const WrongAnimal &other);

	void	makeSound(void) const;
	std::string		getType(void) const;

	protected:

	std::string type;
};

#endif
