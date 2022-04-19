/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:00:17 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 21:00:19 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

	Cure(void);
	Cure(Cure const &other);
	
	~Cure(void);

	Cure & operator = (const Cure &other);

	Cure* clone() const;
	void use(ICharacter& target);

};

#endif
