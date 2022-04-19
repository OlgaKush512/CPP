/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:00:30 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 21:00:33 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

	Ice(void);
	Ice(Ice const &other);
	
	~Ice(void);

	Ice & operator = (const Ice &other);

	Ice* clone() const;
	void use(ICharacter& target);

};

#endif
