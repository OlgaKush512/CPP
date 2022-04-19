/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:59:53 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:59:55 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria
{
	public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const &other);
	
	AMateria & operator = (const AMateria &other);

	virtual ~AMateria(void);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	protected:

	std::string _type;
};

#endif
