/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:01:23 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 21:01:25 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const &other);
		MateriaSource & operator = (const MateriaSource &other);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:

	AMateria *_stock[4];

};

#endif
