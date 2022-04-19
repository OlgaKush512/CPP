/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:00:05 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 21:00:06 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

		Character(void);
		Character(std::string const & name);
		Character(Character const &other);
		Character & operator = (const Character &other);
		
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:

	AMateria *_inventary[4];
	std::string _name;
};

#endif
