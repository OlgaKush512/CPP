/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:57:43 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:57:45 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

	WrongCat(void);
	WrongCat(WrongCat const &other);
	~WrongCat(void);

	WrongCat & operator = (const WrongCat &other);

	void	makeSound(void) const;
};

#endif
