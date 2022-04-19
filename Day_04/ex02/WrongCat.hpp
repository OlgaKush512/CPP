/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:59:36 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:59:38 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

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
