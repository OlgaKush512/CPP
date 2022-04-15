/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:26:17 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:26:19 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <cctype>

class Weapon
{
	public:
		
		Weapon(std::string name);
		~Weapon(void);

		const std::string	&getType(void) const;
		void 	setType(std::string name);

	private:
		std::string	_type;
};

#endif
